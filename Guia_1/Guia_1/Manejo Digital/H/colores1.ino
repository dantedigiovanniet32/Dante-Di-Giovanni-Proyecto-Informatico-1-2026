#define ROJO 3
#define VERDE 6
#define AZUL 5
#define BOTON 13

int contador = 0; 
bool estadoBotonActual;
bool estadoBotonAnterior = LOW;

void setup() {
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(BOTON, INPUT);
}

void loop() {
  estadoBotonActual = digitalRead(BOTON);

  if (estadoBotonActual == HIGH && estadoBotonAnterior == LOW) {
    contador++;
    if (contador > 7) contador = 1; 
    delay(50);
  }
  
  estadoBotonAnterior = estadoBotonActual;

  if (contador == 1) {
    digitalWrite(ROJO, HIGH); digitalWrite(VERDE, LOW); digitalWrite(AZUL, LOW);
  } 
  else if (contador == 2) {
    digitalWrite(ROJO, LOW); digitalWrite(VERDE, HIGH); digitalWrite(AZUL, HIGH);
  } 
  else if (contador == 3) {
    digitalWrite(ROJO, LOW); digitalWrite(VERDE, HIGH); digitalWrite(AZUL, LOW);
  } 
  else if (contador == 4) {
    digitalWrite(ROJO, HIGH); digitalWrite(VERDE, LOW); digitalWrite(AZUL, HIGH);
  } 
  else if (contador == 5) {
    digitalWrite(ROJO, LOW); digitalWrite(VERDE, LOW); digitalWrite(AZUL, HIGH);
  } 
  else if (contador == 6) {
    digitalWrite(ROJO, HIGH); digitalWrite(VERDE, HIGH); digitalWrite(AZUL, HIGH);
  } 
  else if (contador == 7) {
    digitalWrite(ROJO, HIGH); digitalWrite(VERDE, HIGH); digitalWrite(AZUL, LOW);
  } 
  else {
    digitalWrite(ROJO, LOW); digitalWrite(VERDE, LOW); digitalWrite(AZUL, LOW);
  }
}

