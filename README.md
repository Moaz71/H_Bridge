# H_Bridge

🚀 Excited to unveil my latest project: an H-bridge motor control system on the Atmega32 microcontroller! 💻 Implementing it in two ways:

1️⃣ Using 4 NPN transistors.

2️⃣ Employing two SPDT relays.



💡 Aim:

Creating a versatile testing case for DC Motors, Switches, and PORT Drivers. 🌐



🔧 Project Features:

- 3 buttons: CW, CCW, Stop for motor control.

- Comprehensive testing platform for DC Motors, Switches, and PORT Drivers.



⚙️ Project Highlights:

- Smooth motor direction control using the H-bridge configuration.

- Post-build configurations for Switch and Pre-build configurations for Port drivers.



⚡ Hardware Components:

- NPN Transistors / SPDT Relays

- Atmega32 Microcontroller

-Push buttons



🏗️ Software Architecture:

- Employed a layered approach:

 - MCAL Layer: DIO driver, PORT driver with pre-built configurations.

 - HAL Layer: SWITCH driver with post-built configurations.



