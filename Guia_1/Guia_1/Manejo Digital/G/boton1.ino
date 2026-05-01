#define BOTON 5
#define LED1 4
#define LED2 3
#define LED3 2

int contador = 0;

void setup() {
  pinMode(BOTON, INPUT_PULLUP);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  if (digitalRead(BOTON) == LOW) {
    contador++; 

    
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);

  
    if (contador == 1) digitalWrite(LED1, HIGH);
    if (contador == 2) digitalWrite(LED2, HIGH);
    if (contador == 3) {
      digitalWrite(LED3, HIGH);
      contador = 0;
    }

    delay(300);
  }
}