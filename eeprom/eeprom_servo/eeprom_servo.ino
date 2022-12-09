#include <Servo.h>
#include <EEPROM.h>
int play = 9;
int gocsv = 0;
int diachi = 0;
int giatri = gocsv;
Servo sv;
int chietap = A0;
int button = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT_PULLUP);
  pinMode(play, INPUT_PULLUP);
  sv.attach(11);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int tinhieu = analogRead(chietap);
  gocsv = map(tinhieu, 0, 1023, 0, 180);
  sv.write(gocsv);
  delay(10);
  if (digitalRead(button) == LOW) {
    EEPROM.write(diachi, gocsv);
    delay(10);
    Serial.print(diachi);
    Serial.print(".");
    Serial.println(gocsv);
    diachi = diachi + 1;
  }
  if (diachi == EEPROM.length()) {
    diachi = 0;
  }
  if (digitalRead(play) == LOW) {
    playsv(sv, gocsv);
  }
}

void playsv(Servo sv, int gocsv) {
  for (int i = 0; i <= diachi; i++) {
    int val = EEPROM.read(i);
    Serial.print(val);
    Serial.print(".");
    Serial.println(i);
    sv.write(val);
    delay(10);
  }
}