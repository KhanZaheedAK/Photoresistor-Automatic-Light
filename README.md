# 🌞 Photoresistor Automatic Light

An Arduino-based automatic light system using a photoresistor to detect changes in surrounding light and control an LED.

## 📌 Project Overview

This project demonstrates how a photoresistor can be used with an Arduino to create a simple automatic lighting system.

When the environment becomes dark, the LED turns ON.

When sufficient light is detected, the LED turns OFF.

## ⚙️ How It Works

**Light → Photoresistor → Arduino → LED**

The photoresistor produces different analog readings depending on the amount of light around it.

In this project:

* 🌞 Bright light → lower analog value → LED OFF
* 🌑 Darkness → higher analog value → LED ON

## 🧰 Components

* Arduino
* Photoresistor module
* LED
* 220Ω resistor
* Breadboard
* Jumper wires

## 🔌 Connections

### Photoresistor

* **VCC → 5V**
* **GND → GND**
* **OUT → A0**

### LED

* **Arduino D8 → 220Ω resistor → LED anode (+)**
* **LED cathode (−) → GND**

## 📊 Tested Sensor Readings

The sensor was tested under the actual project setup.

| Condition | Approx. Analog Value | LED |
| --------- | -------------------: | --- |
| 🌞 Bright |                    0 | OFF |
| 🌑 Dark   |                   25 | ON  |

The threshold used in this project is **10**.

> Sensor readings can vary depending on the module, lighting conditions, and environment.

## 🧠 Concepts Demonstrated

* Analog input
* `analogRead()`
* Conditional statements
* Photoresistor/light sensing
* Automatic control
* Arduino digital output

## 🚀 Possible Upgrades

* Control multiple LEDs
* Add an LDR-based street light
* Add an LCD/OLED to display light values
* Control a relay for a larger light
* Build a smart automatic lighting system

## 🎬 Sensor Series

This project is part of the **Robotics With ZK Sensor Series — Season 01**.

**Episode 04 — Photoresistor**

* Part 1 — Know It
* Part 2 — Build It
* Part 3 — Test It

## 👨‍💻 Creator

**Robotics With ZK**

Exploring robotics, Arduino, electronics, and automation — one project at a time.
