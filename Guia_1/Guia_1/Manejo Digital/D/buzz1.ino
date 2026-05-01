#define Led_1 5
#define Led_2 6
#define Buzz 4
void setup()
{
    pinMode( 4 , OUTPUT );
    pinMode( 5 , OUTPUT );
    pinMode( 6 , OUTPUT );
}

void loop()
{
  digitalWrite( Led_1, HIGH );
    delay(300);
    digitalWrite( Led_1, LOW );
    digitalWrite( Led_2, HIGH );
    delay(300);
    digitalWrite( Led_2, LOW );
    digitalWrite( Buzz, 1 );
    
      
       
      
    
}