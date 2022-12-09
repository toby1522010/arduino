void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char lenh = ' ';
  lenh = Serial.read();
  if (lenh == 'A') {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
  }
  if (lenh == 'D') {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
  }
  if (lenh == 'B') {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
  }
  if (lenh == 'C') {
    digitalWrite(3, HIGH);
    digitalWrite(2, LOW);
  }
}
