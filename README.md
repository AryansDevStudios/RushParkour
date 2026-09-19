# Rush Parkour

> **Sankalp & Santulan** — Every leap demands precision; every fall builds resolve.

A high-precision 3D platformer engineered in **Unreal Engine 5.3.2** by **Aryan Gupta** ([AryansDevStudios](https://github.com/AryansDevStudios)). Navigate floating platforms suspended in an open sky environment, dodge AI-driven patrols, and conquer the void — without a single checkpoint.

---

## Developer

| Field | Detail |
| :--- | :--- |
| **Developer** | Aryan Gupta |
| **Studio** | [AryansDevStudios](https://github.com/AryansDevStudios) |
| **Repository** | [github.com/AryansDevStudios/RushParkour](https://github.com/AryansDevStudios/RushParkour) |
| **Platform** | Windows 10 / 11 (64-bit standalone `.exe`) |
| **Engine** | Unreal Engine 5.3.2 (DirectX 12 SM6) |
| **Build Size** | ~906 MB unpacked (744 MB zip) |

---

## About

**Rush Parkour** is a spatial precision platformer built in a full 3D coordinate space. The player navigates a series of geometric floating platforms in an open sky environment, requiring kinetic balance, forward anticipation, and split-second landing accuracy.

### Philosophy
The game does not rely on artificial shortcuts or midway checkpoints. A single missed landing resets the player back to the course origin point. This structure transforms gameplay from arbitrary input into a disciplined study of distance, velocity, and platform behavior. Expert players may finish in 4 to 6 attempts; casual players typically need 10 to 20.

### Camera & Perspective
The environment, lighting, meshes, and physics are constructed in **native 3D space**. However, the player's viewport is locked to a **stabilized 2.5D tracking perspective**. Mouse camera rotation is disabled by design — the player's focus stays entirely on lateral momentum and jump precision. The **P** key toggles between front, behind-character, and overhead camera angles.

---

## Mechanics

### Platform Types

| Type | Behavior |
| :--- | :--- |
| **Static Anchors** | Stationary platforms forming reliable bases throughout the course. |
| **Kinematic Movers** | Platforms translating along smooth cyclical timelines to test timing and anticipation. |
| **Reactive Collapsers** | Appear solid until player contact activates Chaos gravity simulation — they fall into the void. |

### Patrol Hazards & Combat
- **AI Pathfinding:** Autonomous entities patrol platform surfaces using NavMesh, tracking player position within their field of view.
- **Vertical Stomp:** Players neutralize patrols by landing on them from above.
- **Ragdoll Death:** Contact with hazards disengages skeletal constraints, simulating realistic physics-driven falls.

---

## Controls

| Key | Action |
| :--- | :--- |
| **A / D** | Move left / right along the course |
| **Spacebar** | Jump |
| **P** | Toggle camera perspective (front / behind / overhead) |
| **Escape** | Pause menu |

> *Camera is fixed to a stabilized tracking perspective. Mouse input does not control the camera.*

---

## System Requirements

| Component | Minimum |
| :--- | :--- |
| **OS** | Windows 10 / 11 (64-bit) |
| **CPU** | Intel Core i3 (11th Gen) or equivalent |
| **RAM** | 8 GB |
| **GPU** | DirectX 12 compatible (integrated GPUs supported) |
| **Storage** | ~1 GB free space |

### Performance (tested on i5-1135G7, 8 GB DDR4, Intel Iris Xe)

| Condition | FPS |
| :--- | :--- |
| Plugged in — High settings | 60 – 70+ FPS |
| Battery — High settings | 50 – 60 FPS |
| Low settings | Up to 80 FPS |

---

## Technology Stack

| Technology | Role |
| :--- | :--- |
| Unreal Engine 5.3.2 | Core game runtime |
| Blueprint Visual Scripting | Complete gameplay logic |
| Blender 3D | Retopology, polygon reduction, LOD generation |
| DirectX 12 SM6 | Low-overhead graphics rendering |
| Chaos Physics | Dynamic gravity simulation & ragdoll |
| NavMesh AI Module | Enemy pathfinding & player tracking |
| IK Rig + Control Rig | Inverse kinematics & animation rigging |
| IoStore / Zen Store | Asset container packaging (.ucas/.utoc) |

---

## Download

1. Download [`RushParkour_v1.0.zip`](https://github.com/AryansDevStudios/RushParkour/releases/tag/v1.0) (744 MB).
2. Extract the archive anywhere on your PC.
3. Launch **`Rush_Parkour.exe`**. No installation or runtime dependencies required.

---

*© 2026 Aryan Gupta • AryansDevStudios*
