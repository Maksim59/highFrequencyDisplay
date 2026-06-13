
# ESP32-Based Active HF Frequency Tracker for Kenwood TS-520
<img width="503" height="372" alt="Screenshot 2026-06-13 180652" src="https://github.com/user-attachments/assets/e6a85e36-13d1-43ce-8553-94b2fd415dfc" />

## Overview

This system is an active high-frequency (HF) tracking and digital display upgrade designed for legacy radio equipment. It samples the internal high-frequency oscillator signals from the radio, amplifies them through a custom discrete transistor stage to match modern logic thresholds, and processes the frequencies using an ESP32 microcontroller to compute and display the real-time operating frequency of the radio.

---

## Key Features

### ESP32 Microcontroller

Utilizes high-speed hardware timers and dual-core processing to precisely sample incoming frequency signals, perform arithmetic offsets, and drive the system logic.

### Custom Discrete Transistor Amplifier

A high-bandwidth, high-input-impedance active transistor buffer stage designed to amplify the radio's low-voltage internal oscillator signals up to reliable 3.3V logic levels without loading down or detuning the radio's sensitive internal circuitry.

### Real-Time Frequency Synthesis Engine

Firmware running on the ESP32 dynamically computes the final operating frequency by adding or subtracting the measured oscillator signals based on the active band configuration of the transceiver.

---

## PCB Layout Strategy

The discrete transistor amplifier stage is placed immediately adjacent to the signal input connectors to keep unamplified, low-voltage HF traces as short as possible, preventing stray noise pickup.

High-speed digital traces running to the ESP32 and display headers are routed away from the sensitive analog input nodes to minimize digital crosstalk and switching noise injection.

The entire bottom layer of the PCB is dedicated as a solid, continuous ground plane to minimize track inductance, provide a low-impedance return path for the high-frequency sampling signals, and shield the RF signals from digital switching hashes.
