Certainly! Here’s the revised README with the code explanation removed and the video section emphasized:

---

# 3D Printer Stepper Motor Test

## Overview

This repository contains the code and resources for testing the stepper motors used in the X-Y plane movement of a 3D printer. The code is written in Arduino and is designed to control two stepper motors using the `AFMotor` library. This test ensures that the motors move correctly in both forward and backward directions.

## Project Details

- **Motors:** The project uses stepper motors with 200 steps per revolution (1.8 degrees per step).
- **Control Library:** The `AFMotor` library is utilized to manage the motor movements.
- **Test Setup:** The test is designed to move both motors simultaneously in the X and Y axes.

## Video Demonstration

Below is a video demonstration of the stepper motor test in action.

<video width="600" controls>
  <source src="3d-printer-stepper-trial.mp4" type="video/mp4">
  Your browser does not support the video tag. You can download the video [here](stepper_motor_demo.mp4).
</video>

## Usage

1. **Wiring:** Connect the stepper motors to the appropriate motor driver ports (M1, M2 for motor Y, and others for motor X) on the Arduino.
2. **Upload Code:** Upload the provided Arduino code to your board.
3. **Run the Test:** Power up your Arduino board, and the motors should begin moving as described.

## Future Work

- Integrate this setup into a complete 3D printer control system.
- Add Z-axis motor control and end-stop switches.
- Implement more complex movement patterns to simulate actual 3D printing paths.

## License

This project is open-source and available under the [MIT License](LICENSE).

## Contributions

Contributions are welcome! Please feel free to submit a pull request or open an issue if you have suggestions or improvements.

---

This version includes the video section and removes the code explanation. Let me know if you need any further adjustments!