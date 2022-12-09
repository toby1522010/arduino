void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a = 10;
  int b =1;
  if (a > b) {
    Serial.println("a lon hon b");
  } else {
    Serial.println("b lon hon a");
  }
  delay(3000);
}
