char lenh = " ";
void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lenh = Serial.read();
if(lenh == "A"){
  analogWrite(5, 1023);
  analogWrite(6, 0); 
}
if(lenh == "B"){
  analogWrite(5, 1023);
  analogWrite(6, 0);
}
if(lenh == "C"){
  analogWrite(5, 1023);
  analogWrite(6, 0);
}