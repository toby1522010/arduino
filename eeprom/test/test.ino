#include <Servo.h>
Servo sv1;
int chietap1 = A1;
void setup() {
sv1.attach(A0);
sv1.write(90);
delay(1000);
Serial.begin(9600); 
}
void loop() {
int val1 = analogRead(chietap1);
int xoay1= map(val1,1023, 0, 180, 0);
sv1.write(xoay1);
Serial.println(xoay1);
delay(10);
}
