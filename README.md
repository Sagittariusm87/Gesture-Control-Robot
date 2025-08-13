# 🤖 Gesture-Controlled Robot – Setup & Usage Guide

This guide explains how to set up and run your gesture-controlled robot.  
The process is divided into three parts: **Arduino configuration**, **ESP32 configuration**, and **Python environment setup**.

---

## Part 1: Arduino Setup 🔌

1. **Connect Arduino to your computer**  
   - Use a USB cable to connect your Arduino board to your computer.

2. **Open Arduino IDE and load the code**  
   - Open the Arduino IDE.  
   - Paste or open the provided Arduino code.

3. **Select the correct board**  
   - Go to:  
     `Tools → Board → Arduino AVR Boards → Arduino Uno` 🛠

4. **Verify and Upload**  
   - ✅ Click **Verify** (✓) to check for errors.  
   - 📤 Click **Upload** (→) to send the code to your Arduino.

---

## Part 2: ESP32 Setup 📡

1. **Connect ESP32 to your computer**  
   - Use a USB cable to connect the ESP32 board to your computer.  

2. **Ensure both your laptop and ESP32 are connected to the same Wi-Fi hotspot**  
   - This should be the hotspot that the ESP32 will use to communicate with your Python script.  
   - Example: Hotspot **SSID** `POCO`, password `qevt1738`.

3. **Load ESP32 code in Arduino IDE**  
   - Paste or open the provided ESP32 code in Arduino IDE.

4. **Select the correct board**  
   - Go to:  
     `Tools → Board → ESP32 Arduino → ESP32 Dev Module` ⚙

5. **Verify and Upload**  
   - ✅ Click **Verify** to compile the code.  
   - 📤 Click **Upload** to send the code to your ESP32.

6. **Copy ESP32 IP Address to Python Code**  
   - Open the **Serial Monitor** in Arduino IDE after uploading.  
   - Locate the **IP address** printed in the output.  
   - Copy this IP address and paste it into the variable `x` inside your Python code.

---

## Part 3: Running the Python Environment 🐍

1. **Open your preferred development environment**  
   - Example: **VS Code**, **PyCharm**, or any Python-supported IDE.

2. **Load the Python script**  
   - Paste or open the provided Python code in your environment.

3. **Enter your Wi-Fi credentials in the Python script**  
   - Inside the designated section of the Python code, enter:  
     - **Hotspot SSID** (e.g., `POCO`)  
     - **Hotspot password** (e.g., `qevt1738`)  

4. **Paste the ESP32 IP address**  
   - In the Python code, locate the variable `x` and set it to the ESP32’s IP address you copied earlier.

5. **Run the script**  
   - ▶ Execute the Python script.  
   - 🎉 Your gesture-controlled robot is now ready to operate!

---

## How to Control the Robot ✋🤖

Show the following number of fingers in front of the camera to move the bot:

| Fingers | Action        | Emoji |
|---------|--------------|-------|
| ☝ 1     | Forward ⏩    | ⏩    |
| ✌ 2     | Backward ⏪   | ⏪    |
| 🤟 3     | Left ⬅️      | ⬅️   |
| ✋ 4     | Right ➡️     | ➡️   |
| 🖐 5     | Stop 🛑      | 🛑   |

---

✅ **You have successfully set up your Gesture-Controlled Robot.**  
Move your hand, and watch it respond!
