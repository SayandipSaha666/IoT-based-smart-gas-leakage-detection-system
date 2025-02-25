# IoT-Based Gas Monitoring System

## Overview
The **IoT-Based Gas Monitoring System** is designed to detect harmful gases in the environment using an **MQ135 gas sensor** and microcontrollers such as **Arduino** and **ESP8266**. The system integrates with the **Blynk IoT app** for real-time monitoring, providing notifications and triggering an alarm when gas levels exceed a predefined threshold.

## Features
- **Real-time Gas Monitoring:** Continuously measures air quality using the MQ135 sensor.
- **ESP8266 Wi-Fi Connectivity:** Enables cloud-based monitoring via the Blynk IoT platform.
- **Mobile Notifications:** Sends alerts to users when gas levels exceed safe limits.
- **Alarm System:** Activates a buzzer alarm for immediate local warning.
- **Data Logging:** Keeps track of gas levels over time for analysis.

## Technologies Used
- **MQ135 Gas Sensor** (for detecting gases such as CO2, NH3, Benzene, etc.)
- **Arduino Uno/ESP8266** (for microcontroller processing)
- **Blynk IoT App** (for remote monitoring)
- **Wi-Fi Module (ESP8266)** (for cloud connectivity)
- **Buzzer & LED Indicators** (for alarm notifications)

## Installation & Setup
### Prerequisites
Ensure you have the following components:
- **MQ135 Gas Sensor**
- **Arduino Uno & ESP8266 Wi-Fi Module**
- **Buzzer & LED Indicators**
- **Blynk App Installed on Your Smartphone**
- **Jumper Wires & Power Supply**

### Step 1: Clone the Repository
```bash
git clone https://github.com/your-repo/iot-gas-monitoring.git
cd iot-gas-monitoring
```

### Step 2: Install Required Libraries
Install the required Arduino libraries using the Arduino IDE:
1. **ESP8266WiFi**
2. **BlynkSimpleEsp8266**
3. **MQ135 Library**

### Step 3: Configure Blynk
1. Create a new project in the Blynk App.
2. Select **ESP8266** as the device.
3. Copy the **Auth Token** and update it in the Arduino sketch.
4. Connect your device to Wi-Fi.

### Step 4: Upload Code
Upload the provided **Arduino Sketch** to your **ESP8266** using the Arduino IDE.

```bash
python upload_script.py  # If using PlatformIO
```

### Step 5: Power and Monitor
Power up the system and monitor gas levels via the **Blynk App** in real-time.

## Working Mechanism
1. **Gas Detection:** The MQ135 sensor measures gas concentrations in the air.
2. **Threshold Monitoring:** If gas levels exceed a predefined safe limit, the system triggers an alarm.
3. **Blynk Integration:** The gas concentration data is transmitted to the Blynk cloud for visualization.
4. **Notifications & Alerts:** The user receives an instant mobile notification in case of hazardous gas levels.

## Project Structure
```
iot-gas-monitoring/
│── src/                     # Source code directory
│── firmware/                # Arduino sketches
│── documentation/           # Project documentation
│── README.md                # Project Documentation
```

## Future Enhancements
- Integration with **SMS Alerts** for emergency notifications.
- Use of **AI/ML models** for predictive gas leak detection.
- **Battery Backup** for uninterrupted monitoring.

## Contributors
- **Sayandip Saha** (sahasbhs2022@gmail.com)

## License
This project is licensed under the **MIT License**. Feel free to modify and use it for safety applications.

---
For any issues or suggestions, please open an issue in the [GitHub Repository](https://github.com/SayandipSaha666/IoT-based-smart-gas-leakage-detection-system).

