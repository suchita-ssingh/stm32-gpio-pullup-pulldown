# STM32 GPIO Pull-Up & Pull-Down Button LED Control

## Overview
This project demonstrates digital GPIO input modes on an STM32 Nucleo-C031C6 microcontroller using Wokwi simulation. It contrasts two push-button configurations to control two output LEDs:

1. Button 1: Uses internal pull-up logic (`INPUT_PULLUP`), turning on LED 1 when the input goes low.
2. Button 2: Uses an external pull-down configuration, turning on LED 2 when the input goes high.


## Live Simulation
Test the interactive circuit directly in your browser:
[Run Wokwi Simulation](https://wokwi.com/projects/477791969560508417)


## Hardware Pin Mapping
| Component | Pin | Circuit Mode | Output Pin |
| :--- | :--- | :--- | :--- |
| Button 1 | Pin 12 | Internal `INPUT_PULLUP` (Active-LOW) | LED 1 (Pin 13) |
| Button 2 | Pin 8 | External Pull-Down (Active-HIGH) | LED 2 (Pin 9) |


## Repository Structure
- `sketch.ino` — Firmware managing GPIO pin modes and input reads.
- `diagram.json` — Circuit schematic and wiring connections.
