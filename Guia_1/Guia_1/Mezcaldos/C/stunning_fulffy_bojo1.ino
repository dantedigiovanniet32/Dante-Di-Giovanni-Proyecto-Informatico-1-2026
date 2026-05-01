int RGBR = 9;
int RGBG = 10;
int RGBB = 11;
int catodos[] = {3, 4, 5, 6, 7, 8, 12, 13, A1, A2}; 
int boton = 2;
int pot = A0;

void setup() {
  pinMode(RGBR, OUTPUT);
  pinMode(RGBG, OUTPUT);
  pinMode(RGBB, OUTPUT);
  for(int i=0; i<10; i++) {
    pinMode(catodos[i], OUTPUT);
    digitalWrite(catodos[i], HIGH); 
  }
  pinMode(boton, INPUT);
}

void loop() {
  if (digitalRead(boton) == HIGH) {
    for (int i = 0; i < 10; i++) {
      int vel = map(analogRead(pot), 0, 1023, 100, 800);
      definirColor(i); 
      
      digitalWrite(catodos[i], LOW); 
      delay(vel);
      digitalWrite(catodos[i], HIGH);
    }
  }
}

void definirColor(int paso) {
  if(paso == 0) { analogWrite(RGBR, 255); analogWrite(RGBG, 0);   analogWrite(RGBB, 0); }   
  if(paso == 1) { analogWrite(RGBR, 0);   analogWrite(RGBG, 255); analogWrite(RGBB, 0); }   
  if(paso == 2) { analogWrite(RGBR, 0);   analogWrite(RGBG, 0);   analogWrite(RGBB, 255); } 
  if(paso == 3) { analogWrite(RGBR, 255); analogWrite(RGBG, 255); analogWrite(RGBB, 0); }   
  if(paso == 4) { analogWrite(RGBR, 0);   analogWrite(RGBG, 255); analogWrite(RGBB, 255); } 
  if(paso == 5) { analogWrite(RGBR, 255); analogWrite(RGBG, 0);   analogWrite(RGBB, 255); } 
  if(paso == 6) { analogWrite(RGBR, 255); analogWrite(RGBG, 128); analogWrite(RGBB, 0); }   
  if(paso == 7) { analogWrite(RGBR, 128); analogWrite(RGBG, 0);   analogWrite(RGBB, 255); }
  if(paso == 8) { analogWrite(RGBR, 255); analogWrite(RGBG, 255); analogWrite(RGBB, 255); } 
  if(paso == 9) { analogWrite(RGBR, 100); analogWrite(RGBG, 100); analogWrite(RGBB, 255); } 
}
