#define Led_1 2
#define Led_2 3
#define Led_3 4
#define Led_4 5
#define Led_5 6
#define Led_6 7
#define Led_7 8
#define Led_8 9
#define Led_9 10
#define Led_10 11
void setup()
{
    pinMode( 2 , OUTPUT );
    pinMode( 3 , OUTPUT );
    pinMode( 4 , OUTPUT );
    pinMode( 5 , OUTPUT );
    pinMode( 6 , OUTPUT );
    pinMode( 7 , OUTPUT );
    pinMode( 8 , OUTPUT );
    pinMode( 9 , OUTPUT );
    pinMode( 10 , OUTPUT );
    pinMode( 11 , OUTPUT );
}

void loop()
{
  digitalWrite( Led_1, HIGH );
  digitalWrite( Led_3, HIGH );
  digitalWrite( Led_5, HIGH );
  digitalWrite( Led_7, HIGH );
  digitalWrite( Led_9, HIGH );
  delay(1000);
  digitalWrite( Led_1, LOW );
  digitalWrite( Led_3, LOW );
  digitalWrite( Led_5, LOW );
  digitalWrite( Led_7, LOW );
  digitalWrite( Led_9, LOW );
  
  digitalWrite( Led_2, HIGH );
  digitalWrite( Led_4, HIGH );
  digitalWrite( Led_6, HIGH );
  digitalWrite( Led_8, HIGH );
  digitalWrite( Led_10, HIGH );
  delay(1000);
  digitalWrite( Led_2, LOW );
  digitalWrite( Led_4, LOW );
  digitalWrite( Led_6, LOW );
  digitalWrite( Led_8, LOW );
  digitalWrite( Led_10, LOW );

}