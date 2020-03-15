int PIR = 9;
int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(PIR) == HIGH) {
    Serial.println(HIGH);
    digitalWrite(led, HIGH);
  } else {
    Serial.println(LOW);
    digitalWrite(led, LOW);
  }
  delay(1000);
}
