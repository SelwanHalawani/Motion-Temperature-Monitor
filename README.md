# Motion and Temperature Detection Project Using Arduino
## Overview
This project demonstrates an integrated system that uses an Arduino Uno board to detect motion and measure temperature. The system includes a PIR motion sensor, a TMP temperature sensor, and an LED to indicate detected events. Data is displayed on the Serial Monitor.

## Components and Their Functions
### 1. Arduino Uno Board
**Purpose:** Serves as the main controller that reads signals from sensors, processes them, controls the LED, and displays data through the Serial Monitor.

![Screenshot 2025-01-10 195447](https://github.com/user-attachments/assets/730b7935-3bfa-46b8-92a5-29bc4ddeec9f)

*Image 1: Arduino Uno*
___
### 2. PIR Motion Sensor

**Purpose:** Detects motion in the surrounding environment and sends a HIGH signal when motion is detected.

![Screenshot 2025-01-10 195905](https://github.com/user-attachments/assets/b7e08f51-e219-4d81-8a2c-740b3a68f89c)

*Image 2: PIR Motion Sensor*
___
### 3. TMP Temperature Sensor

**Purpose:** Measures the ambient temperature and converts it into an analog signal readable by the Arduino.

![Screenshot 2025-01-10 195959](https://github.com/user-attachments/assets/b64e5b7f-7c1f-4667-b23f-62d07ef87c45)

*Image 3: TMP Temperature Sensor*
___
### 4. LED

**Purpose:** Acts as a visual indicator to show the motion detection status (lights up when motion is detected).

![Screenshot 2025-01-10 200221](https://github.com/user-attachments/assets/4d43b72e-dcc6-407b-806f-fb80b7c18509)

*Image 4: LED*
___
### 5. Resistor

**Purpose:** Limits the current passing through the LED to prevent damage. It ensures the circuit operates safely and efficiently.

![Screenshot 2025-01-10 200425](https://github.com/user-attachments/assets/b8027af3-a0f2-4a52-a879-fb06b76993cf)

*Image 5: Resistor*

## How It Works

### Motion Detection:

- The Arduino monitors the output of the PIR sensor.

- If motion is detected, the LED lights up, and the message “**Motion detected**” is printed.

- If no motion is detected, the LED turns off, and the message “**No motion**” is printed.

### Temperature Measurement:

- The Arduino reads analog values from the TMP sensor.

- The value is converted into Celsius.

- If the temperature changes by more than 0.1 degrees from the previous reading, it updates and displays the new reading on the Serial Monitor.
  
## Motion & Temperature Monitor Picture

![Screenshot 2025-01-10 174850](https://github.com/user-attachments/assets/4f1e7286-870a-45e1-9886-53de6ab75ab8)

## Conclusion

This project represents a simple and effective application of sensors with Arduino to create an integrated system for motion detection and temperature measurement. It can serve as a foundation for more complex projects requiring environmental monitoring or alerts upon detecting certain changes.


