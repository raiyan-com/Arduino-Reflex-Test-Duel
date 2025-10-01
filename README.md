# Reflex Test Duel – Arduino Two-Player Game

A fun **two-player reaction time game** built with Arduino. Players compete to see who can react faster after a light and sound countdown. The fastest reflex wins the round!

---

## 🎮 How the Game Works
1. The game starts with a **traffic light–style countdown**:
   - Green LED → Yellow LED → Red LED
2. The red LED stays on for a **random time** (to prevent guessing).
3. When the red LED turns off, both players must press their button as fast as possible.
4. The **first player to press** wins:
   - Their opponent’s white LED turns off.
   - A buzzer sounds to confirm the result.
5. After a short delay, the game resets for the next round.

---

## ✨ Features
- Two-player competitive reflex test  
- Randomized countdown for fairness  
- LEDs for clear visual feedback  
- Buzzer for sound effects  
- Beginner-friendly Arduino project  

---

## 🛠️ Components Needed
- 1 × Arduino Uno (or compatible board)  
- 5 × LEDs  
  - Green (start)  
  - Yellow (warning)  
  - Red (wait signal)  
  - White × 2 (one for each player)  
- 2 × Push buttons  
- 1 × Buzzer  
- Resistors (220Ω for LEDs, 10kΩ optional for buttons)  
- Breadboard + jumper wires  

---

## 🔌 Arduino Pin Connections
Based on the code provided:

| Component        | Arduino Pin |
|------------------|-------------|
| White LED 1      | 12          |
| Green LED        | 11          |
| Yellow LED       | 10          |
| Red LED          | 9           |
| White LED 2      | 8           |
| Buzzer           | 7           |
| Button 1         | 13          |
| Button 2         | 6           |
| Random Seed Pin* | A0          |

\* `A0` is used with `analogRead()` to generate random delays.

---

## ▶️ How to Play
1. Upload the sketch (`reflex_duel.ino`) to your Arduino.  
2. Connect the components according to the pin table.  
3. Press **reset** to start the game.  
4. Wait for the countdown → red light → random delay.  
5. Be the **first to press your button** when the red LED goes off!  

---

## 📂 File Structure
