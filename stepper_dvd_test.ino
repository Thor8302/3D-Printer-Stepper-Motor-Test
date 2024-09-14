

#include <AFMotor.h>
// Motor with 200 steps per rev (1.8 degree);
// to motor port #1 (M1 and M2);
AF_Stepper motor(200, 2);
void setup() {
// set up Serial library at 9600 bps;
Serial.begin(9600);
//Serial.println(“ Stepper test!”);  
motor.setSpeed(100); // 50 rpm;
}
void loop() {

//Serial.println(“Micrsostep steps”);
motor.step(50, FORWARD, MICROSTEP);
motor.step(50, BACKWARD, MICROSTEP);
motor.step(100, FORWARD, MICROSTEP);
motor.step(100, BACKWARD, MICROSTEP);
motor.step(200, FORWARD, MICROSTEP);
motor.step(200, BACKWARD, MICROSTEP);
motor.step(250, FORWARD, MICROSTEP);
motor.step(250, BACKWARD, MICROSTEP);
delay(100);

motor.step(3, FORWARD, MICROSTEP);
motor.step(3, BACKWARD, MICROSTEP);
delay(1000);
}
