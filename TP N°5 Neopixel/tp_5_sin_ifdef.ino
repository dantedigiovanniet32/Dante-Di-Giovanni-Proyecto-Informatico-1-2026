#include <Adafruit_NeoPixel.h>

#define NEOPIN 10
#define CANT_PIXEL 12

Adafruit_NeoPixel RING = Adafruit_NeoPixel(CANT_PIXEL, NEOPIN, NEO_GRB + NEO_KHZ800);




int pix = 0;
int direccion = 1;
int efectoActivo = 1;



void setup()
{
  RING.begin();
  RING.clear();
  RING.show();
  randomSeed(analogRead(A0));
}


void loop()
{
  
  
  
  
 //1 Colores
  
  
  
  
  if (efectoActivo == 1) {
    RING.clear();
    
	if (pix == 0 || pix == 6) {
 	   RING.setPixelColor(pix, RING.Color(255, 0, 0));
	} else if (pix == 1 || pix == 7) {
	    RING.setPixelColor(pix, RING.Color(0, 255, 0));  
	} else if (pix == 2 || pix == 8) {
	    RING.setPixelColor(pix, RING.Color(0, 0, 255));
	} else if (pix == 3 || pix == 9) {
	    RING.setPixelColor(pix, RING.Color(255, 255, 0));
	} else if (pix == 4 || pix == 10) {
	    RING.setPixelColor(pix, RING.Color(255, 0, 255)); 
	} else if (pix == 5 || pix == 11) {
	    RING.setPixelColor(pix, RING.Color(0, 255, 255));
	}
    
    RING.show();
    delay(500);
    
    pix = pix + 1;
  
    if (pix == CANT_PIXEL) 
    { 
      pix = 0;      
      efectoActivo = 2;  
      
      delay(1000);      
    }
  }




  
  
//2 Barrido



  else if (efectoActivo == 2) 
  {
    
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
    
    if (pix == 0 && direccion == -1) { 
      RING.clear();
      RING.setPixelColor(0, RING.Color(255, 0, 0)); 
      RING.show();
      delay(150);
      
      direccion = 1;   
      efectoActivo = 3; 
      delay(1000);   
      
    }
  }
  


  
//3 Patron random

  
  else if (efectoActivo == 3) {
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

    
  efectoActivo = 1; 
  delay(1000); 
  }
  
}