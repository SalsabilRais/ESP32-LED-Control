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

```text
[ Smartphone Browser ] ──( HTTP GET /ON or /OFF )──► [ ESP32 Web Server ] ──► [ GPIO Output ] ──► [ LED Circuit ]
