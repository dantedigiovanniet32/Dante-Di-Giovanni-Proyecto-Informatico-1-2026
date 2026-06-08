#include <Adafruit_NeoPixel.h>

#define NEOPIN 10
#define CANT_PIXEL 12


//Variables para usar cada funcion del neoled


#define uno
//#define dos
//#define tres



Adafruit_NeoPixel RING = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);

int pix = 0;
int direccion = 1;



void setup()
{
  pinMode(NEOPIN, OUTPUT);
  
  RING.begin();
  RING.clear();
  RING.show();
  
  randomSeed(analogRead(A0));
}



void loop()
{
  
  
//1 Colores
  
  #ifdef uno
  RING.clear();
  

  uint32_t rojo = RING.Color(255, 0, 0);
  uint32_t verde = RING.Color(0, 255, 0);
  uint32_t azul = RING.Color(0, 0, 255);
  uint32_t amarillo = RING.Color(255, 255, 0);
  uint32_t magenta = RING.Color(255, 0, 255);
  uint32_t cian = RING.Color(0, 255, 255);
  
  if (pix == 0 || pix == 6){
    RING.setPixelColor(pix, rojo);
  } else if (pix == 1 || pix == 7){
    RING.setPixelColor(pix, verde);
  } else if (pix == 2 || pix == 8){
    RING.setPixelColor(pix, azul);
  } else if (pix == 3 || pix == 9){
    RING.setPixelColor(pix, amarillo);
  } else if (pix == 4 || pix == 10){
    RING.setPixelColor(pix, magenta);
  } else if (pix == 5 || pix == 11){
    RING.setPixelColor(pix, cian);
  }
  RING.show();
  
  delay(500);
  RING.setPixelColor(pix, RING.Color(0, 0, 0));
  
  pix = pix+1;
  if (pix == CANT_PIXEL){
    pix = 0;
  }
  #endif
  
  

  
//2 Barrido
  #ifdef dos
  
  RING.clear();
  
  uint32_t color = RING.Color(255, 0, 0); 
  RING.setPixelColor(pix, color);        
  RING.show();
  delay(150);                     
  
 
  pix = pix + direccion;
  
  
 
  if (pix == CANT_PIXEL - 1) 
  {
    direccion = -1;
  }
  

  if (pix == 0) 
  {
    direccion = 1;
  }
  #endif
  
  
 
  
  //3 patron random
  
#ifdef tres
  

  uint32_t color1 = RING.Color(random(256), random(256), random(256));
  
  RING.clear();
  
  RING.setPixelColor(0, color1);  
  RING.setPixelColor(2, color1);  
  RING.setPixelColor(4, color1);
  RING.setPixelColor(6, color1);  
  RING.setPixelColor(8, color1);  
  RING.setPixelColor(10, color1);
  RING.show();
  
  delay(500);
  
  RING.clear(); 
  RING.show(); 
  delay(500);


  
  uint32_t color2 = RING.Color(random(256), random(256), random(256));
  
  RING.setPixelColor(1, color2);  
  RING.setPixelColor(3, color2);  
  RING.setPixelColor(5, color2);
  RING.setPixelColor(7, color2);  
  RING.setPixelColor(9, color2);  
  RING.setPixelColor(11, color2);
  RING.show();
  delay(500);

  
  RING.clear(); 
  RING.show(); 
  delay(500);
  
  #endif
  

  
}