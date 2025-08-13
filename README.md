# 🤖 Gesture-Controlled Robot – Setup Guide

This guide will help you set up and run your gesture-controlled robot using **Arduino**, **ESP32**, and **Python**. Follow the steps carefully for a smooth experience.

---

## Part 1: Arduino Setup 🔌

1. **Connect Arduino to your computer**  
   - Use a USB cable to connect the Arduino board.

2. **Open Arduino IDE & load code**  
   - Paste or open the provided Arduino code in the Arduino IDE.

3. **Select the correct board**  
   - Go to:  
     `Tools → Board → Arduino AVR Boards → Arduino Uno`

4. **Verify and Upload**  
   - ✅ Click **Verify** to compile the code.  
   - 📤 Click **Upload** to send the code to your Arduino.

---

## Part 2: ESP32 Setup 📡

1. **Connect ESP32 to your computer**  
   - Use a USB cable to connect the ESP32 board to your computer.

2. **Load ESP32 code in Arduino IDE**  
   - Paste or open the provided ESP32 code in Arduino IDE.

3. **Enter Wi-Fi credentials in the ESP32 code**  
   - In the code, locate the section for Wi-Fi configuration.  
   - Replace the placeholder values with your hotspot’s **SSID** and **password**.  
   - Example:  
     ```cpp
     const char* ssid = "POCO";
     const char* password = "qevt1738";
     ```

4. **Select the correct board**  
   - Go to:  
     `Tools → Board → ESP32 Arduino → ESP32 Dev Module` ⚙

5. **Verify and Upload**  
   - ✅ Click **Verify** to compile the code.  
   - 📤 Click **Upload** to send the code to your ESP32.

6. **Ensure both your laptop and ESP32 are connected to the same Wi-Fi hotspot**  
   - This must be the hotspot you configured in the ESP32 code.

7. **Copy ESP32 IP Address to Python Code**  
   - Open the **Serial Monitor** in Arduino IDE after uploading.  
   - Locate the **IP address** printed in the output.  
   - Copy this IP address and paste it into the variable `x` inside your Python code.

---

## Part 3: Python Setup 🐍
### Install Python Requirements 📦

1. **Download the `requirements.txt` file**  
   - This file is included in the repository.  

2. **Place it in your working directory**  
   - The same folder where your Python script is stored.  

3. **Open a terminal in that directory**  
   - On Windows: Shift + Right Click → "Open PowerShell here"  
   - On Mac/Linux: Use the `cd` command to navigate to the folder.  

4. **Install all dependencies**  
   ```bash
   pip install -r requirements.txt


**Running the Code**

1. **Open your preferred Python environment**  
   - Example: VS Code, PyCharm, Jupyter Notebook, or Terminal.

2. **Paste the provided Python code**  
   - Ensure it is saved in a `.py` file.

3. **Run the code**  
   - Execute the Python script.  
   - The robot should now respond to your gestures.

---

## 🤏 Gesture Commands

Show the following number of fingers to control the robot:

| Fingers ✋ | Action   |
|-----------|----------|
| 1         | Forward  |
| 2         | Backward |
| 3         | Left     |
| 4         | Right    |
| 5         | Stop     |

---

## 📄 Notes
- Arduino files must have a `.ino` extension and be stored in a folder with the same name as the file.
- Ensure your Python environment has the required libraries installed (`opencv-python`, `numpy`, etc.).
- If connection issues occur, verify your Wi-Fi credentials and check if the ESP32 IP is correct in the Python code.

---
