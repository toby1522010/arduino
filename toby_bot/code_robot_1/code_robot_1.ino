#include <Servo.h>
Servo sv1;
Servo sv2;
Servo sv3;
Servo sv4;
Servo sv5;
Servo sv6;
int chietap1 = A0;
int chietap2 = A1;
int chietap3 = A2;
int chietap4 = A3;
int chietap5 = A4;
int chietap6 = A5;
int chan1 = 5;
int chan2 = 6;
int chan3 = 7;
int chan4 = 8;
void setup() {
  pinMode(chan1, OUTPUT);
  pinMode(chan2, OUTPUT);
  pinMode(chan3, OUTPUT);
  pinMode(chan4, OUTPUT);
  sv1.attach(11);
  sv2.attach(10);
  sv3.attach(9);
  Serial.begin(9600);
}
void loop() {
  xoay(chietap1, sv1);
  xoay(chietap2, sv2);
  xoay(chietap3, sv3);
  xoay(chietap4, sv4);
  xoay(chietap5, sv5);
  xoay(chietap6, sv6);
  char lenh = Serial.read();
  if(lenh == 'A'){
    run(chan1, 255);
    run(chan2, 0);
    run(chan3, 255);
    run(chan4, 0);
  }
  if(lenh == "B"){
    run(chan1, 0);
    run(chan2, 255);
    run(chan3, 255);
    run(chan4, 0);
  }
  if(lenh == 'C'){
    run(chan1, 0);
    run(chan2, 255);
    run(chan3, 0);
    run(chan4, 255);
  }
  if(lenh == 'D'){
    run(chan1, 255);
    run(chan2, 0);
    run(chan3, 0);
    run(chan4, 255);
  }
}
void xoay(int chietap, Servo sv) {
  int val = analogRead(chietap);
  int servopos = map(val, 0, 1023, 0, 180);
  sv.write(servopos);
  delay(1);
}

void run(int dongco, int speed) {
  analogWrite(dongco, speed);
}