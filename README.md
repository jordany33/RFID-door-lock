# RFID Door Mechanism

A functional door lock mechanism leveraging RFID technology. This system incorporates features such as a dynamic LCD display, RFID identification, and audio output.

## Features

- **RFID Identification**: Authenticates and authorizes users based on their RFID tags.
- **LCD Display**: Provides dynamic messages on an LCD screen, indicating system status or feedback.
- **Audio Output**: Audible feedback upon card detection, successful access, or denied access.

## Prerequisites

Before you start, ensure you have the following prerequisites installed:

- **Arduino IDE**: Needed to compile and upload the code to your Arduino board. Download and install it from [here](https://www.arduino.cc/en/software).

## Required Libraries

To ensure the code functions correctly, you must install the following libraries through the Arduino IDE:

1. **SPI**: This library allows Arduino to communicate with SPI devices. It comes pre-installed with the Arduino IDE.
2. **MFRC522**: This library is used to communicate with the MFRC522 RFID module. Install it via the Arduino Library Manager.
3. **Servo**: This library provides an interface to control servo motors. It comes pre-installed with the Arduino IDE.
4. **LiquidCrystal**: This library allows the Arduino to control LCD displays that are compatible with the Hitachi HD44780 driver. It comes pre-installed with the Arduino IDE.

### Installation of Libraries

1. Open the Arduino IDE.
2. Navigate to `Sketch` > `Include Library` > `Manage Libraries...`.
3. In the Library Manager, search for each of the above-mentioned libraries (other than the pre-installed ones).
4. Click on the library and select `Install`.

## Setup

1. Connect the RFID module, LCD display, servo motor, and other peripherals to your Arduino board based on the defined pin configurations in the code.
2. Upload the provided code to your Arduino board using the Arduino IDE.
3. Once uploaded, the system should initialize, and the LCD should display the predefined message.

## Usage

1. Swipe an RFID card near the RFID module.
2. Based on the RFID tag's UID, the system will either grant or deny access, providing visual and audible feedback.

## License

This project is open-sourced under the MIT License. See the `LICENSE` file for more details.

