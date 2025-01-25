# SMART-LIGHT-CONTROL

**COMPANY**: CODTECH IT SOLUTIONS

**NAME**: AJINKYA ASHOK SURYAWANSHI 

**INTERN ID**: CT08IBO

**DOMAIN**: Internet Of Things 

**BATCH DURATION**: December 30th, 2024 to January 30th, 2025

**MENTOR NAME**: NEELA SANTHOSH


**System Components**
Hardware:

Arduino microcontroller (e.g., Arduino Uno, Nano, or ESP8266/ESP32 for Wi-Fi functionality).
LED light (single-color or RGB, depending on the design).
Resistors to limit current to the LED.
Communication module:
Bluetooth Module: HC-05/HC-06 for Bluetooth communication.
Wi-Fi Module: ESP8266/ESP32 for Wi-Fi communication.
Power source for the Arduino and connected components.
Software:

Arduino IDE for programming the microcontroller.
Mobile app development tools (e.g., MIT App Inventor, Flutter, or React Native).
Libraries for communication protocols (e.g., BluetoothSerial or WiFiClient for Arduino).
Design Description
Microcontroller Configuration:

The Arduino will be connected to the LED light with a current-limiting resistor.
A communication module (Bluetooth or Wi-Fi) will be attached to the Arduino to enable wireless communication.
The Arduino will be programmed to process commands from the mobile app and translate them into actions for the LED light (e.g., toggling on/off, adjusting brightness).
Communication Setup:

Bluetooth Communication:
The HC-05 module will pair with the mobile device.
Commands will be sent from the app via Bluetooth and interpreted by the Arduino.
Wi-Fi Communication:
The ESP8266/ESP32 module will connect to a local Wi-Fi network.
The mobile app will send commands via HTTP requests or WebSocket to the Arduino.
Mobile App Interface:

The app will include a simple user interface with the following controls:
Power Button: Toggle the LED light on/off.
Brightness Slider: Adjust LED brightness (if using PWM on Arduino).
Color Selector: Choose colors for RGB LEDs.
The app will send commands (e.g., ON, OFF, or brightness levels) to the Arduino through the selected communication method.
Control Logic:

The Arduino will parse incoming commands from the communication module.
Based on the command, the Arduino will:
Turn the LED on/off.
Adjust brightness using PWM.
Change color by controlling the RGB LED pins.
Optional Enhancements
Integration with IoT Platforms: Allow the LED to be controlled remotely via cloud services like Blynk or MQTT.
Scheduling Feature: Add a timer in the mobile app to schedule LED operations.
Voice Control: Integrate voice commands using APIs like Google Assistant or Alexa.
**Outcome**
This system will allow seamless control of an LED light through a mobile app, demonstrating the integration of microcontrollers, communication protocols, and user-friendly interfaces.

# OUTPUT OF TASK

https://github.com/user-attachments/assets/aa39315b-faba-4cf4-ac1b-14c2e61a4acd

