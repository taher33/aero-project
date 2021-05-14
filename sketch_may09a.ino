
#include <Servo.h>

Servo AiServo1;
Servo AiServo2;
Servo FlServo1;
Servo FlServo2;

//ports for the joystick
const int joyX = 1;
const int joyY = 2;
//function that returns rotation value for the servos
int rotationValue (float joyRot){
    int value = map(joyRot,0,1023,0,180);
    return value;
}

void setup() {
  // put your setup code here, to run once:
  AiServo1.attach(9);
  AiServo2.attach(8);
  FlServo1.attach(7);
  FlServo2.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:
  int joyXrot = analogRead(joyX);
  int joyYrot = analogRead(joyY);
  AiServo1.write(rotationValue(joyXrot));
  AiServo2.write(rotationValue(joyXrot));
  FlServo1.write(rotationValue(joyYrot));
  FliServo2.write(rotationValue(joYXrot));
}
