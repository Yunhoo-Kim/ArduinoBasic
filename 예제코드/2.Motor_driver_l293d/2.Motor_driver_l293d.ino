#include <SoftwareSerial.h>
#include <AFMotor.h>

AF_DCMotor motor_L(4);              
AF_DCMotor motor_R(3); 

void setup() {
  motor_L.setSpeed(150);              
  motor_L.run(RELEASE);
  motor_R.setSpeed(150);                 
  motor_R.run(RELEASE);
}

void loop() {
 motor_L.run(FORWARD); 
 motor_R.run(RELEASE); 
 delay(1000);
 
 motor_L.run(RELEASE);
 motor_R.run(RELEASE);
 delay(1000);
 
 motor_L.run(BACKWARD);
 motor_R.run(RELEASE);
 delay(1000);

 motor_L.run(RELEASE); 
 motor_R.run(FORWARD); 
 delay(1000);
 
 motor_L.run(RELEASE);
 motor_R.run(RELEASE);
 delay(1000);
 
 motor_L.run(RELEASE);
 motor_R.run(BACKWARD);
 delay(1000); 

 motor_L.run(RELEASE);
 motor_R.run(RELEASE);
 delay(1000);
}

