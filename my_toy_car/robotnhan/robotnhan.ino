int pinchietap1 = A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
pinchietap1 = analogRead(A0);
int val = map(pinchietap1,0,1023,0,179);
Serial.print(val);
}
