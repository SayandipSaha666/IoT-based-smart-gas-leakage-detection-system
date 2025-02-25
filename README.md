# IoT-Based Smart Gas Leakage Detection System

## Overview
The **IoT-Based Smart Gas Leakage Detection System** is designed to monitor gas levels in real time using an **MQ135 gas sensor** integrated with an **Arduino ESP8266** microcontroller. The system sends alerts via the **Blynk IoT app** and triggers an alarm if the gas concentration surpasses a predefined threshold.

## Features
- **Real-Time Gas Monitoring:** Uses MQ135 sensor to detect harmful gas levels.
- **IoT Integration:** Connects to the Blynk IoT platform for remote monitoring.
- **Alarm System:** Activates an audible alarm when gas levels exceed the threshold.
- **Notification Alerts:** Sends real-time alerts via the Blynk app.
- **Low-Cost & Efficient:** Built with affordable and widely available components.

## Technologies Used
- **Arduino ESP8266** (Microcontroller)
- **MQ135 Gas Sensor** (Air Quality Monitoring)
- **Blynk IoT App** (Real-Time Data & Notifications)
- **C++ / Arduino IDE** (Programming)
- **Wi-Fi Connectivity** (For Remote Monitoring)

## Installation & Setup
### Prerequisites
Ensure you have the following components:
- Arduino ESP8266
- MQ135 Gas Sensor
- Buzzer for alarm
- Wi-Fi Connectivity
- Blynk IoT Account

### Step 1: Clone the Repository
```bash
git clone https://github.com/SayandipSaha666/IoT-based-smart-gas-leakage-detection-system.git
cd IoT-based-smart-gas-leakage-detection-system
```

### Step 2: Install Required Libraries
Install the necessary libraries in Arduino IDE:
```bash
pip install esptool
pip install pyserial
```
Also, install the following libraries in Arduino IDE:
- **ESP8266WiFi**
- **BlynkSimpleEsp8266**
- **MQ135**

### Step 3: Configure Blynk
1. Download the **Blynk IoT App** from the [Play Store](https://play.google.com) or [App Store](https://www.apple.com/app-store/).
2. Create a new project and obtain the **Auth Token**.
3. Update the `main.ino` file with your **Auth Token**, Wi-Fi credentials, and sensor pin configurations.

### Step 4: Upload the Code
1. Open `main.ino` in **Arduino IDE**.
2. Connect the ESP8266 to your computer.
3. Select **Board: ESP8266** and correct **COM Port**.
4. Click **Upload** to flash the firmware.

## Working Mechanism
1. **Gas Detection:** The MQ135 sensor continuously measures gas concentration.
2. **Data Transmission:** The ESP8266 sends real-time sensor data to the Blynk IoT app.
3. **Alert System:** If gas levels exceed the threshold, the system:
   - Sends a notification to the user's mobile device via Blynk.
   - Activates an audible buzzer alarm.
4. **User Monitoring:** Users can monitor gas levels remotely through the Blynk app.

## Project Structure
```
IoT-based-smart-gas-leakage-detection-system/
│── src/                 # Source code files
│── schematics/          # Circuit diagrams
│── README.md            # Project Documentation
│── main.ino             # Arduino sketch
```

## Future Enhancements
- Integrate an LCD display for local gas level monitoring.
- Implement an SMS alert system for critical gas levels.
- Extend support for multiple gas sensors.

## Contributors
- **Sayandip Saha** ([GitHub Profile](https://github.com/SayandipSaha666))

## License
This project is licensed under the **MIT License**. Feel free to contribute and enhance its functionality.

---
For any issues or suggestions, please raise an issue in the [GitHub Repository](https://github.com/SayandipSaha666/IoT-based-smart-gas-leakage-detection-system).

