#include<Servo.h>//them thu vien

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
  //inCacGiaTriJoyStick();
inCacGiaTri();
  if (jsTraix > 1015 && goc1 < 180) {
    goc1 += 1;
  }
  if (jsTraix < 5 && goc1 > 0) {
    goc1 -= 1;
  }

  if (jsTraiy < 5  && goc3 >5) {
    goc3 -= 1;
  }
  if (jsTraiy > 1015 && goc3 <90) {
    goc3 += 1;
  }

  if (jsPhaiy > 1015 && goc2 > 5) {
    goc2 -= 1;
  }
  if (jsPhaiy < 5 && goc2 < 60) {
    goc2 += 1;
  }

  if (jsPhaix > 1015 && goc4 < 45) {
    goc4 += 1;
  }
  if (jsPhaix < 5 && goc4 > 0) {
    goc4 -= 1;
  }
  servo1.write(goc1);
  servo2.write(goc2);
  servo3.write(goc3);
  servo4.write(goc4);
  delay(10);
}

void inCacGiaTri() {
  Serial.print(servo1.read());
  Serial.print("\t");
  Serial.println(servo2.read());
  Serial.print("\t");
  Serial.print(servo3.read());
  Serial.print("\t");
  Serial.print(servo4.read());
  Serial.print("\t");
}
void inCacGiaTriJoyStick() {
    Serial.print(jsPhaix);
  Serial.print("\t");
  Serial.println(jsPhaiy);
  Serial.print("\t");
  Serial.print(jsTraix);
  Serial.print("\t");
  Serial.print(jsTraiy);
  Serial.print("\t");
}
