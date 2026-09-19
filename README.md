# Rush Parkour

> A brutally challenging 3D platformer where one wrong step sends you back to the very beginning.

---

## About the Game

**Rush Parkour** is a native Windows desktop game built in **Unreal Engine 5.3.2**. Players navigate a series of floating platforms suspended in an open sky environment, combining precise jumps, split-second timing, and enemy avoidance to reach the finish. There are no checkpoints — falling into the void resets all progress to the absolute beginning.

The game draws heavy inspiration from *Getting Over It with Bennett Foddy*, adopting a **"try, try but don't cry"** philosophy. It is designed to be intentionally difficult and deeply frustrating, yet compulsively replayable. Expert gamers may complete a run in **4 to 6 attempts**, while casual players typically require **10 to 20 attempts**.

---

## Expo Theme

| Detail            | Value                                                    |
| :---------------- | :------------------------------------------------------- |
| **Category**      | AVGC (Animation, Visual Effects, Gaming, and Comics)     |
| **Platform**      | Native Windows Desktop Application (standalone `.exe`)   |
| **Engine**        | Unreal Engine 5.3.2                                      |
| **Rendering API** | DirectX 12 — Shader Model 6                              |
| **Build Size**    | ~906 MB                                                  |

---

## Gameplay

### Core Loop

1. **Start** — The player spawns at the beginning of the parkour course.
2. **Traverse** — Jump across static, moving, and physics-triggered platforms floating in the sky.
3. **Survive** — Avoid enemy patrols that track and pursue the player on contact.
4. **Fall or Die** — Missing a platform or touching an enemy resets the player to the very start.
5. **Repeat** — Learn the course, improve timing, and push further each attempt.

### Platform Types

| Type                        | Behaviour                                                                                           |
| :-------------------------- | :-------------------------------------------------------------------------------------------------- |
| **Static Platforms**        | Fixed in place. Form the backbone of the course layout.                                             |
| **Moving Platforms**        | Translate along predefined paths, requiring the player to time their jumps.                         |
| **Physics-Triggered Platforms** | Remain static until the player lands on them, at which point gravity simulation activates and they begin to fall — demanding split-second reactions. |

### Enemies

Simple AI-driven entities patrol specific platforms. They use pathfinding to navigate their patrol routes and actively track the player within their field of view. Contact with an enemy kills the player instantly — but players can neutralize enemies by **jumping on their heads**.

### Death & Ragdoll

When the player is killed, the character's skeletal mesh transitions into a full **ragdoll physics** state. Gravity is applied to the entire body rig, causing it to tumble and fall realistically off the platform before the game resets.

---

## Design Philosophy

### Inspiration

The game is modeled after the punishing design philosophy of *Getting Over It with Bennett Foddy* — a game where losing all progress is not a bug, but the entire point. Every fall teaches the player something new about the course.

### Real-World Purpose

Rush Parkour addresses the gap in domestic game production in India. By demonstrating what a single student can build using modern AAA-grade tools (Unreal Engine 5), it aims to inspire Indian youth to transition from being consumers of Western games to active **producers and developers** in the global gaming industry.

---

## How to Play

1. Navigate to the game folder.
2. Run **`Rush_Parkour.exe`** (the launcher in the root directory).
3. Use standard controls:
   - **WASD** — Movement
   - **Space** — Jump
4. Reach the end of the parkour course without falling.

### System Requirements

| Component  | Minimum Recommended                                              |
| :--------- | :--------------------------------------------------------------- |
| **OS**     | Windows 10 / 11 (64-bit)                                        |
| **CPU**    | Intel Core i3 11th Gen or equivalent                             |
| **RAM**    | 8 GB                                                             |
| **GPU**    | Intel integrated or any dedicated GPU                            |
| **Storage**| ~1 GB free disk space                                            |
| **API**    | DirectX 12 compatible hardware                                   |

> Performance benchmarked on an **11th Gen Intel Core i5-1135G7** with **8 GB RAM** and **Intel Iris Xe Graphics**.

---

## Project Structure

```
RushParkour/
├── Rush_Parkour.exe                  ← Game launcher
├── Engine/                           ← Unreal Engine runtime binaries & prerequisites
│   ├── Binaries/                     ← Third-party DLLs (D3D, audio, debugging)
│   ├── Extras/Redist/                ← C++ runtime prerequisite installer
│   └── Saved/                        ← Engine configuration
├── Rush_Parkour/                     ← Game data
│   ├── Binaries/Win64/               ← Compiled game executable (212 MB)
│   ├── Content/Paks/                 ← Packaged game assets (IoStore containers)
│   │   ├── Rush_Parkour-Windows.ucas ← Primary asset container (~605 MB)
│   │   ├── Rush_Parkour-Windows.utoc ← Asset table of contents
│   │   ├── Rush_Parkour-Windows.pak  ← Supplementary pak file
│   │   ├── global.ucas               ← Global engine assets
│   │   └── global.utoc               ← Global table of contents
│   └── Saved/                        ← Runtime logs, config, and save data
```

---

## Credits

- **Engine:** Epic Games — Unreal Engine 5.3.2
- **3D Assets:** Sourced from the Unreal Engine Marketplace, modified and optimized in Blender
- **Development:** AryansDevStudios (Solo student project)
- **Github:** https://github.com/AryansDevStudio

---

*Rush Parkour — Fall. Learn. Rise. Repeat.*
