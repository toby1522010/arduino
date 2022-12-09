#include<Servo.h>//them thu vien
char lenh =' ';
int goc1 = 90;//0-180
int goc2 = 90;//0-50
int goc3 = 10;//0-75
int goc4 = 5;//5-45
int jsTraix = 0;
int jsTraiy = 0;
int jsPhaix = 0;
int jsPhaiy = 0;

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(5);
  servo4.attach(6);
  Serial.begin(9600);
  servo1.write(90);
  servo2.write(10);
  servo3.write(10);
  servo4.write(5);
}

void loop() {

  // put your main code here, to run repeatedly:
  jsPhaix = analogRead(A0);
  jsPhaiy = analogRead(A1);
  jsTraix = analogRead(A2);
  jsTraiy = analogRead(A3);
 
if (Serial.available() > 0) {
lenh = Serial.read();
}
Serial.print(lenh);
  if (lenh == 'A' && goc1 < 180) {
    goc1 += 1;
  }
  if (lenh =='B' && goc1 > 0) {
    goc1 -= 1;
  }

  if (lenh =='F' && goc3 >5) {
    goc3 -= 1;
  }
  if (lenh =='E' && goc3 <90) {
    goc3 += 1;
  }

  if ( lenh =='D'&& goc2 > 5) {
    goc2 -= 1;
  }
  if (lenh=='C' && goc2 < 90) {
    goc2 += 1;
  }

  if (lenh=='G' && goc4 < 45) {
    goc4 += 1;
  }
  if (lenh == 'H' && goc4 > 0) {
    goc4 -= 1;
  }
  servo1.write(goc1);
  servo2.write(goc2);
  servo3.write(goc3);
  servo4.write(goc4);
  delay(10);
}
