#define BTN 2
#define ROJO 6
#define VERDE 5 
#define AZUL 3
#define POT A5

int estadoBtn = 0;
int valorPot = 0;

void setup() 
{
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);
  pinMode(BTN, INPUT);
}

void loop() {
  estadoBtn = digitalRead(BTN);

  if (estadoBtn == HIGH) 
  {
    valorPot = analogRead(POT);


    
    if (valorPot <= 341) 
    {
      int r = map(valorPot, 0, 341, 255, 0);
      int v = map(valorPot, 0, 341, 0, 255);
      analogWrite(ROJO, r);
      analogWrite(VERDE, v);
      analogWrite(AZUL, 0);
    } 
    else if (valorPot > 341 && valorPot <= 682) 
    {
      int v = map(valorPot, 342, 682, 255, 0);
      int a = map(valorPot, 342, 682, 0, 255);
      analogWrite(ROJO, 0);
      analogWrite(VERDE, v);
      analogWrite(AZUL, a);
    } 
    else 
    {
      int a = map(valorPot, 683, 1023, 255, 0);
      int r = map(valorPot, 683, 1023, 0, 255);
      analogWrite(ROJO, r);
      analogWrite(VERDE, 0);
      analogWrite(AZUL, a);
    }
  } 
  else 
  {
    analogWrite(ROJO, 0);
    analogWrite(VERDE, 0);
    analogWrite(AZUL, 0);
  }
}
