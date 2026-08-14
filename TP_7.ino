#include <Adafruit_NeoPixel.h>

#define BUZZ 2
#define BTN 3
#define NEOPIN_1 13
#define NEOPIN_2 12
#define CANT_PIXEL 24

#define length(a,b) sizeof(a)/sizeof(b) 
//a = nombre vector b= tipo de dato 
// length(tres,int)

Adafruit_NeoPixel DADO1 = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN_1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel DADO2 = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN_2, NEO_GRB + NEO_KHZ800);

int uno[] = {6, 11, 12, 13, 14, 15, 16, 17, 23};
int dos[] = {0, 2, 3, 4, 5, 6, 8, 11, 12, 14, 17, 18, 19, 20, 23};
int tres[] = {0, 2, 5, 6, 8, 11, 12, 14, 17, 18, 19, 20, 21, 22, 23};
int cuatro[] = {0, 1, 2, 8, 14, 18, 19, 20, 21, 22, 23};
int cinco[] = {0, 1, 2, 5, 6, 8, 11, 12, 14, 17, 18, 20, 21, 22, 23};
int seis[] = {0, 1, 2, 3, 4, 5, 6, 8, 11, 12, 14, 17, 18, 20, 21, 22, 23};

int botonahora;
int botonantes = HIGH;
int num1;
int num2;

//asterisco es para copiar todo el vector en esta variable
int* pat1;
int* pat2;
int tam1;
int tam2;

void setup() {
  pinMode(BTN, INPUT_PULLUP);
  pinMode(BUZZ, OUTPUT);
  
  DADO1.begin();
  DADO1.clear();
  DADO1.show();
  
  DADO2.begin();
  DADO2.clear();
  DADO2.show();
  
  randomSeed(analogRead(A0));
}

void loop() {
  botonahora = digitalRead(BTN);
  
  if (botonantes == HIGH && botonahora == LOW) 
  {
    uint32_t color = DADO1.Color(255, 0, 0);
    
    
    //animacion
    
    for (int anim = 0; anim < 10; anim++) {
      int numanim1 = random(1, 7);
      int numanim2 = random(1, 7);
      
      if (numanim1 == 1) { pat1 = uno; tam1 = length(uno, int); }
      else if (numanim1 == 2) { pat1 = dos; tam1 = length(dos, int); }
      else if (numanim1 == 3) { pat1 = tres; tam1 = length(tres, int); }
      else if (numanim1 == 4) { pat1 = cuatro; tam1 = length(cuatro, int); }
      else if (numanim1 == 5) { pat1 = cinco; tam1 = length(cinco, int); }
      else if (numanim1 == 6) { pat1 = seis; tam1 = length(seis, int); }
      
      if (numanim2 == 1) { pat2 = uno; tam2 = length(uno, int); }
      else if (numanim2 == 2) { pat2 = dos; tam2 = length(dos, int); }
      else if (numanim2 == 3) { pat2 = tres; tam2 = length(tres, int); }
      else if (numanim2 == 4) { pat2 = cuatro; tam2 = length(cuatro, int); }
      else if (numanim2 == 5) { pat2 = cinco; tam2 = length(cinco, int); }
      else if (numanim2 == 6) { pat2 = seis; tam2 = length(seis, int); }
      
      DADO1.clear();
      for (int i = 0; i < tam1; i++) {
        DADO1.setPixelColor(pat1[i], color);
      }
      DADO1.show();
      
      DADO2.clear();
      for (int i = 0; i < tam2; i++) {
        DADO2.setPixelColor(pat2[i], color);
      }
      DADO2.show();
      
      delay(80);
    }
    
    //fin animacion
    
    
    num1 = random(1, 7);
    num2 = random(1, 7);
    
    if (num1 == 1) { pat1 = uno; tam1 = length(uno, int); }
    else if (num1 == 2) { pat1 = dos; tam1 = length(dos, int); }
    else if (num1 == 3) { pat1 = tres; tam1 = length(tres, int); }
    else if (num1 == 4) { pat1 = cuatro; tam1 = length(cuatro, int); }
    else if (num1 == 5) { pat1 = cinco; tam1 = length(cinco, int); }
    else if (num1 == 6) { pat1 = seis; tam1 = length(seis, int); }
    
    if (num2 == 1) { pat2 = uno; tam2 = length(uno, int); }
    else if (num2 == 2) { pat2 = dos; tam2 = length(dos, int); }
    else if (num2 == 3) { pat2 = tres; tam2 = length(tres, int); }
    else if (num2 == 4) { pat2 = cuatro; tam2 = length(cuatro, int); }
    else if (num2 == 5) { pat2 = cinco; tam2 = length(cinco, int); }
    else if (num2 == 6) { pat2 = seis; tam2 = length(seis, int); }
    
    DADO1.clear();
    for (int i = 0; i < tam1; i++) {
      DADO1.setPixelColor(pat1[i], color);
    }
    DADO1.show();
    
    DADO2.clear();
    for (int i = 0; i < tam2; i++) {
      DADO2.setPixelColor(pat2[i], color);
    }
    DADO2.show();
    
    if ((num1 + num2) == 7) {
      for (int r = 0; r < 5; r++) {
        uint32_t victoria = DADO1.Color(0, 255, 0);
        
        for (int i = 0; i < CANT_PIXEL; i++) {
          DADO1.setPixelColor(i, victoria);
          DADO2.setPixelColor(i, victoria);
        }
        DADO1.show();
        DADO2.show();
        
        digitalWrite(BUZZ, HIGH);
        delay(200);
        
        DADO1.clear();
        DADO2.clear();
        DADO1.show();
        DADO2.show();
        
        digitalWrite(BUZZ, LOW);
        delay(200);
      }
      
      for (int i = 0; i < tam1; i++) {
        DADO1.setPixelColor(pat1[i], color);
      }
      for (int i = 0; i < tam2; i++) {
        DADO2.setPixelColor(pat2[i], color);
      }
      DADO1.show();
      DADO2.show();
    }
  }
  
  botonantes = botonahora;
  delay(20);
}