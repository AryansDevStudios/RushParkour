# Rush Parkour — Source Code Architecture & Technical Reference

> **Technical Reference Manual for Evaluators & Technical Judges**  
> **Engine:** Unreal Engine 5.3.2 | **Primary Language:** C++ & Blueprint Reflection Architecture  
> **Rendering Pipeline:** DirectX 12 (Shader Model 6) | **Physics:** Chaos Physics Engine  
> **Developer:** Aryan Gupta ([AryansDevStudios](https://github.com/AryansDevStudios)) | **Institution:** M.P. Public School  

---

## 🧭 Executive Overview for Technical Judges

If an evaluator asks: **"How is your source code structured and what engineering principles did you follow?"**, present this summary:

1. **Architectural Pattern:** Built on an **Actor-Component & Modular Subsystem Architecture** adhering to the *Single Responsibility Principle (SRP)*. Gameplay logic is never lumped into a single monolithic actor; instead, player movement, jump timers, camera dampening, platform lifecycle, and AI perception are completely decoupled.
2. **Hybrid Physics Budgeting:** To achieve **60–70+ FPS on everyday integrated graphics (Intel Iris Xe)**, physics calculation is strictly budgeted. 90% of level geometry consists of static anchors (0 CPU physics overhead), while dynamic physics (Chaos engine) is awoken only when reactive platforms are triggered.
3. **Deterministic Traversal (2.5D in 3D Space):** While assets, lighting, and physics operate in a native 3D coordinate frame $(X, Y, Z)$, traversal is restricted to a stabilized lateral plane. Mouse camera rotation is disabled to eliminate 3D motion disorientation, while the **`P` key** toggles viewing angles via an internal state machine.

---

## 📂 Source Code Hierarchy (18 Modules, 180 Files)

```
D:\RushParkour\Source\
├── Core/                   # GameMode rules, GameState timer, GameInstance options, Constants
├── Movement/               # 2.5D constraint math, acceleration curves, ground raycasting
├── Jumping/                # Coyote time, jump buffering, variable height cutoffs, apex dampening
├── Camera/                 # Stabilized tracking camera, P-key perspective state machine, lag dampening
├── Character/              # Player character pawn, AnimInstance bridge, Chaos ragdoll transitions
├── Platforms/
│   ├── Static/             # Zero-cost immovable anchors and collision bounds
│   ├── Moving/             # Kinematic timeline translation, rider velocity inheritance
│   └── Crumbling/          # Contact triggers, 0.65s delay timers, Chaos gravity activators
├── AI/
│   ├── Patrol/             # NavMesh waypoint pathfinding, platform edge line-trace guards
│   └── Perception/         # Vector dot product sight cones, proximity triggers
├── Combat/                 # Vertical Z-velocity stomp resolver vs lateral hazard collision
├── UI/
│   ├── HUD/                # On-screen key guides, attempt counters, toast notifications
│   └── Menus/              # Pause menu controller, resolution scaling, graphics presets
├── Audio/                  # Dynamic altitude-based wind audio, physical impact cues
├── Optimization/           # LOD transition managers, texture VRAM monitors, 70 FPS limiter
├── Libraries/
│   ├── Math/               # Vector projection, jump parabolic trajectories, easing curves
│   └── Utilities/          # Frame diagnostics, save game serialization, time formatters
└── Input/                  # Enhanced Input action bindings (A, D, Space, P, Esc)
```

---

## 🔬 Deep-Dive Module Breakdown (What to Say to Judges)

### 1. `Source/Core/` — Engine Lifecycle & Rules
* **Key Classes:** `ARushGameMode`, `ARushGameState`, `URushGameInstance`, `RushConfig`
* **Technical Details:**
  * Enforces the **zero-checkpoint rule**: falling into the void triggers an instant player coordinate reset back to origin without reloading the world.
  * Manages global constants (`RushConfig::JUMP_Z_VELOCITY = 620.0f`, `DEFAULT_GRAVITY = -980.0f`, `LATERAL_MAX_SPEED = 550.0f`).
* **What to tell judges:**
  > *"The Core module defines our game rules. We avoid reloading the level from disk upon death; instead, the GameMode teleports the pawn back to origin instantly, keeping memory completely stable."*

---

### 2. `Source/Movement/` — 2.5D Kinematics & Ground Checks
* **Key Classes:** `ULateralMovementHandler`, `FSpeedInterpolator`, `FAirControlPhysics`, `FGroundSnapping`
* **Technical Details:**
  * **Coordinate Constraint:** Clamps player movement strictly along the $Y$-axis ($\vec{v} = (0, v_y, v_z)$), completely nullifying drift along the $X$-depth axis during standard platforming.
  * **Ground Raycasting:** `FGroundSnapping` runs downward raycasts (`LineTraceSingleByChannel`) to verify ground contact independently of capsule collision, preventing micro-bouncing on platform edges.
  * **Kinetic Momentum:** Applies air-resistance drag factors (`AirControlPhysics`) to preserve forward momentum when launching off sprint jumps.

---

### 3. `Source/Jumping/` — Advanced Platforming Feel
* **Key Classes:** `UJumpController`, `FCoyoteTimeManager`, `FJumpBufferSystem`, `FVariableJumpHeight`, `FApexHangTime`
* **Technical Details:**
  * **Coyote Time (0.15s):** A timer runs when the character leaves a platform. If the player presses Jump within 150 milliseconds of leaving solid ground, the jump executes successfully.
  * **Jump Buffering (0.12s):** Pre-buffers early jump inputs pressed up to 120ms before landing, immediately executing the leap on the exact frame ground contact is made.
  * **Variable Jump Height:** If the spacebar is released early, gravity scale is multiplied by $2.2\times$ (`FVariableJumpHeight`), cutting the upward arc short for precise micro-hops.
  * **Apex Hang Dampening:** When vertical velocity $|\vec{v}_z| < 60\text{ cm/s}$, gravity is temporarily scaled down to $0.5\times$ to give the player extra air-time control at the apex.

---

### 4. `Source/Camera/` — Fixed Perspective & Perspective Toggle
* **Key Classes:** `AFixedPerspectiveCamera`, `FPerspectiveToggleController`, `FCameraLagDampener`
* **Technical Details:**
  * **Decoupled Viewport:** Mouse inputs do not drive pitch or yaw. The camera position interpolates smoothly behind the player using `FMath::VInterpTo` with a lag speed of `6.5f`.
  * **Perspective State Machine:** The **`P` key** toggles an enum state machine (`ECameraPerspectiveMode`):
    * Mode 0: *Behind Character* $(-500, 0, 150)$
    * Mode 1: *Front View* $(+500, 0, 150)$
    * Mode 2: *Overhead View* $(0, 0, +750)$ looking down at $-90^\circ$ pitch.

---

### 5. `Source/Platforms/` — Three-Tier Physics Hierarchy
* **Static Platforms (`Platforms/Static/`):**
  * Mobility set to `EComponentMobility::Static`. Completely excluded from runtime physics ticks, resulting in zero CPU overhead.
* **Moving Platforms (`Platforms/Moving/`):**
  * Kinematic actors driven by timeline curves (`FMath::PingPong`).
  * `PassengerAttachmentHandler` transfers horizontal platform velocity to the character pawn while grounded.
* **Crumbling Platforms (`Platforms/Crumbling/`):**
  * Starts as static geometry. Contact triggers an overlap event &rarr; runs a 0.65-second timer with a small random jitter ($\pm 2\text{ cm}$) &rarr; calls `SetSimulatePhysics(true)` and `SetEnableGravity(true)`.
  * Drops through a lower kill-plane where it is recycled.

---

### 6. `Source/AI/` & `Source/Combat/` — Pathfinding & Stomp Combat
* **Key Classes:** `AEnemyPatrolController`, `FPlayerSightCone`, `FStompCombatResolver`
* **Technical Details:**
  * **NavMesh Pathfinding:** Patrol routes query Unreal's navigation mesh bounding volumes.
  * **Edge Detection:** Forward raycasts angled at $45^\circ$ downward detect when platform geometry ends, reversing patrol velocity without requiring manual invisible barrier walls.
  * **Vertical Stomp Resolver:**
    $$\text{Valid Stomp} = (\vec{v}_z < 0) \land (Z_{\text{PlayerBottom}} \ge Z_{\text{EnemyTop}} - 15\text{ cm})$$
    Landing on the top trigger destroys the enemy and applies an upward impulse ($+450\text{ cm/s}$). Lateral contact triggers player ragdoll.

---

### 7. `Source/Optimization/` — Integrated GPU Performance Engineering
* **Key Classes:** `FLODTransitionManager`, `FTextureMemoryBudget`, `FFramerateGovernor`
* **Technical Details:**
  * **LOD Transition Distance:**
    * $0\text{m} - 15\text{m}$: LOD0 (Full geometry)
    * $15\text{m} - 40\text{m}$: LOD1 (50% decimation)
    * $40\text{m} - 80\text{m}$: LOD2 (20% decimation)
    * $>80\text{m}$: LOD3 (Culled / minimal bounding geometry)
  * **Thermal Governor:** Capped at `t.MaxFPS 70` to prevent GPU throttling on compact laptop motherboards.
  * **Pre-Cached Memory:** All ~150 core assets are memory-mapped into system RAM at startup (~1.4 GB resident memory), eliminating runtime disk reads and stutter.

---

## 💬 Rapid-Fire Answers for Technical Judges

| Question from Evaluator | Concise Technical Response |
| :--- | :--- |
| **"Why did you organize the project into separate `.h` and `.cpp` files?"** | *"To maintain modular compilation and clean encapsulation. The header defines public interfaces, structs, and reflection macros, while the source file encapsulates the algorithmic implementation."* |
| **"How do you prevent garbage collection hitches?"** | *"We avoid spawning and destroying dynamic actors at runtime. Platforms, characters, and particles use pre-allocated pools, and memory is pre-loaded at launch."* |
| **"What makes your physics triggers performant on laptops?"** | *"We use a hybrid physics system. Most platforms are completely static with zero physics overhead. Chaos gravity physics is awakened dynamically only on the single crumbling platform the player touches."* |
| **"How do you know enemies won't walk off edges?"** | *"In `PlatformEdgeDetector.cpp`, downward angled line-traces query whether surface geometry exists 50 units ahead. If the trace returns a miss, the AI immediately inverts its patrol vector."* |
| **"Why is the packaged game under 1 GB when UE5 builds are usually 15 GB?"** | *"We bypassed high-overhead Nanite virtualized geometry and Lumen software raytracing. Instead, we performed manual retopology in Blender, created custom LODs, and packaged via IoStore Zen containers."* |

---

*© 2026 Aryan Gupta & Aditi • M.P. Public School, Anand Nagar, Maharajganj*  
*Project Repository: https://github.com/AryansDevStudios/RushParkour*
