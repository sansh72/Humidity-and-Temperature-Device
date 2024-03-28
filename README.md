# Humidity and Temperature Measurement Device

## Overview

This repository contains the code and documentation for a humidity and temperature measurement device created using a DHT11 sensor. Additionally, an LCD display is connected to the device to show real-time humidity and temperature readings. Moreover, a potentiometer is utilized to control the brightness levels of the pixels on the LCD display.

## Components Used

- DHT11 Sensor: Measures humidity and temperature.
- LCD Display: Shows real-time humidity and temperature readings.
- Potentiometer: Controls the brightness levels of the LCD display.

## How It Works

1. **DHT11 Sensor**: The DHT11 sensor is connected to the microcontroller (e.g., Arduino) to measure humidity and temperature.
2. **LCD Display**: An LCD display is connected to the microcontroller to visualize the real-time humidity and temperature readings.
3. **Potentiometer**: The potentiometer is used to adjust the brightness levels of the pixels on the LCD display.
4. **Code**: The microcontroller runs code to read data from the DHT11 sensor, display the readings on the LCD display, and adjust the brightness levels based on the potentiometer input.

## Setup Instructions

1. **Hardware Setup**:
   - Connect the DHT11 sensor to the microcontroller.
   - Connect the LCD display to the microcontroller.
   - Connect the potentiometer to control the brightness of the LCD display.
   
2. **Software Setup**:
   - Clone or download the code from this repository.
   - Upload the code to the microcontroller using an appropriate IDE (e.g., Arduino IDE).

## Usage

1. **Power On**: Power on the device.
2. **Readings**: The LCD display will show real-time humidity and temperature readings.
3. **Brightness Control**: Rotate the potentiometer to adjust the brightness levels of the LCD display.

## Repository Structure

- **/code**: Contains the source code for the microcontroller.
- **/docs**: Documentation files, including this README.

## Contributing

Contributions to improve the code, add features, or enhance documentation are welcome. Please open an issue to discuss proposed changes or submit a pull request.
