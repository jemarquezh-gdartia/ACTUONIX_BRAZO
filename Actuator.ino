#include <Servo.h>
Servo actuator;

void setup() {
  actuator.attach(9);
  actuator.writeMicroseconds(2000);
  delay(3000);
  }

void loop() {
  actuator.writeMicroseconds(1000);
  delay(3000);
  actuator.writeMicroseconds(2000);
  delay(3000);
}
