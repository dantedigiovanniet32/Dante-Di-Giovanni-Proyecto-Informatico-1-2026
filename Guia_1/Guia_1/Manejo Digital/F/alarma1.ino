#define BOTON 2
#define BUZZER 3

void setup() {
  pinMode(BOTON, INPUT_PULLUP); 
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  if (digitalRead(BOTON) == LOW) {
    digitalWrite(BUZZER, HIGH);
    delay(500);
    digitalWrite(BUZZER, LOW);
    delay(500);
  } else {
    digitalWrite(BUZZER, LOW);
  }
}
