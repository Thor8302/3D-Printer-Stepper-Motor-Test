// Stepper X,Y axix test

#include <AFMotor.h>
// Motor with 200 steps per rev (1.8 degree)
// to motor port #1 (M1 and M2)
AF_Stepper motorX(200, 2);
AF_Stepper motorY(200, 1);
void setup() {
// set up Serial library at 9600 bps
Serial.begin(9600);
//Serial.println(“ Stepper test!”);  
motorX.setSpeed(100); // 50 rpm
motorY.setSpeed(100); // 50 rpm
}
void loop() {

//Serial.println(“Micrsostep steps”);

motorX.step(70, FORWARD, MICROSTEP);
delay(10);
motorY.step(70, FORWARD, MICROSTEP);
delay(10);
motorX.step(70, BACKWARD, MICROSTEP);
delay(10);
motorY.step(70, BACKWARD, MICROSTEP);

delay(2000);
}
