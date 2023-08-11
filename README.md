# Automated Car Parking System with Arduino Uno

## Overview
This project showcases an automated car parking system using Arduino Uno, featuring 2 IR sensors for vehicle detection, a display showing available slots, and indicators for parking status.

## Hardware Requirements
- Arduino Uno
- 2 IR sensors
- Display (e.g., LED matrix or LCD)
- Green and red indicator lights
- Buzzer

## Circuit Diagram
![Circuit Diagram](link-to-your-circuit-diagram-image)

### 3. Upload the Arduino Code
1. Open the Arduino IDE (Integrated Development Environment) on your computer.
2. Copy the provided Arduino code and paste it into a new Arduino sketch.
3. Save the sketch with a descriptive name (e.g., "Car_Parking_System.ino").
4. Connect your Arduino Uno to your computer via USB.
5. Select the appropriate board (Arduino Uno) and port from the "Tools" menu in the Arduino IDE.
6. Click the "Upload" button to upload the code to the Arduino Uno.

### 4. Power Up the System
1. Make sure all connections are secure and correct.
2. Power up the Arduino Uno by connecting it to an appropriate power source.
3. Verify that the display, IR sensors, green light, and red light are operational.
4. Test the system by simulating car arrivals and departures to ensure accurate slot count and status indicators.

That's it! Your Automated Car Parking System should now be set up and running.



## Code Explanation
```cpp
// Insert your code here with comments explaining key sections
```

## Functionality
The automated car parking system operates as follows:

1. **Vehicle Detection**: Two IR sensors are used to detect incoming and outgoing vehicles.
2. **Display**: The system displays the number of available parking slots.
3. **Parking Status Indicators**: A green light indicates an empty parking space.
4. **Full Parking Alert**: When all slots are occupied, the light turns red, and a buzzer sounds if a car attempts to enter.

This functionality ensures efficient parking management and enhances user experience.

## Limitations
- The system supports a maximum of 5 parking slots.
- Future improvements could include expanding parking capacity and code optimization.

## Contributing
Contributions are welcome! Please follow the guidelines in [CONTRIBUTING.md](CONTRIBUTING.md) for details on how to contribute.

## Troubleshooting
If you encounter issues during setup or usage, refer to [TROUBLESHOOTING.md](TROUBLESHOOTING.md) for solutions.

## License
This project is licensed under the [MIT License](LICENSE).

## Credits
- IR sensor library by [YourLibraryName](link-to-library)
- Inspired by [ProjectName](link-to-inspiration)

## Contact Information
For questions or feedback, feel free to reach out via email at [email@example.com](mailto:email@example.com).

## Demo
[Link to Video Demo](link-to-your-demo-video-or-images)

