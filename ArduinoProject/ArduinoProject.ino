#include <SoftwareSerial.h>

#define fanpin1 7
#define fanpin2 8
#define BTtx 2
#define BTrx 3
SoftwareSerial BT(BTtx, BTrx);

char data = 0;

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(fanpin1, OUTPUT);
  pinMode(fanpin2, OUTPUT);
}

void loop() {
  if (BT.available() > 0)
  {
    data = BT.read();
  }
  if (data == 'a')
  {
    digitalWrite(fanpin1, 0);
    digitalWrite(fanpin2, 1);
  }
  if (data == 'd')
  {
    digitalWrite(fanpin1, 0);
    digitalWrite(fanpin2, 0);
  }
}
