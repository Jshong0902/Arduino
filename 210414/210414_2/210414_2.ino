#define LED1 11
#define LED2 12
#define SW1 2
#define SW2 3



void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(SW1, INPUT_PULLUP);
  pinMode(SW2, INPUT_PULLUP);
}

void loop() {
  int user1, user2;
  user1 = digitalRead(SW1);
  user2 = digitalRead(SW2);

  if (user1 == LOW)
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    delay(2000);
  }
  else if (user2 == LOW)
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    delay(2000);
  }
  else
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }

}
