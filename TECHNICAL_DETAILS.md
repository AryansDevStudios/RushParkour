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

The game is heavily optimized for integrated graphics (specifically Intel Iris Xe) by stripping out heavy UE5 features (like Lumen and Nanite) while maintaining visual fidelity through standard DX12 pipelines.

### Render Hardware Interface (RHI)
- **Primary API**: `D3D12` (DirectX 12)
- **Shader Model**: `SM6` (Shader Model 6)
- **Fallback**: `D3D11` / `Vulkan` (available but not default)

*Verified via Engine Log:*
`LogRHI: Using Default RHI: D3D12`
`LogRHI:   Direct3D 12.0 API, (Feature Level 12_1), Shader Model 6.6`

### Scalability Settings (`GameUserSettings.ini`)
- **Resolution**: 1251 x 703 (Windowed/Fullscreen Windowed)
- **Resolution Quality**: 71% (Spatial upscaling)
- **View Distance**: Low (0)
- **Anti-Aliasing**: Low (0)
- **Post-Processing**: Low (0)
- **Shadows**: Low (0)
- **Global Illumination**: Low (0)
- **Reflection**: Low (0)
- **Textures**: Low (0)
- **Effects**: Low (0)
- **Foliage**: Low (0)
- **Shading**: Low (0)

---

## 3. Game Architecture

### Core Classes & Game Mode
- **Map Name**: `/Game/ThirdPerson/Maps/RushParkourMainWorld`
- **Game Mode Class**: `BP_ThirdPersonGameMode_C`
- **Pawn Class**: `BP_ThirdPersonCharacter_C`

### Coordinate System & Movement
- **Large World Coordinates (LWC)**: Enabled (UE5 default double-precision floats for transform data).
- **Control Scheme**:
  - `A / D`: Lateral Movement
  - `Space`: Jump
  - `P`: Toggle camera perspective
  - `Esc`: Pause Menu
- **Camera Perspective**: The game takes place in a fully 3D rendered environment, but the camera operates on a strict **fixed 2.5D tracking perspective**. Mouse camera rotation is entirely disabled to force the player to focus purely on jump mechanics and timing. The **P** key allows toggling between predefined camera angles (e.g., front, behind-character, overhead).

### Gameplay Loop & Philosophy
Rush Parkour is a precision platformer designed without checkpoints. A failure (falling into the void) results in a hard reset of the player's position to the absolute beginning. 

---

## 4. Physics & Collision Systems

The project uses UE5's **Chaos Physics Engine**.

### Platform Physics
The environment is built using three distinct platform archetypes:
1. **Static Anchors**: Fully static geometry. No physics tick overhead.
2. **Kinematic Movers**: Timeline-driven translation. Interpolates location vectors based on a delta-time curve. Does not simulate physics but updates collision hulls every frame.
3. **Reactive Collapsers**: These platforms start as kinematic/static. Upon detecting an overlap event with the player's capsule component, a delay is triggered, after which `Simulate Physics` is set to `True`. Chaos gravity takes over, and the platform falls into the void.

---

## 5. Enemy AI & Pathfinding

Enemy AI is handled via Unreal's **NavMesh (Navigation Mesh)** system.

- **Navigation Bounds**: A NavMeshBoundsVolume is wrapped around specific patrol platforms.
- **AI Controller**: A custom AI controller drives the enemy pawn.
- **Behavior**: Enemies patrol randomly within the NavMesh boundaries. If the player enters their vision cone/trigger box, they will track the player's location vector.
- **Combat Resolution (Stomp Mechanic)**:
  - If the player's capsule overlaps the enemy's *side* collision box, the player is destroyed (Ragdoll initiated).
  - If the player's capsule overlaps the enemy's *top* collision box (trigger volume on the head), the enemy is destroyed via `DestroyActor`.

---

## 6. Character & Animation Systems

- **Skeletal Mesh**: Standard UE5 Mannequin structure.
- **Animation Blueprint (AnimBP)**: Handles state transitions (Idle -> Run -> Jump Start -> Falling -> Jump End).
- **Inverse Kinematics (IK)**: `IK Rig` and `Control Rig` are enabled (as seen in plugin manifest) to adjust foot placement dynamically on uneven platform surfaces.
- **Death State**: Upon fatal collision with an enemy or the void kill-Z volume, the AnimBP disables, and the skeletal mesh is set to `Simulate Physics`, resulting in procedural ragdoll behavior.

---

## 7. 3D Asset Pipeline & Modeling

All custom meshes were authored in **Blender**.

- **Polygon Optimization**: High-poly meshes were retopologized to low-poly equivalents to ensure performance on integrated graphics.
- **Level of Detail (LOD)**:
  - Base meshes use 3 to 4 LOD stages.
  - Screen Size thresholds dictate LOD transitions (e.g., LOD0 at 1.0, LOD1 at 0.5, LOD2 at 0.2).
  - At furthest distances, meshes cull completely.

---

## 8. Optimization & Memory Management

How a UE5 game runs at 60+ FPS on an Intel Iris Xe:

1. **Pre-loading Strategy**: All assets (~100-200 files) are loaded into RAM immediately at startup. This eliminates runtime disk I/O stuttering, keeping memory usage around ~1.5 GB.
2. **Texture Compression**: Textures are compressed (likely DXT1/DXT5 or Oodle).
3. **Occlusion Culling**: Hardware occlusion queries prevent rendering platforms behind the player's camera frustum.
4. **Frame Pacing**: The engine uses `t.MaxFPS 70` to prevent thermal throttling on laptop CPUs/GPUs.

---

## 9. Packaging & Distribution Architecture

The project uses Unreal Engine 5's modern **Zen Store (IoStore)** packaging format.

### File Structure
- `Rush_Parkour.exe`: The bootstrap executable.
- `Rush_Parkour-Windows.pak`: Legacy packaging format (empty/minimal in this build).
- `Rush_Parkour-Windows.ucas`: **605.39 MB**. The Zen Store payload containing all compressed cooked assets (meshes, textures, sounds, blueprints).
- `Rush_Parkour-Windows.utoc`: Table of Contents file for the `.ucas` container.

This `.ucas` / `.utoc` architecture allows the engine to memory-map assets directly from disk, drastically reducing load times compared to older `.pak` files.

---

## 10. Hardware Performance Profile

Benchmarked on target deployment hardware:

- **CPU**: Intel Core i5-1135G7 @ 2.40GHz (11th Gen, 4 Cores, 8 Threads)
- **RAM**: 8 GB DDR4
- **GPU**: Intel Iris Xe Graphics (VendorId: 8086, DeviceId: 9a49, Driver: 31.0.101.5186)
- **Storage**: SSD (NVMe assumed based on load times)
- **OS**: Windows 11 (26H2)

### Results
- **AC Power (Plugged In)**: 60 - 70+ FPS (Sustained)
- **DC Power (Battery)**: 50 - 60 FPS
- **Thermal Profile**: CPU temps managed via 70 FPS frame cap, preventing thermal throttling.

---

## 11. Plugin & Module Manifest

Key active plugins contributing to the runtime binary:

| Plugin Name | Category | Function |
| :--- | :--- | :--- |
| **OodleNetwork/Data** | Compression | Next-gen asset and network compression |
| **Chaos Cloth/Vehicles**| Physics | Next-gen physics simulation |
| **ControlRig** | Animation | Procedural animation and IK |
| **MetasoundEngine** | Audio | Procedural audio graph |
| **EnhancedInput** | Input | Modern action-mapping input system |
| **ElectraPlayer** | Media | Video playback runtime |
| **Niagara** | VFX | Particle systems |

---

## 12. File Inventory & Size Analysis

The total packaged footprint is exceptionally lightweight for a UE5 project.

**Total Size**: 905.58 MB
**Total Files**: 124

### Size Distribution (Top Directories)
1. `/Rush_Parkour/Content/Paks` — **605.41 MB** (Contains the `.ucas` game data)
2. `/Rush_Parkour/Binaries/Win64` — **212.24 MB** (Contains the game `.exe`)
3. `/Engine/Binaries/ThirdParty` — **86.41 MB** (Contains DLLs like Oodle, D3D12, tbb)

### Files over 100 MB
Only two files in the entire project exceed 100 MB:
- `Rush_Parkour-Windows.ucas` (605.39 MB)
- `Rush_Parkour.exe` (212.23 MB)
