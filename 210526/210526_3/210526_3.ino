void setup() {
  Serial.begin(9600);
  char temp[20];
  char buffe[20];
  int i=123;
  float f=32.4;
  char c='A';
  char str[]="Hello";

  dtostrf(f, 4, 1, temp);
  sprintf(buffe, "%d, %s, %c, %s", i, temp, c, str);

  Serial.print(buffe);

}

void loop() {
  // put your main code here, to run repeatedly:

}
