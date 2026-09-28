# CBSE SKILL EXPO 2026–27 — MASTER PRESENTATION SCRIPT
### Comprehensive Rehearsal & Delivery Guide for Aryan Gupta & Aditi
**Project Title:** Rush Parkour  
**Theme:** Animation, Visual Effects, Gaming, Comics (AVGC)  
**Participating Institution:** M.P. Public School, Anand Nagar, Maharajganj  
**Regional Jurisdiction:** CBSE Regional Office Prayagraj | Event Venue: Gorakhpur  
**Target Duration:** 4.5 to 5.0 Minutes (+ 2 Minutes Q&A / Live Judge Gameplay)  

---

## 📋 PRE-PRESENTATION BOOTH CHECKLIST (Before Judges Arrive)
- [ ] Laptop plugged into AC power (ensures GPU runs at maximum 60–70+ FPS performance).
- [ ] *Rush Parkour* running in full screen at the starting platform.
- [ ] Browser minimized in background with two tabs ready:
  1. Local CBSE Evaluation Portal: `docs/expo/index.html`
  2. Local Project Source Folder: `Source/`
- [ ] Both speakers standing upright, badges visible, smiling, and making welcoming eye contact.

---

## ⏱️ AT-A-GLANCE RUNNING ORDER

| Time | Speaker | Phase | Core Message |
| :---: | :---: | :--- | :--- |
| **0:00 – 0:45** | **ARYAN** | **Phase 1: Welcome & Problem Statement** | Greet judges, introduce team/school/theme, state the hardware challenge. |
| **0:45 – 2:00** | **ADITI** | **Phase 2: Concept, Philosophy & Demo** | Theme motto, no-checkpoints rule, live controls demo, 2.5D camera innovation. |
| **2:00 – 3:30** | **ARYAN** | **Phase 3: Technical Deep Dive** | 60+ FPS on base laptops, Blender retopology, hybrid physics, modular code. |
| **3:30 – 4:30** | **ADITI** | **Phase 4: Educational Impact & Wrap-up** | NEP 2020 alignment, free GitHub distribution, invitation for judges to play. |
| **4:30 – 6:30** | **BOTH** | **Phase 5: Collaborative Q&A** | Tag-team technical & conceptual judge questions with clear handoffs. |

---

# 🎭 COMPLETE CHRONOLOGICAL SCRIPT

```
================================================================================
PHASE 1: THE WELCOME & PROBLEM STATEMENT (~45 SECONDS)
PRIMARY SPEAKER: ARYAN GUPTA
GOAL: Establish confidence, team identity, and the core engineering challenge.
================================================================================
```

*(Judges approach the booth. Aryan stands tall, smiles, makes eye contact, and takes the lead.)*

> **[ARYAN]:**  
> "Good morning / Good afternoon, respected judges! Welcome to our stall.  
>  
> My name is **Aryan Gupta**, lead developer of this project, and this is my co-presenter, **Aditi**. We are representing **M.P. Public School, Anand Nagar, Maharajganj**, participating under the theme **Animation, Visual Effects, Gaming, and Comics**.  
>  
> Today, we are proud to present **Rush Parkour** — an interactive 3D precision platformer designed and engineered entirely on everyday school laptops.  
>  
> Most modern 3D games require expensive desktop gaming computers costing over a lakh rupees. Our engineering objective with this project was to prove that through disciplined optimization, students can build fluid, world-class 3D software using accessible classroom hardware.  
>  
> To walk you through our core gameplay concept and philosophy, I will hand over to Aditi."

*(Aryan turns toward Aditi with an open-hand gesture to seamlessly pass the floor.)*

---

```
================================================================================
PHASE 2: CONCEPT, PHILOSOPHY & LIVE GAMEPLAY DEMO (~1 MIN 15 SEC)
PRIMARY SPEAKER: ADITI
GOAL: Connect with the judges emotionally, demonstrate gameplay, and explain the camera.
================================================================================
```

*(Aditi steps forward with energy, smiling, and places her hands near the keyboard to demonstrate.)*

> **[ADITI]:**  
> "Thank you, Aryan!  
>  
> Respected judges, our project's guiding motto is:  
> **'Patience, Precision, and Perseverance.'**  
>  
> In today’s digital era, millions of school students spend hours passively playing mobile and computer games. Aligned with the **NEP 2020 Skill Education vision**, our goal was to shift from being passive game consumers to active digital creators.  
>  
> The game is set on floating geometric islands high in an open sky. The objective is straightforward: traverse the platforms from start to finish.  
> But here is the defining rule: **there are zero checkpoints**.  
>  
> A single miscalculated jump resets you back to the origin. Instead of arbitrary frustration, every attempt teaches spatial awareness, kinetic timing, and mental resilience.  
>  
> *(Pointing to the screen and demonstrating)*  
> We intentionally engineered the controls so that anyone can pick up the game in seconds:  
> • **'A' and 'D'** to move left and right along the course.  
> • **Spacebar** to jump across platform gaps.  
>  
> You will notice something unique about our camera:  
> While the environment, lighting, and platforms are built in full 3D space, the camera is locked to a stabilized tracking plane. There is **no mouse camera rotation**. This eliminates confusing, dizzying angles and allows the player to focus 100% on timing and balance.  
>  
> And if a player wants to inspect the path from another perspective, pressing the **'P' key** smoothly cycles between behind-the-character, front, and overhead viewpoints.  
>  
> Now, while the gameplay looks clean and intuitive, making high-fidelity 3D graphics and physics run at 60+ FPS on a standard laptop without lag required serious technical problem-solving.  
> Aryan will explain how we engineered this optimization."

*(Aditi turns toward Aryan with an encouraging smile to pass the floor back.)*

---

```
================================================================================
PHASE 3: TECHNICAL DEEP DIVE & SYSTEMS ARCHITECTURE (~1 MIN 30 SEC)
PRIMARY SPEAKER: ARYAN GUPTA
GOAL: Establish technical credibility, explain Blender optimization, physics, and modular code.
================================================================================
```

*(Aryan steps forward with confidence and delivers the core engineering breakdown.)*

> **[ARYAN]:**  
> "Thank you, Aditi.  
>  
> Respected judges, running a heavy 3D engine like **Unreal Engine 5** on everyday laptops with basic integrated graphics (like Intel Iris Xe) without a dedicated gaming GPU is notoriously difficult.  
>  
> We achieved a steady **60 to 70+ frames per second** through four key engineering layers:  
>  
> **1. 3D Modeling & Retopology in Blender:**  
> All platform geometry was modeled in Blender and optimized through *retopology*—a process where we reduced the polygon count by over 90% while keeping visual clarity sharp. We also implemented Level of Detail (LOD) management, so distant platforms automatically use simpler representations, saving critical computer memory.  
>  
> **2. Hybrid Physics Simulation & Reactive Platforms:**  
> Calculating continuous physics on hundreds of floating platforms will choke a laptop CPU. Instead, our static platforms consume zero physics processing. Crumbling platforms remain dormant until the player steps on them, triggering a 0.65-second delay before awakening **Chaos gravity physics** to drop only that single platform into the void. This keeps memory usage strictly under 1.5 GB RAM.  
>  
> **3. AI Pathfinding & Stomp Combat:**  
> Obstacle enemies navigate platforms using Unreal’s **NavMesh pathfinding algorithms**. Raycast edge detectors prevent them from falling off, and our collision logic cleanly differentiates between landing on an enemy's head (stomp defeat) versus brushing their side (player ragdoll fall).  
>  
> **4. Modular Architecture & Packaging:**  
> The entire codebase is cleanly partitioned into **18 modular systems**—separating movement, jump buffering, camera lag, and hardware limits. The standalone build is packaged into modern IoStore containers under 906 MB, complete with a 70 FPS cap to protect laptop thermals during extended sessions.  
>  
> Beyond the technical code, our project was designed with broader educational impact in mind. Aditi will share how this connects directly to the CBSE vision."

*(Aryan gestures toward Aditi for the final educational wrap-up.)*

---

```
================================================================================
PHASE 4: EDUCATIONAL IMPACT, NEP 2020 & WRAP-UP (~1 MINUTE)
PRIMARY SPEAKER: ADITI
GOAL: Close strongly on CBSE rubrics, demonstrate scalability, and invite judges to play.
================================================================================
```

*(Aditi steps in to deliver the concluding pitch with warmth and enthusiasm.)*

> **[ADITI]:**  
> "Thank you, Aryan.  
>  
> Beyond the technical code, **Rush Parkour** directly maps to the CBSE assessment vision in three major ways:  
>  
> **1. Experiential STEM Learning:**  
> It turns textbook physics—like gravitational acceleration and velocity curves—and coordinate geometry into a living, interactive experience.  
>  
> **2. Scalability & Classroom Access:**  
> Because the entire game is optimized to under **1 GB** and published freely on GitHub, schools across our district can download and run it directly on standard lab PCs without needing expensive gaming rigs.  
>  
> **3. Presentation & Documentation:**  
> We have also prepared both an independent player landing page and a structured **CBSE Evaluation Portal** that maps directly to your 7 grading rubrics.  
>  
> Respected judges, would either of you like to try making the first two jumps on the course? It takes just 15 seconds to experience the controls!  
>  
> Thank you very much for your time and valuable guidance!"

---

# 🤝 COLLABORATIVE Q&A MATRIX (Who Answers What)

Use this matrix so both of you know **who leads the answer** and **how the other partner supports them**.

### Technical Domain (Aryan Leads)

| Judge's Question | Lead Speaker | Primary Answer (What to say) | Supporting Partner (Aditi's add-on) |
| :--- | :---: | :--- | :--- |
| **"Did you write code or use templates/Blueprints?"** | **ARYAN** | *"We used Unreal Engine's visual C++ architecture (Blueprints) alongside structured C++ module layouts. Blueprints compile directly into the engine's execution graph, providing high performance while eliminating memory leaks."* | *"From a user testing perspective, using Blueprints allowed us to rapidly adjust jump heights based on feedback."* |
| **"Why is the camera locked if the game is 3D?"** | **ARYAN** | *"Mouse camera rotation in precision games introduces 3D disorientation. Locking traversal to a stabilized 2.5D tracking perspective lets players focus 100% on distance and velocity, while the 'P' key allows checking angles."* | *"In our student tests, players found mouse control frustrating, but this fixed view made the challenge feel fair."* |
| **"What is retopology and why does it matter?"** | **ARYAN** | *"Retopology is rebuilding a 3D mesh with fewer polygons. We reduced meshes from ~50,000 polygons to ~1,500 in Blender. This lets standard integrated graphics render frames at 60+ FPS without lag."* | *"It’s what allows school computers to run the game without needing expensive gaming graphics cards."* |
| **"Why cap the frame rate at 70 FPS?"** | **ARYAN** | *"Laptops don't have desktop cooling. An uncapped game causes thermal throttling and battery drain. Capping at 70 FPS guarantees smooth play while keeping laptop temperatures safe."* | — |

---

### Conceptual & Pedagogical Domain (Aditi Leads)

| Judge's Question | Lead Speaker | Primary Answer (What to say) | Supporting Partner (Aryan's add-on) |
| :--- | :---: | :--- | :--- |
| **"Why build a game instead of a regular utility app?"** | **ADITI** | *"Games represent the intersection of Art, Logic, Physics, and Storytelling—the core of the AVGC sector. It allowed us to practice 3D design, logic programming, sound, and UI design all at once."* | *"Engineering a game requires real-time physics and frame-pacing, which is far more technically demanding than standard software."* |
| **"Isn't having no checkpoints too frustrating?"** | **ADITI** | *"That is where our motto 'Patience, Precision, and Perseverance' comes in! Modern games offer instant gratification. Our game teaches that failure is a learning step toward mastery."* | *"The level was mathematically calibrated so that every jump is 100% consistent and fair."* |
| **"How does this project connect to NEP 2020?"** | **ADITI** | *"NEP 2020 promotes vocational skills and computational thinking. Instead of memorizing theory, we gained hands-on experience in 3D digital media, preparing us for modern tech careers."* | — |
| **"How can other schools use this project?"** | **ADITI** | *"The standalone build is under 1 GB, requires no installation, and is open-source on GitHub. Teachers can use it in computer labs to demonstrate physics vectors and game design."* | *"The project files are modularly structured so students can easily modify or add new platforms."* |

---

# 🔄 PIVOT RULES (How to pass questions smoothly)

1. **If a technical question is asked to Aditi:**  
   Aditi smiles and says:  
   > *"Aryan engineered the core physics triggers and scripting architecture for that—Aryan, could you walk the judges through how that works?"*

2. **If an educational/design question is asked to Aryan:**  
   Aryan nods and says:  
   > *"Aditi led our user experience testing and curriculum alignment—she can explain that perspective best."*

3. **Golden Rule:** Never speak over each other. Let the other partner complete their sentence before adding a short, valuable follow-up.

---

*Project Repository: https://github.com/AryansDevStudios/RushParkour*  
*Local Portals: `docs/index.html` (Landing) | `docs/expo/index.html` (CBSE Portal)*  
*© 2026 Aryan Gupta & Aditi • M.P. Public School, Anand Nagar, Maharajganj*
