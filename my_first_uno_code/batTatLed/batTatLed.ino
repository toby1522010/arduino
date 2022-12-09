void setup() {
  // put your setup code here, to run once:
  pinMode (13, OUTPUT);
  Serial.begin(9600);//mở cổng giao tiếp giữa máy tính và arduino
}

void loop() {
  // put your main code here, to run repeatedly:
  char lenh = ' ';//khởi tạo biến với dữ liệu là character(kí tự) 
  lenh = Serial.read();
  if (lenh == 'A') {
    digitalWrite (13, HIGH);
  }
  if (lenh == 'a') {
    digitalWrite(13, LOW);
  }
  delay(500);
}
