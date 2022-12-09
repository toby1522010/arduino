#include <EEPROM.h>

int diachi = 0;
int giatri = 45;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // 45(0)-46(1)-47(2)-48(3)-49(4)
for(int i = 0; i <= 5; i++){
  EEPROM.write(diachi,giatri);
  diachi = diachi + 1;
  giatri = giatri + 1;
}

delay(5000);

}
