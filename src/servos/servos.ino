#include <Servo.h>

Servo servo;

int pos = 0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(pos = 0; pos < 360; pos += 1) {
    servo.write(pos);
    delay(15);
  }
}
