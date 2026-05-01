#define Led_Y 3
#define Led_G 2
#define Led_R 4

void setup()
{
  	pinMode( 4 , OUTPUT );
    pinMode( 3 , OUTPUT );
    pinMode( 2 , OUTPUT );
    
}

void loop()
{
	digitalWrite( Led_R, LOW );
  	
  	digitalWrite( Led_G, HIGH );
  	delay(950);
  	digitalWrite( Led_G, LOW );
    digitalWrite( Led_Y, HIGH );
    delay(600);
  	digitalWrite( Led_Y, LOW );
  	digitalWrite( Led_R, HIGH );
  	delay(900);
}