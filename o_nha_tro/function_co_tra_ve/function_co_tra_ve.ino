#include <String.h>
void setup() {
  Serial.begin(9600);
}

void loop() {
  dieukhien('4');
  Serial.println("chuoi");
}

String dieukhien(char c) {
  String chuoi = " ";
  switch (c) {
    case '1':
      chuoi = "chua tuoi";
      break;
    case '2':
      chuoi = "hoi kho";
      break;
    case '3':
      chuoi = "tuoi roi";
      break;
    case '4':
      chuoi = "qua uot";
      break;
      return chuoi;
  }
}