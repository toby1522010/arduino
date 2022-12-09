#include <Servo.h>
Servo khop1phai;
Servo khop2phai;
Servo khop3phai;
int chietap1p = A0;
int chietap2p = A0;
int chietap3p = A0;
void setup() {
khop1phai.attach(11);
khop2phai.attach(10);
khop3phai.attach(9);
Serial.begin(9600);
}
void loop() {
chietap1phai();
chietap2phai();
chietap3phai();
}

void chietap1phai(){
int goc_xoay_phai1 = analogRead(chietap1p);
goc_xoay_phai1 = map(goc_xoay_phai1, 0, 1023, 0, 180);
khop1phai.write(goc_xoay_phai1);
delay(1);
}

void chietap2phai(){
int goc_xoay_phai2 = analogRead(chietap2p);
goc_xoay_phai2 = map(goc_xoay_phai2, 0, 1023, 0, 180);
khop2phai.write(goc_xoay_phai2);
delay(1);
}

void chietap3phai(){
int goc_xoay_phai3 = analogRead(chietap3p);
goc_xoay_phai3 = map(goc_xoay_phai3, 0, 1023, 0, 180);
khop3phai.write(goc_xoay_phai3);
delay(1);
}
