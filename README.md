# 7-Segment Display with Arduino

#### Project Overview

This project demonstrates how to interface a 7-segment display with an Arduino Uno to display numbers from 0 to 9. The display cycles through the numbers sequentially with a one-second delay between each number.

#### Components Needed

1. **Arduino Uno**
2. **Common Cathode 7-Segment Display**
3. **Resistors (for current limiting, if required)**
4. **Jumper Wires**
5. **Breadboard**

### Block Diagram



#### Pin Connections

- **7-Segment Display:**
  - Segments (A-G): Connect to Arduino digital pins (A-G)
  - Common Cathode (CC): Connect to Arduino GND
  - Digits (D1, D2): Connect to Arduino digital pins (D1, D2)

#### Instructions

1. **Set Up the Circuit:**
   - Connect the segments (A-G) of the 7-segment display to Arduino digital pins (A-G).
   - Connect the common cathode (CC) of the 7-segment display to Arduino GND.
   - Connect the digits (D1, D2) of the 7-segment display to Arduino digital pins (D1, D2).
   - Ensure all connections are secure and correct.

2. **Initialize the System:**
   - Set the pinMode of each segment pin (A-G) and digit pin (D1, D2) as OUTPUT in the setup function.

3. **Display Numbers:**
   - Use a loop to cycle through the numbers from 0 to 9.
   - Call the `displayNumber()` function to display each number on the 7-segment display.
   - Adjust the delay between each number display as needed.

4. **Display Number Function:**
   - In the `displayNumber()` function, set the appropriate segment pins (A-G) based on the digit pattern for each number.
   - Activate the corresponding digit pin (D1 or D2) to display the number.
   - Adjust the delay for brightness control if needed.

#### Applications

- **Digital Displays:** Use the 7-segment display to show numeric values in various projects, such as clocks, timers, or counters.
- **Educational Projects:** Learn about multiplexing and interfacing with 7-segment displays in Arduino-based projects.
- **Data Visualization:** Display sensor readings, numerical data, or system states using the 7-segment display for visualization purposes.

#### Notes

- Ensure the correct type of 7-segment display (common cathode or common anode) is used and connected appropriately.
- Adjust the delay and brightness control parameters as needed for optimal display performance.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner