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
* **OUT → A**
