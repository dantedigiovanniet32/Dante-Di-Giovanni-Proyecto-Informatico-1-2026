#define ROJO 10
#define AZUL 11
#define SIRENA 13

void setup() {
  pinMode(ROJO, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(SIRENA, OUTPUT);
}

void loop() {

  analogWrite(ROJO, 255);
  analogWrite(AZUL, 0);
  for (int i = 0; i < 50; i++) {
    digitalWrite(SIRENA, HIGH);
    delay(1); 
    digitalWrite(SIRENA, LOW);
    delay(1);
  }

  analogWrite(ROJO, 0);
  analogWrite(AZUL, 255);
  for (int i = 0; i < 30; i++) {
    digitalWrite(SIRENA, HIGH);
    delay(2);
    digitalWrite(SIRENA, LOW);
    delay(2);
  }
}
