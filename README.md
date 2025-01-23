# Smart Water Heater and Relay Control System

This project is designed to conceptualize and implement a **Smart Water Heater** with advanced features such as energy efficiency, safety, measurement capabilities, and remote operability. Additionally, the project includes a **Relay Control System** to manage a load bank optimally.

## Features

### Smart Water Heater:
- Real-time temperature control.
- Energy-efficient operation.
- Integrated safety mechanisms.
- Remote operability via a mobile app or cloud interface.

### Relay Control System:
- Activates the minimum number of relays to match the requested load setpoint.
- Greedy algorithm implementation for optimal relay usage.
- Error handling for unachievable setpoints.

## Project Structure
- **Introduction**: Describes the goals and scope of the project.
- **Hardware Design**: Explains the system components and their interactions.
- **Firmware Design**: Details the firmware functionality, including data acquisition, processing, and communication.
- **Software Design**: Outlines the mobile app, backend, and cloud integration.
- **Relay Control System**: Describes the problem, solution approach, and algorithm for relay activation.
- **Code**: Contains the C implementation for controlling the relay system.

## Block Diagrams
Diagrams for hardware, firmware, and software designs were created using the **online tool PlantUML**. These diagrams visually represent the system's architecture and functionality.

## How to Use
1. Open the document to understand the design and implementation details.
2. Use the diagrams to visualize the system architecture.
3. Compile and run the `relay_control.c` program to test the relay activation logic.

## References
1. Diagrams were created using the **online tool PlantUML**.
2. Additional online resources were used for understanding embedded systems, relay control, and smart water heater technologies.
