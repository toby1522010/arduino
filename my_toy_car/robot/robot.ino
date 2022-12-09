#include <Servo.h>

Servo sv1;
Servo sv2;
Servo sv3;
Servo sv4;
Servo sv5;
Servo sv6;
int val1;
int goc1;
char lenh = " ";
void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lenh = Serial.read();
  if (lenh == "A") {
    run1(1023, 0);
    run2(1023, 0);
  }
  if (lenh == "B") {
    run1(1023, 0);
    run2(0, 0);
  }
  if (lenh == "C") {
    run1(0, 0);
    run2(0, 1023);
  }
  if (lenh == "D") {
    run1(0, 1023);
    run2(0, 1023);
  }

  if(lenh == 'o') {
    lefthand(180,180,180);
    righthand(90,90,90);
  }
  val1 == lenh;
  goc1 == val1;
  sv1.write(goc1);
}
void run1(int valchan5, int valchan6) {
  analogWrite(5, valchan5);
  analogWrite(6, valchan6);
}

void run2(int valchan3, int valchan11) {
  analogWrite(3, valchan3);
  analogWrite(11, valchan11);
}

void lefthand(int pos1,int pos2, int pos3) {
  sv1.write(pos1);
  sv2.write(pos2);
  sv3.write(pos3);
}
void righthand(int pos4, int pos5, int pos6) {
  sv4.write(pos4);
  sv5.write(pos5);
  sv6.write(pos6);
}