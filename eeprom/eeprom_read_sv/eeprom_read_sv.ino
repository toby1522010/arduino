#include <Servo.h>
#include <SPI.h>
#include <EEPROM.h>
int diachi = 0;
Servo sv;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sv.attach(11);
}

void loop() {
  // put your main code here, to rurepeatedly:
  for (int i = 0; i <= EEPROM.length(); i++) {
    int val = EEPROM.read(i);
    Serial.println(val);
    dieukhiensv(sv ,val);
  }
}

void dieukhiensv(Servo sv ,int val){
  sv.write(val);
  delay(10);
}