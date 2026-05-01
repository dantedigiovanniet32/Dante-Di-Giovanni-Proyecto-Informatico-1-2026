int LEDS[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
int BTN = 12;
bool encendido = true; 
int pasoActual = 0;   

void setup() {
  for (int i = 0; i < 10; i++) 
  {
    pinMode(LEDS[i], OUTPUT);
  }
  
  pinMode(BTN, INPUT_PULLUP);
}

void loop() {
  
  if (digitalRead(BTN) == LOW) 
  {
    encendido = !encendido;
    delay(300);
  }

  if (encendido) 
  {
    digitalWrite(LEDS[pasoActual], HIGH);
    delay(200);
    digitalWrite(LEDS[pasoActual], LOW);
    
    pasoActual++;
    
    if (pasoActual >= 10) 
    {
      pasoActual = 0; 
    }
  }
}