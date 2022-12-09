void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int chietAp =analogRead (A0);
  int thayDoi = map(chietAp,0 ,1023 ,0 ,255);
  char lenh = ' ';
  lenh = Serial.read();
  if (lenh == 'A') {
   analogWrite(3,0);
   analogWrite(5,thayDoi);
   analogWrite(6,thayDoi);
   analogWrite(9,0);
  }
  if (lenh == 'D') {
    analogWrite(6,thayDoi);
   analogWrite(9,0);
    analogWrite(3,thayDoi);
   analogWrite(5,0);
  }
  if (lenh == 'B') {
    analogWrite(3,0);
   analogWrite(5,thayDoi);
    analogWrite(6,0);
   analogWrite(9,thayDoi);
  }
  if (lenh == 'C') {
    analogWrite(3,thayDoi);
   analogWrite(5,0);
   analogWrite(6,0);
   analogWrite(9,thayDoi);
  }
if (lenh == 'E') {
    analogWrite(3,0);
   analogWrite(5,0);
   analogWrite(6,0);
   analogWrite(9,0);
}
}
