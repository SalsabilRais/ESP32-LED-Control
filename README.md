# 💡 ESP32 IoT GPIO & LED Web Controller

<p align="left">
  <img src="https://img.shields.io/badge/ESP32-E7352C?style=for-the-badge&logo=espressif&logoColor=white" alt="ESP32" />
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++" />
  <img src="https://img.shields.io/badge/Arduino_IDE-00979D?style=for-the-badge&logo=Arduino&logoColor=white" alt="Arduino IDE" />
  <img src="https://img.shields.io/badge/HTTP_WebServer-0284C7?style=for-the-badge&logo=wifi&logoColor=white" alt="WebServer" />
  <img src="https://img.shields.io/badge/HTML5-E34F26?style=for-the-badge&logo=html5&logoColor=white" alt="HTML5" />
</p>

## 📌 Overview
An **IoT Wireless GPIO Control System** built on an **ESP32** microcontroller. The ESP32 operates as a local **HTTP Web Server**, serving a lightweight web interface that allows users to toggle physical actuators (LED) in real time from any smartphone or browser connected to the same Wi-Fi network.

---

## 🎯 Key Objectives
- **Embedded Web Server Architecture:** Host an interactive HTML control interface directly on the ESP32 flash memory.
- **Wireless GPIO Actuation:** Translate client-side HTTP `GET` requests into instant digital state changes (`HIGH`/`LOW`) on ESP32 output pins.
- **IoT Prototyping Foundation:** Build a scalable client-server architecture adaptable to smart home relays and multi-channel automation.

---

## ⚙️ System Architecture & Workflow

> **[ Smartphone Browser ]** ──(`HTTP GET /ON or /OFF`)──► **[ ESP32 Web Server ]** ──► **[ GPIO Output ]** ──► **[ LED Circuit ]**

1. **Network Initialization:** The ESP32 connects to the local Wi-Fi network (`STA` mode) and starts listening on port `80`.
2. **Client Connection:** The user accesses the ESP32's local IP address via a mobile browser.
3. **HTTP Request Parsing:** Pressing the web interface buttons dispatches HTTP requests that the firmware parses to switch the GPIO pin state.

---

## 🔌 Hardware Components
- **Microcontroller:** ESP32 Development Board
- **Actuator & Protection:** 5mm LED + Current-Limiting Resistor (`220Ω – 330Ω`)
- **Prototyping:** Breadboard & Male-to-Male Jumper Wires

---

## 📸 Project Preview
<img width="928" height="1228" alt="pic 2" src="https://github.com/user-attachments/assets/f1ad4481-3b59-414b-82bf-6e643fc80012" />
<img width="726" height="1280" alt="pic 1" src="https://github.com/user-attachments/assets/2c56041f-9059-4b98-96a0-66afc073454e" />

---

## 🚀 Future Roadmap
- [ ] Expand to multi-channel relay control for home automation appliances
- [ ] Upgrade UI with asynchronous `fetch()` API calls (no page reload)
- [ ] Integrate environmental sensor telemetry alongside actuator controls

---

## 👩‍💻 Author
**Salsabil Rais** — Embedded Systems & IoT Student (FST Tangier)  
[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=flat-square&logo=linkedin&logoColor=white)](https://linkedin.com/in/salsabil-rais)
[![GitHub](https://img.shields.io/badge/GitHub-181717?style=flat-square&logo=github&logoColor=white)](https://github.com/SalsabilRais)
