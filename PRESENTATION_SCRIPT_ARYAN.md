# CBSE Skill Expo Presentation Script — Aryan Gupta
**Role:** Lead Developer, Technical Systems & Architecture  
**Project:** Rush Parkour  
**Theme:** Animation, Visual Effects, Gaming, Comics (AVGC)  
**School:** M.P. Public School, Anand Nagar, Maharajganj  
**Partner:** Aditi (Co-Presenter & Concept Lead)  

---

## ⏱️ Your Balanced Flow
1. **You speak 1st (The Opening):** Greet judges, introduce the team, school, project title, and core problem statement (~45 sec).
2. *Aditi speaks 2nd:* Concept, theme motto, gameplay rules, camera demo (~1 min 15 sec).
3. **You speak 3rd (Technical Deep Dive):** Blender retopology, hybrid physics, 60+ FPS on basic laptops, modular code (~1 min 30 sec).
4. *Aditi speaks 4th:* NEP 2020 alignment, scalability, inviting judges to play (~1 min).
5. **Both together:** Handling questions smoothly.

---

## Part 1: The Opening Greeting & Introduction (Aryan Leads)
*(As judges approach your stall, stand tall, make eye contact, smile, and speak clearly.)*

> **Aryan:**  
> *"Good morning / Good afternoon, respected judges! Welcome to our stall.  
>  
> *I am **Aryan Gupta**, lead developer of this project, and this is my co-presenter, **Aditi**. We are representing **M.P. Public School, Anand Nagar, Maharajganj**, participating under the theme **Animation, Visual Effects, Gaming, and Comics**.*  
>  
> *Today, we are proud to present **Rush Parkour** — an interactive 3D precision platformer designed and engineered entirely on everyday school laptops.*  
>  
> *Most modern 3D games require expensive desktop gaming computers costing over a lakh rupees. Our objective with this project was to prove that through disciplined optimization, students can build world-class, fluid 3D software using accessible classroom hardware.*  
>  
> *To explain our core gameplay concept and philosophy, I will hand over to Aditi."*

*(Turn slightly toward Aditi with an open-hand gesture to pass the floor.)*

---

## Part 3: The Technical Deep Dive (Aryan Steps In)
*(Step forward with confidence after Aditi introduces the technical transition.)*

> **Aryan:**  
> *"Thank you, Aditi.  
>  
> *Respected judges, running a heavy 3D engine like **Unreal Engine 5** on everyday laptops with basic integrated graphics (like Intel Iris Xe) without a dedicated gaming GPU is notoriously difficult.  
>  
> *We achieved a steady **60 to 70+ frames per second** through four key engineering layers:*

---

### Layer 1: 3D Modeling & Retopology in Blender
> **Aryan:**  
> *"First, in **Blender**, all platform geometry was optimized through **retopology**—a process where we reduced the polygon count by over 90% while keeping visual clarity sharp.  
> Furthermore, we implemented **Level of Detail (LOD)** management: distant platforms automatically load simpler 3D representations, saving critical computer memory."*

---

### Layer 2: Hybrid Physics Simulation & Reactive Platforms
> **Aryan:**  
> *"Second, calculating physics on hundreds of floating platforms simultaneously will overwhelm a laptop CPU.  
> To solve this, we used a **hybrid physics model**:  
> • **Static platforms** remain frozen in memory, consuming **zero CPU cycles**.  
> • **Moving platforms** translate smoothly along mathematical sine curves.  
> • **Crumbling platforms** start static. When the player lands on them, a 0.65-second timer awakens **Chaos gravity physics**, dropping only that single platform into the void. This keeps memory usage strictly under 1.5 GB RAM."*

---

### Layer 3: AI Pathfinding & Stomp Combat
> **Aryan:**  
> *"Third, obstacle enemies navigate platforms using Unreal’s **NavMesh pathfinding algorithms**. Built-in edge detection prevents them from falling off platform borders.  
> Our collision logic uses a vertical hit resolver: landing on an enemy's head trigger executes a clean stomp defeat, while brushing their side activates procedural ragdoll physics on the player."*

---

### Layer 4: Modular Code Architecture & Packaging
> **Aryan:**  
> *"Finally, we engineered the codebase into **18 distinct modular systems**—separating movement, jump buffering, camera lag, and hardware limits.  
> The standalone build is packaged into modern **IoStore containers under 906 MB**, complete with a 70 FPS cap to protect laptop thermals during extended sessions.  
>  
> *Beyond the technical code, our project was designed with broader educational impact in mind. Aditi will share how this connects directly to the CBSE vision."*

*(Gesture toward Aditi for the final educational wrap-up.)*

---

## Handling Judges' Questions (Your Domain)
*If a question is about code, physics, Blender, FPS, or engine internals &rarr; **You answer.***

* **Q: "Did you use C++ or Blueprints?"**  
  * **Aryan:** *"We used Unreal Engine’s visual C++ architecture (Blueprints) alongside structured C++ module patterns. In modern game development, Blueprints compile directly into the engine's execution graph, providing high performance while eliminating memory leaks."*
* **Q: "Why is the camera locked if it's a 3D game?"**  
  * **Aryan:** *"That was an intentional design decision. Mouse camera rotation in precision games introduces 3D disorientation. By locking traversal to a stabilized 2.5D tracking perspective, players can focus entirely on distance and velocity calculation, while the P key allows checking angles when needed."*
* **Q: "What happens if a non-technical question is directed at you?"**  
  * *Smile and hand it to Aditi:* *"Aditi worked closely on our educational alignment and user testing—she can explain that perspective best."*
