const int LED = 13;

void setup() {
  // 设置引脚，OUTPUT 为输出，INPUT 为输入
  pinMode(LED, OUTPUT);
}

void loop() {
  // digitalWrite 函数具有打开和关闭引脚的作用
  digitalWrite(LED, HIGH);
  delay(1000);
  digitalWrite(LED, LOW);
  delay(1000);
}
