int RPIN = 11;
int GPIN = 10;
int BPIN =  9;

void setup() {
  // put your setup code here, to run once:
  pinMode(RPIN, OUTPUT);
  pinMode(GPIN, OUTPUT);
  pinMode(BPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i, j, k;

  for (i = 1; i <= 7; i++) {
    for (j = 1; j <= 7; j++) {
      for (k = 1; k <= 7; k++) {
        Color(i, j, k);
      }
      for (k = 6; k >= 2; k--) {
        Color(i, j, k);
      }
    }
    for (j = 6; j >= 2; j--) {
      for (k = 1; k <= 7; k++) {
        Color(i, j, k);
      }
      for (k = 6; k >= 2; k--) {
        Color(i, j, k);
      }
    }
  }

  for (i = 6; i >= 2; i--) {
    for (j = 1; j <= 7; j++) {
      for (k = 1; k <= 7; k++) {
        Color(i, j, k);
      }
      for (k = 6; k >= 2; k--) {
        Color(i, j, k);
      }
    }
    for (j = 6; j >= 2; j--) {
      for (k = 1; k <= 7; k++) {
        Color(i, j, k);
      }
      for (k = 6; k >= 2; k--) {
        Color(i, j, k);
      }
    }
  }
}

void Color(int r, int g, int b) {
  //  document: https://assiss.github.io/arduino-zhcn/cn/Reference/AnalogWrite.html
  //  document: https://assiss.github.io/arduino-zhcn/cn/Tutorial/PWM.html  
  int strength = 100;
  analogWrite(RPIN, strength * r);
  analogWrite(GPIN, strength * g);
  analogWrite(BPIN, strength * b);
  delay(100);
}
