# Rush Parkour — Technical Specification Document

> Complete technical architecture, engine internals, optimization pipeline, and systems design reference.

---

## Table of Contents

- [1. Engine & Build Configuration](#1-engine--build-configuration)
- [2. Rendering Pipeline](#2-rendering-pipeline)
- [3. Game Architecture](#3-game-architecture)
- [4. Physics & Collision Systems](#4-physics--collision-systems)
- [5. Enemy AI & Pathfinding](#5-enemy-ai--pathfinding)
- [6. Character & Animation Systems](#6-character--animation-systems)
- [7. 3D Asset Pipeline & Modeling](#7-3d-asset-pipeline--modeling)
- [8. Optimization & Memory Management](#8-optimization--memory-management)
- [9. Packaging & Distribution Architecture](#9-packaging--distribution-architecture)
- [10. Hardware Performance Profile](#10-hardware-performance-profile)
- [11. Plugin & Module Manifest](#11-plugin--module-manifest)
- [12. File Inventory & Size Analysis](#12-file-inventory--size-analysis)

---

## 1. Engine & Build Configuration

| Property               | Value                                                          |
| :--------------------- | :------------------------------------------------------------- |
| **Engine**             | Unreal Engine 5.3.2                                            |
| **Engine Build**       | `++UE5+Release-5.3-CL-29314046`                               |
| **File Version**       | `5.3.2.0`                                                      |
| **Build Configuration**| Development                                                    |
| **Target Platform**    | Win64 (x86-64)                                                 |
| **Programming Model**  | Blueprint Visual Scripting (no custom C++ modules)             |
| **Executable Type**    | Monolithic standalone (all engine modules linked into a single `.exe`) |

### Build Metadata (from runtime CSV profiler)

```
platform        = Windows
config          = Development
buildversion    = ++UE5+Release-5.3-CL-29314046
engineversion   = 5.3.2-29314046+++UE5+Release-5.3
os              = Windows 11 (26H2) [10.0.26340.9502]
cpu             = GenuineIntel|11th Gen Intel(R) Core(TM) i5-1135G7 @ 2.40GHz
pgoenabled      = 0
ltoenabled      = 0
asan            = 0
```

---

## 2. Rendering Pipeline

### Graphics API

| Property                    | Value                                              |
| :-------------------------- | :------------------------------------------------- |
| **RHI (Render Hardware Interface)** | DirectX 12 (`D3D12RHI`)                   |
| **Shader Model**            | SM6 (Shader Model 6)                               |
| **Targeted Shader Formats** | `PCD3D_SM6` (D3D12), `PCD3D_SM6` (D3D11 fallback), `PCVulkan_SM6` (Vulkan fallback) |
| **NVIDIA Aftermath**        | Initialized (crash diagnostics enabled)            |

### Rendering Strategy

The game is specifically optimized for **integrated graphics hardware** rather than dedicated GPUs. The following strategies ensure stable framerates on low-power silicon:

- **DirectX 12 Low-Overhead Rendering:** DX12's explicit resource management and reduced driver overhead is leveraged to extract maximum performance from integrated GPUs that have limited shader cores and shared memory bandwidth.
- **No Ray Tracing:** Hardware-accelerated ray tracing (DXR) is not used. All lighting and shadows use traditional rasterization techniques optimized for integrated GPUs.
- **Scalability Settings:** All quality groups (shadows, global illumination, reflections, post-processing, anti-aliasing, textures, effects, foliage, shading) are configured at the lowest tier (`0`) in the default profile to guarantee performance on target hardware.
---

## 3. Game Architecture

### World Structure

| Property             | Value                                                           |
| :------------------- | :-------------------------------------------------------------- |
| **Main Map**         | `/Game/ThirdPerson/Maps/RushParkourMainWorld`                   |
| **Game Mode**        | `BP_ThirdPersonGameMode_C` (Blueprint-based)                    |
| **Map Load Time**    | ~2.0 seconds (initial), ~3.5 seconds (subsequent reloads)      |
| **Template Origin**  | UE5 Third Person Template (extended with custom Blueprints)     |

### Gameplay Systems (Blueprint Implementation)

All game logic is implemented using **Unreal Engine's Blueprint Visual Scripting** system. Key systems include:

#### Platform System
- **Static Platforms:** Standard `StaticMeshActor` instances placed in the level editor. No tick overhead.
- **Moving Platforms:** Blueprint actors with `Timeline`-driven interpolation along spline or linear paths. Movement is deterministic and frame-rate independent using delta-time interpolation.
- **Physics-Triggered Platforms:** Static meshes with physics simulation initially disabled. An `OnComponentBeginOverlap` trigger (bound to the player's capsule collision) enables `Simulate Physics` on the platform's mesh component, causing it to fall under gravity. This creates a "crumbling platform" mechanic that demands immediate reaction.

#### Reset System
- Falling below a defined Z-threshold (kill volume / kill plane) triggers an immediate full level reload via `OpenLevel` or `RestartGame`, resetting the player and all world state to the initial configuration.
- The map reload approach (`Browse: /Game/ThirdPerson/Maps/RushParkourMainWorld`) guarantees a complete state reset — all physics-triggered platforms return to their original static positions, all enemies respawn, and the player begins at the spawn point.

#### Combat System
- **Stomp Kill:** When the player's capsule overlaps an enemy from above (verified by checking relative Z-position of the overlap), the enemy is destroyed and removed from the level.
- **Player Death:** When an enemy's collision overlaps the player laterally or from above, the player character's skeletal mesh component detaches from the movement component and transitions to ragdoll via `SetSimulatePhysics(true)` on all skeletal mesh bodies, followed by a timed level reset.

---

## 4. Physics & Collision Systems

### Gravity & Physics Simulation

| Property                    | Value                                          |
| :-------------------------- | :--------------------------------------------- |
| **Physics Engine**          | Chaos Physics (UE5 default)                    |
| **Gravity**                 | Standard UE5 gravity (`-980 cm/s²` on Z-axis)  |
| **Physics Sub-stepping**    | Engine default                                 |

### Hybrid Platform Physics Model

The game uses a **hybrid static/dynamic physics architecture** for performance:

1. **Static Platforms (majority):** Have no physics simulation enabled. They exist as static collision geometry with zero CPU overhead per frame. This is critical because the game contains 100–200 platform assets.
2. **Physics-Triggered Platforms:** Begin as static objects. When the player touches them, a Blueprint event enables `Simulate Physics` on that specific platform mesh. The Chaos physics solver then applies gravity, causing the platform to fall. Only the triggered platforms consume physics simulation resources at any given time.
3. **Ragdoll Death Physics:** The player character's physics asset (skeletal mesh body setup) is pre-configured with per-bone collision capsules and constraints. On death, all constraints are unlocked and physics simulation is enabled, producing a natural ragdoll fall.

---

## 5. Enemy AI & Pathfinding

### AI Architecture

| Component                   | Implementation                                   |
| :-------------------------- | :----------------------------------------------- |
| **AI Module**               | UE5 `AIModule` (`LogAIModule: Creating AISystem for world RushParkourMainWorld`) |
| **Navigation**              | NavMesh-based pathfinding on platform surfaces   |
| **Perception**              | AI Perception component with sight sense          |
| **Behaviour**               | Blueprint-driven Behaviour Tree or simple state machine |

### Enemy Behaviour

1. **Patrol State:** Enemies follow a predefined patrol path on their designated platform using NavMesh navigation. Movement is constrained to the platform boundaries.
2. **Detection State:** When the player enters the enemy's AI perception radius (sight cone), the enemy transitions to a tracking/pursuit state and moves toward the player's location.
3. **Kill Condition:** Direct collision between the enemy's hitbox and the player character triggers the player death sequence (ragdoll + level reset).
4. **Vulnerability:** Enemies can be defeated by the player jumping on top of them. The overlap direction check (player above enemy) determines whether the contact results in an enemy kill or a player death.

---

## 6. Character & Animation Systems

### Character Configuration

| Property              | Value                                                      |
| :-------------------- | :--------------------------------------------------------- |
| **Character Base**    | UE5 Third Person Character Blueprint                       |
| **Movement Mode**     | `CharacterMovementComponent` (walking, falling, jumping)   |
| **Input System**      | Enhanced Input System (`EnhancedInput` plugin)             |
| **Skeletal Mesh**     | UE5 Mannequin / custom character mesh                      |
| **Animation System**  | Animation Blueprints with state machines                   |

### Relevant Animation & Rigging Plugins

The build loads the following animation and rigging plugins, indicating usage of advanced skeletal animation features:

| Plugin                  | Purpose                                                        |
| :---------------------- | :------------------------------------------------------------- |
| **ACLPlugin**           | Animation Compression Library — reduces animation memory footprint |
| **ControlRig**          | Runtime procedural rig manipulation for dynamic animation      |
| **ControlRigSpline**    | Spline-based procedural animation curves                       |
| **IKRig**               | Inverse Kinematics rig for foot placement and limb adaptation  |
| **FullBodyIK**          | Full-body inverse kinematics solver                            |
| **LiveLink**            | Real-time animation streaming interface                        |

### Ragdoll System

On player death:
1. The `CharacterMovementComponent` is deactivated.
2. `SetSimulatePhysics(true)` is called on the skeletal mesh component.
3. The physics asset's per-bone constraints allow each bone to fall independently under gravity.
4. The camera either follows the ragdoll or holds position as the body tumbles off the platform.
5. After a brief delay, the level is reloaded to reset all state.

---

## 7. 3D Asset Pipeline & Modeling

### Asset Sourcing & Modification Workflow

```
Unreal Engine Marketplace    →    Blender (Optimization)    →    Unreal Engine (Integration)
     (Source Assets)              - Re-topology                    - Material assignment
                                  - Polygon reduction              - Collision setup
                                  - LOD mesh generation            - Level placement
                                  - UV cleanup                     - Physics configuration
```

### Optimization in Blender

All 3D models sourced from the **Unreal Engine Marketplace** were imported into **Blender** for optimization before being reintegrated into the project:

- **Re-topology:** Complex meshes were retopologized to produce cleaner edge flow with fewer polygons while preserving visual silhouette.
- **Polygon Reduction:** Unnecessary interior geometry, hidden faces, and excessive edge loops were stripped. This is critical for integrated GPUs where vertex processing throughput is limited.
- **LOD Generation:** Each optimized mesh was exported at **3 to 4 Level of Detail (LOD) stages** with progressively reduced polygon counts:
  - **LOD 0:** Full detail — used when the platform is near the camera.
  - **LOD 1:** ~50% polygon reduction — medium distance.
  - **LOD 2:** ~75% polygon reduction — far distance.
  - **LOD 3:** ~90% polygon reduction — extreme distance / background.

### LOD Rendering Strategy

Unreal Engine's automatic LOD switching system transitions between detail levels based on the object's screen-space size. For a sky platformer with many distant platforms visible simultaneously, LOD optimization has an outsized impact — the majority of visible platforms at any moment are at LOD 2 or LOD 3, dramatically reducing the per-frame polygon count.

---

## 8. Optimization & Memory Management

### Rendering Optimization

| Technique                 | Implementation                                                  |
| :------------------------ | :-------------------------------------------------------------- |
| **Occlusion Culling**     | Enabled — objects outside the camera frustum or occluded by other geometry are culled before the draw call stage. |
| **LOD System**            | 3–4 LOD stages per mesh asset; automatic screen-size-based switching. |
| **Resolution Scaling**    | Internal render resolution at 71% of display resolution.        |
| **Frame Rate Cap**        | 70 FPS hard cap — prevents GPU from overworking on simple scenes. |
| **Scalability Presets**   | All quality tiers set to `0` (lowest) for maximum headroom.     |

### Memory Strategy

| Metric                   | Value                                                            |
| :----------------------- | :--------------------------------------------------------------- |
| **Total Assets**         | 100 – 200 meshes, textures, materials, and sounds                |
| **Loading Strategy**     | All assets **pre-loaded into RAM at launch**                     |
| **Runtime RAM Usage**    | ~1.5 GB                                                          |
| **Streaming**            | Disabled (all content resident in memory)                        |

**Rationale:** In a fast-paced parkour game, any micro-stutter caused by loading assets on demand during gameplay (texture streaming, mesh loading) would break the flow of precise jumps and timing. By pre-loading the entire level into RAM at startup, the game guarantees **zero disk I/O during gameplay**, providing a smooth, consistent framerate throughout the run.

### Static vs Dynamic Resource Allocation

| Element               | Count    | Physics Simulation | CPU Cost      |
| :-------------------- | :------- | :------------------ | :------------ |
| Static Platforms      | Majority | Disabled            | Near zero     |
| Physics Platforms     | Few      | On-demand (trigger) | Minimal       |
| Enemy AI Agents       | Few      | NavMesh pathfinding | Low           |
| Player Character      | 1        | Always active       | Low           |

> The vast majority of the level consists of **static geometry with no per-frame physics cost**. Only player interaction dynamically activates physics on specific platforms, keeping CPU utilization minimal.

---

## 9. Packaging & Distribution Architecture

### Packaging Format

The game is packaged using Unreal Engine 5's modern **IoStore / Zen Store** containerization system:

| File                             | Format  | Size       | Contents                                           |
| :------------------------------- | :------ | :--------- | :------------------------------------------------- |
| `Rush_Parkour-Windows.ucas`      | IoStore | 605.39 MB  | Primary container — all meshes, textures, materials, animations, audio, and level data. |
| `Rush_Parkour-Windows.utoc`      | IoStore | 875 KB     | Table of contents index for the `.ucas` container.  |
| `Rush_Parkour-Windows.pak`       | PAK     | 9.40 MB    | Supplementary cooked assets and metadata.           |
| `global.ucas`                    | IoStore | 1.76 MB    | Global engine shader and material assets.           |
| `global.utoc`                    | IoStore | 551 B      | Global container index.                             |

### Standalone Distribution

- **No External Dependencies:** The build bundles the required **C++ runtime redistributables** directly within the `Engine/Extras/Redist/` folder (`UEPrereqSetup_x64.exe`, 48.12 MB). Players do not need to install Visual C++ runtimes separately.
- **No Internet Required:** The game is fully offline. No cloud saves, no telemetry, no online services.
- **Single-Folder Deployment:** The entire game runs from a single folder. No installation or registry modification is required — it is fully portable.

### Executable Architecture

| Binary                          | Size       | Description                                       |
| :------------------------------ | :--------- | :------------------------------------------------ |
| `Rush_Parkour.exe` (root)       | 263 KB     | Launcher/stub executable                          |
| `Rush_Parkour.exe` (Win64)      | 212.23 MB  | Monolithic game binary — contains entire UE5 runtime, Chaos physics engine, audio engine, rendering pipeline, and all Blueprint-compiled game logic |

### Runtime Dependencies (DLLs)

The following third-party libraries are bundled with the build:

| Library                              | Size    | Purpose                                  |
| :----------------------------------- | :------ | :--------------------------------------- |
| `D3D12Core.dll`                      | 5.37 MB | DirectX 12 runtime core                  |
| `d3d12SDKLayers.dll`                 | 9.03 MB | DirectX 12 SDK debug/validation layers   |
| `dbghelp.dll`                        | 2.13 MB | Windows debugging helper (crash reports) |
| `GFSDK_Aftermath_Lib.x64.dll`       | 1.79 MB | NVIDIA Aftermath GPU crash diagnostics   |
| `libvorbis_64.dll`                   | 1.65 MB | Ogg Vorbis audio codec                   |

---

## 10. Hardware Performance Profile

### Reference Hardware

| Component   | Specification                                                     |
| :---------- | :---------------------------------------------------------------- |
| **CPU**     | 11th Gen Intel Core i5-1135G7 — 4 cores / 8 threads @ 2.40 GHz   |
| **RAM**     | 8 GB DDR4 (dual-channel)                                          |
| **GPU**     | Intel Iris Xe Graphics (integrated, 80 EUs)                       |
| **OS**      | Windows 11 (26H2) Build 10.0.26340.9502                          |
| **Storage** | SSD (recommended for <2s map load times)                          |

### Framerate Benchmarks

| Condition                         | Settings | FPS Range       |
| :-------------------------------- | :------- | :-------------- |
| Plugged in (high-performance)     | High     | 60 – 70+ FPS   |
| Battery mode                      | High     | 50 – 60 FPS    |
| Plugged in (performance mode)     | Low      | Up to 80 FPS   |

### Minimum System Requirements

| Component   | Minimum                                      |
| :---------- | :------------------------------------------- |
| **OS**      | Windows 10 64-bit                            |
| **CPU**     | Intel Core i3 (11th Gen) or equivalent       |
| **RAM**     | 8 GB                                         |
| **GPU**     | DirectX 12 compatible (integrated or dedicated) |
| **Storage** | ~1 GB free space                             |

---

## 11. Plugin & Module Manifest

The following plugins are loaded at runtime, as recorded in the application log:

### Animation & Rigging
| Plugin              | Description                                        |
| :------------------ | :------------------------------------------------- |
| ACLPlugin           | Animation Compression Library                      |
| AnimationData       | Animation data handling                            |
| ControlRigSpline    | Spline-based procedural animation                  |
| ControlRig          | Runtime procedural rig control                     |
| IKRig               | Inverse Kinematics rig system                      |
| FullBodyIK          | Full-body IK solver                                |
| LiveLink            | Real-time animation streaming                      |

### Compositing & Visual
| Plugin              | Description                                        |
| :------------------ | :------------------------------------------------- |
| Composure           | Real-time compositing framework                    |
| OpenColorIO         | Color management / ACES pipeline                   |
| Niagara             | VFX / particle system                              |

### Input & Gameplay
| Plugin              | Description                                        |
| :------------------ | :------------------------------------------------- |
| EnhancedInput       | Modern input mapping system                        |
| GameplayTagsEditor  | Gameplay tag management                            |

### Networking & Collaboration
| Plugin              | Description                                        |
| :------------------ | :------------------------------------------------- |
| MultiUserClient     | Multi-user editing client                          |
| ConcertMain         | Concert collaboration framework                   |
| ConcertSyncClient   | Concert synchronization client                    |
| ConcertSyncCore     | Concert synchronization core                      |
| OodleNetwork        | Oodle network compression                         |

### Audio
| Plugin              | Description                                        |
| :------------------ | :------------------------------------------------- |
| AudioCapture        | Audio input capture                                |

### Data & Asset Pipeline
| Plugin              | Description                                        |
| :------------------ | :------------------------------------------------- |
| DataprepEditor      | Data preparation pipeline                          |
| DatasmithContent    | Datasmith import content                           |
| GLTFExporter        | glTF format export                                 |
| Interchange         | Asset interchange framework                        |
| AssetTags           | Asset tagging system                               |

### Sequencing & Cinematics
| Plugin              | Description                                        |
| :------------------ | :------------------------------------------------- |
| ActorSequence       | Actor-level sequencer                              |
| LevelSequenceEditor | Level sequence editing                             |
| SequencerScripting  | Sequencer Blueprint API                            |
| SequencerAnimTools  | Sequencer animation utilities                      |

### Platform & Runtime
| Plugin              | Description                                        |
| :------------------ | :------------------------------------------------- |
| PlatformCrypto      | Platform cryptography                              |
| MsQuic              | QUIC protocol transport                            |
| SQLiteCore          | Embedded SQLite database                           |
| PythonScriptPlugin  | Python scripting integration                       |
| MediaIOFramework    | Media I/O framework                                |

### Virtual Production (Engine Defaults)
| Plugin              | Description                                        |
| :------------------ | :------------------------------------------------- |
| VirtualProductionUtilities | Virtual production tools                    |
| VPRoles             | Virtual production role management                 |
| VPSettings          | Virtual production settings                        |
| CameraCalibrationCore | Camera calibration                              |

---

## 12. File Inventory & Size Analysis

### Total Build Statistics

| Metric             | Value        |
| :------------------ | :----------- |
| **Total Files**     | 124          |
| **Total Size**      | 905.58 MB    |
| **Directories**     | ~20          |

### Top 10 Largest Files

| #  | File                                                 | Size (MB) |
| :- | :--------------------------------------------------- | --------: |
| 1  | `Rush_Parkour/Content/Paks/Rush_Parkour-Windows.ucas`| 605.39    |
| 2  | `Rush_Parkour/Binaries/Win64/Rush_Parkour.exe`       | 212.23    |
| 3  | `Engine/Extras/Redist/en-us/UEPrereqSetup_x64.exe`  | 48.12     |
| 4  | `Rush_Parkour/Content/Paks/Rush_Parkour-Windows.pak` | 9.40      |
| 5  | `Rush_Parkour/Binaries/Win64/D3D12/d3d12SDKLayers.dll` | 9.03   |
| 6  | `Rush_Parkour/Binaries/Win64/D3D12/D3D12Core.dll`   | 5.37      |
| 7  | `Engine/Binaries/ThirdParty/DbgHelp/dbghelp.dll`    | 2.13      |
| 8  | `Engine/Binaries/ThirdParty/NVIDIA/NVaftermath/...`  | 1.79      |
| 9  | `Rush_Parkour/Content/Paks/global.ucas`              | 1.76      |
| 10 | `Engine/Binaries/ThirdParty/Vorbis/.../libvorbis_64.dll` | 1.65  |

### Files Exceeding 100 MB

Only **2 files** in the entire build exceed 100 MB:

| File                             | Size       | Description                           |
| :------------------------------- | :--------- | :------------------------------------ |
| `Rush_Parkour-Windows.ucas`      | 605.39 MB  | IoStore asset container               |
| `Rush_Parkour.exe` (Win64)       | 212.23 MB  | Monolithic UE5 game binary            |

---

*Document generated from analysis of the compiled Rush Parkour build (UE 5.3.2, Development, Win64).*
