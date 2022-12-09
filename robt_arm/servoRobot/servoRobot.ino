#include<Servo.h>//them thu vien

int goc1 = 0;
int goc2 = 0;
int goc3 = 0;
int goc4 = 0;
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
  servo1.attach(10);
  servo2.attach(9);
  servo3.attach(5);
  servo4.attach(6);
  Serial.begin(9600);
  //servo1.write(90);
  //servo2.write(90);
  //servo3.write(90);
  //servo4.write(90);
}

void loop() {
  // put your main code here, to run repeatedly:
  jsPhaix = analogRead(A0);
  jsPhaiy = analogRead(A1);
  jsTraix = analogRead(A2);
  jsTraiy = analogRead(A3);
  inCacGiaTri();

  HamDieuKhienServo1();
  HamDieuKhienServo2();
  //HamDieuKhienServo3();
  //HamDieuKhienServo4();
}

void inCacGiaTri() {
  Serial.print(jsPhaix);
  Serial.print("\t");
  Serial.println(jsPhaiy);
  Serial.print("\t");
  Serial.print(jsTraix);
  Serial.print("\t");
  Serial.print(jsTraiy);
  Serial.print("\t");
//  Serial.print (servo1.read());
//  Serial.print ("\t");
//  Serial.println (servo2.read());
}
void HamDieuKhienServo1 () {
  if (jsPhaix > 1015 && goc1 < 180) {
    goc1 += 3;
  }
  if (jsPhaix < 5 && goc1 > 0) {
    goc1 -= 3;
  }
  servo1.write(goc1);
  delay(10);
}
void HamDieuKhienServo2() {
  if (jsPhaiy > 1015 && goc2 < 180) {
    goc2 += 3;
  }
  if (jsPhaiy < 5 && goc2 > 0) {
    goc2 -= 3;
  }
  servo2.write(goc1);
  delay(10);
}
void HamDieuKhienServo3() {
  if (jsTraix > 1015 && goc3 < 180) {
    goc3 += 3;
  }
  if (jsTraiy < 5 && goc3 > 0) {
    goc3 -= 3;
  }
  servo3.write(goc3);
  delay(10);
}
void HamDieuKhienServo4() {
  if (jsTraix > 1015 && goc4 < 180) {
    goc4 += 3;
  }
  if (jsTraiy > 1015 && goc4 < 180) {
    goc4 += 3;
  }
  servo4.write(goc4);
  delay(10);
}
