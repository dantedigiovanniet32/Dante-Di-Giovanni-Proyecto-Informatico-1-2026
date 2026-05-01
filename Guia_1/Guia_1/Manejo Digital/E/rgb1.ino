#define LED_1R 5
#define LED_1B 6
#define LED_1G 7
#define LED_2R 8
#define LED_2B 9
#define LED_2G 10

void setup()
{
  pinMode( 5, OUTPUT);
  pinMode( 6, OUTPUT);
  pinMode( 7, OUTPUT);
  pinMode( 8, OUTPUT);
  pinMode( 9, OUTPUT);
  pinMode( 10, OUTPUT);
  
}

void loop()
{
  digitalWrite( LED_1R, HIGH );
  delay(1000);
  digitalWrite( LED_1R, LOW );
  digitalWrite( LED_1B, HIGH );
  digitalWrite( LED_1G, HIGH );
  delay(1000);
  digitalWrite( LED_1B, LOW );
  digitalWrite( LED_1G, LOW );
  digitalWrite( LED_1G, HIGH );
  delay(1000);
  digitalWrite( LED_1G, LOW );
  digitalWrite( LED_1R, HIGH );
  digitalWrite( LED_1B, HIGH );
  delay(1000);
  digitalWrite( LED_1R, LOW );
  delay(1000);
  digitalWrite( LED_1R, HIGH );
  digitalWrite( LED_1G, HIGH );
  delay(1000);
  digitalWrite( LED_1B, LOW );
  delay(1000);
  digitalWrite( LED_1G, LOW );
  digitalWrite( LED_1R, LOW );
  
  digitalWrite( LED_2R, HIGH );
  delay(1000);
  digitalWrite( LED_2R, LOW );
  digitalWrite( LED_2B, HIGH );
  digitalWrite( LED_2G, HIGH );
  delay(1000);
  digitalWrite( LED_2B, LOW );
  digitalWrite( LED_2G, LOW );
  digitalWrite( LED_2G, HIGH );
  delay(1000);
  digitalWrite( LED_2G, LOW );
  digitalWrite( LED_2R, HIGH );
  digitalWrite( LED_2B, HIGH );
  delay(1000);
  digitalWrite( LED_2R, LOW );
  delay(1000);
  digitalWrite( LED_2R, HIGH );
  digitalWrite( LED_2G, HIGH );
  delay(1000);
  digitalWrite( LED_2B, LOW );
  delay(1000);
  digitalWrite( LED_2G, LOW );
  digitalWrite( LED_2R, LOW );
  
  
  
  
  
    
    
  
    
}