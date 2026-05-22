#define LED1 9
#define LED2_R 2
#define LED2_B 3
#define LED3_B 6
#define LED3_G 5
#define BUZZ 4

void setup()
{

  pinMode(LED2_R, OUTPUT);
  pinMode(LED2_B, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(BUZZ, OUTPUT);
  pinMode(LED3_B, OUTPUT);
  pinMode(LED3_G, OUTPUT);

}

void loop()
{
  
  analogWrite(LED1, 200);
  delay(1000);
  
  digitalWrite(BUZZ, HIGH);
  delay(100);
  digitalWrite(BUZZ, LOW);
  
  analogWrite(LED1, 0);
  digitalWrite(LED2_R, HIGH);
  digitalWrite(LED2_B, HIGH);
  delay(1000);
  
  digitalWrite(BUZZ, HIGH);
  delay(100);
  digitalWrite(BUZZ, LOW);
  
  digitalWrite(LED2_R, LOW);
  digitalWrite(LED2_B, LOW);
  analogWrite(LED3_B, 10);
  analogWrite(LED3_G, 10);
  delay(1000);
  
  digitalWrite(BUZZ, HIGH);
  delay(100);
  digitalWrite(BUZZ, LOW);
  
  analogWrite(LED3_B, 0); 
  analogWrite(LED3_G, 0); 
    
}