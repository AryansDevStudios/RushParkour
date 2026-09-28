# CBSE SKILL EXPO 2026–27 — COMPACT 4-PAGE PRINTABLE SCRIPT
**Project:** Rush Parkour | **Theme:** Animation, Visual Effects, Gaming, Comics (AVGC)  
**School:** M.P. Public School, Anand Nagar, Maharajganj  
**Regional Event:** Gorakhpur · 30 Sept 2026 · RO Prayagraj  
**Presenters:** Aryan Gupta (Lead Developer) & Aditi (Co-Presenter)  

<style>
  @media print {
    .page-break { page-break-after: always; break-after: page; }
    body { font-family: "Segoe UI", Arial, sans-serif; font-size: 10.5pt; line-height: 1.4; color: #111; }
    h2, h3 { color: #000; margin-top: 0.5rem; margin-bottom: 0.3rem; }
    p, blockquote { margin-bottom: 0.45rem; }
  }
  .page-break { page-break-after: always; break-after: page; border-top: 2px dashed #999; margin: 1.8rem 0; padding-top: 0.8rem; }
  .page-tag { font-size: 0.8rem; font-weight: bold; color: #666; text-transform: uppercase; letter-spacing: 1px; }
</style>

---

<div class="page-tag">PAGE 1 OF 4 — TIMELINE & STAGE 1 / STAGE 2 (PART 1)</div>

### ⏱️ Quick Flow Overview
1. **Aryan (~45 sec)** ──► Greet judges, introduce team, school, project title & hardware problem
2. **Aditi (~1 min 15s)** ──► Theme motto, gameplay philosophy, no-checkpoints rule, live camera demo
3. **Aryan (~1 min 30s)** ──► Technical deep dive: Blender retopology, hybrid physics, 60+ FPS on laptops
4. **Aditi (~1 min)** ──► NEP 2020 alignment, scalability, free GitHub access & invite judges to play
5. **Together (1-2 min)** ──► Q&A defense (Aditi handles concept/learning; Aryan handles engine/code)

---

### 🎬 Complete Rehearsal Script

#### Stage 1: The Opening & Introduction (Aryan Leads)
*(As the judges approach your stall, make eye contact, smile, and stand tall.)*

**Aryan:**  
> *"Good morning / Good afternoon, respected judges! Welcome to our stall.  
>  
> I am **Aryan Gupta**, lead developer of this project, and this is my co-presenter, **Aditi**. We represent **M.P. Public School, Anand Nagar, Maharajganj**, participating under the theme **Animation, Visual Effects, Gaming, and Comics**.  
>  
> Today, we are proud to present **Rush Parkour** — an interactive 3D precision platformer designed and engineered entirely on everyday school laptops.  
>  
> Most modern 3D games require expensive desktop gaming computers costing over a lakh rupees. Our objective with this project was to prove that through disciplined optimization, students can build world-class, fluid 3D software using accessible classroom hardware.  
>  
> To explain our core gameplay concept and philosophy, I will hand over to Aditi."*  
*(Turn toward Aditi with an open-hand gesture to pass the floor.)*

#### Stage 2: Concept, Philosophy & Gameplay Demo (Aditi Speaks)
*(Aditi steps forward smoothly and places hands lightly near the keyboard.)*

**Aditi:**  
> *"Thank you, Aryan!  
>  
> Respected judges, our project's guiding motto is:  
> **'Patience, Precision, and Perseverance.'**  
>  
> In today’s digital era, millions of school students spend hours passively playing mobile and computer games. Aligned with the **NEP 2020 Skill Education vision**, our goal was to shift from being passive game consumers to active digital creators.*

<div class="page-break"></div>

<div class="page-tag">PAGE 2 OF 4 — STAGE 2 (PART 2) & STAGE 3 (PART 1)</div>

> *The game is set on floating geometric islands high in an open sky. The objective is straightforward: traverse the platforms from start to finish.  
> But here is the defining rule: **there are zero checkpoints**.  
>  
> A single miscalculated jump resets you back to the origin. Instead of arbitrary frustration, every attempt teaches spatial awareness, kinetic timing, and mental resilience.  
>  
> *(Demonstrating on screen)*  
> We intentionally engineered the controls so that anyone can pick up the game in seconds:  
> • **A and D** to move left and right along the course.  
> • **Spacebar** to jump across gaps.  
>  
> Notice our unique camera design: while the environment, lighting, and platforms are built in full 3D space, the camera is locked to a stabilized tracking plane. There is **no mouse camera rotation**, which eliminates dizzying angles and allows the player to focus 100% on timing and balance.  
>  
> And if a player wants to inspect the path from another perspective, pressing the **P key** smoothly cycles between behind-the-character, front, and overhead viewpoints.  
>  
> Now, while the gameplay looks clean and intuitive, making high-fidelity 3D graphics and physics run at 60+ FPS on a standard laptop without lag required serious technical problem-solving.  
> Aryan will explain how we engineered this optimization."*  
*(Turns back to Aryan with a smile.)*

---

#### Stage 3: Technical Deep Dive & Systems (Aryan Steps In)
*(Aryan steps forward with confidence.)*

**Aryan:**  
> *"Thank you, Aditi.  
>  
> Respected judges, running a heavy 3D engine like **Unreal Engine 5** on everyday laptops with basic integrated graphics (like Intel Iris Xe) without a dedicated gaming GPU is notoriously difficult.  
>  
> We achieved a steady **60 to 70+ frames per second** through four key engineering layers:  
>  
> **3D Modeling & Retopology in Blender:**  
> All platform geometry was modeled in Blender and optimized through retopology—reducing the polygon count by over 90% while keeping visual clarity sharp. We also implemented Level of Detail (LOD) management, so distant platforms use minimal computer resources.  
>  
> **Hybrid Physics Simulation & Reactive Platforms:**  
> Calculating continuous physics on hundreds of floating platforms will choke a laptop CPU. Instead, our static platforms consume zero physics processing. Crumbling platforms remain*

<div class="page-break"></div>

<div class="page-tag">PAGE 3 OF 4 — STAGE 3 (PART 2) & STAGE 4 (WRAP-UP)</div>

> *dormant until the player steps on them, triggering a 0.65-second delay before awakening Chaos gravity physics to drop only that single platform into the void.  
>  
> **AI Pathfinding & Stomp Combat:**  
> Obstacle enemies navigate platforms using Unreal’s NavMesh pathfinding algorithms. Raycast edge detectors prevent them from falling off, and our collision logic cleanly differentiates between landing on an enemy's head (stomp defeat) versus brushing their side (player ragdoll fall).  
>  
> **Modular Architecture & Packaging:**  
> The entire codebase is cleanly partitioned into 18 modular systems, packaged into modern IoStore containers under 906 MB, and capped at 70 FPS to prevent student laptops from overheating.  
>  
> Beyond the technical code, our project was designed with broader educational impact in mind.  
> Aditi will share how this connects directly to the CBSE vision."*  
*(Gestures back to Aditi for the final educational wrap-up.)*

---

#### Stage 4: Educational Value, NEP 2020 & Wrap-Up (Aditi Speaks)
*(Aditi steps in for the conclusion.)*

**Aditi:**  
> *"Thank you, Aryan.  
>  
> Beyond the technical code, **Rush Parkour** directly maps to the CBSE assessment vision in three major ways:  
>  
> **Experiential STEM Learning:**  
> It turns textbook physics—like gravitational acceleration and velocity curves—and coordinate geometry into a living, interactive experience.  
>  
> **Scalability & Classroom Access:**  
> Because the entire game is optimized to under 1 GB and published freely on GitHub, schools across our district can download and run it directly on standard lab PCs without needing expensive gaming rigs.  
>  
> **Presentation & Documentation:**  
> We have also prepared both an independent player landing page and a structured CBSE Evaluation Portal that maps directly to your 7 grading rubrics.  
>  
> Respected judges, would either of you like to try making the first two jumps on the course? It takes just 15 seconds to experience the controls!  
>  
> Thank you very much for your time and valuable guidance!"*

<div class="page-break"></div>

<div class="page-tag">PAGE 4 OF 4 — SEAMLESS Q&A COLLABORATION MATRIX</div>

### 🎬 Seamless Q&A Collaboration Rule

| If the question is about... | Who answers: | How to transition smoothly: |
| :--- | :---: | :--- |
| **Engine, Blueprints, C++, FPS, Retopology, Chaos Physics, Memory** | **Aryan** | Aryan speaks directly with confidence. If asked to Aditi, she smiles and says: *"Aryan engineered the core physics and scripting architecture—he can explain that system."* |
| **Why a game?, NEP 2020, Learning journey, Player psychology, Theme motto** | **Aditi** | Aditi speaks directly with energy. If asked to Aryan, he says: *"Aditi worked closely on our educational alignment and user experience—she can share that perspective best."* |

---

### 💡 Quick Pivot Reminders for Rehearsal
1. **Never talk over each other:** Always allow your partner to finish their thought before adding a valuable 1-sentence observation.
2. **If Aditi gets a technical question:** Pivot immediately to Aryan with respect and confidence.
3. **If Aryan gets a question about student impact or NEP 2020:** Pivot smoothly to Aditi so she can shine.

*You both now have an equal share of the spotlight, with your strengths complementing each other perfectly.*

---

*Local Exhibition Files: `docs/expo/index.html` (CBSE Portal) | `Source/` (Architecture)*  
*© 2026 Aryan Gupta & Aditi • M.P. Public School, Anand Nagar, Maharajganj*
