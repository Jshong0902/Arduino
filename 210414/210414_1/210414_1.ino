#define LED 12
#define SW 2
#define LED1 11
#define SW1 3

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(SW, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(SW1, INPUT_PULLUP);
}

void loop() {
  int sw_in;
  sw_in = digitalRead(SW);
  if(sw_in == LOW)
  {
    digitalWrite(LED, HIGH);
    delay(2000);
  }
  else
    digitalWrite(LED, LOW);




 
}
