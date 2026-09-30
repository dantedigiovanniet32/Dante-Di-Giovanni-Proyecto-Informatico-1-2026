#define buzz 3

int numeros[10];
int cantidad = sizeof(numeros) / sizeof(numeros[0]);

void setup() 
{
  pinMode(buzz, OUTPUT);
  
  Serial.begin(9600);
  randomSeed(analogRead(A0)); 
}

void loop() 
{
  for(int i = 0; i < cantidad; i++)
  {
    numeros[i] = random(1, 11);
  }
  
  for(int i = 0; i < cantidad; i++) 
  {
    Serial.println(numeros[i]);
    
    if(numeros[i] == 5)
    {
      digitalWrite(buzz, HIGH);
    } 
    else 
    {
      digitalWrite(buzz, LOW);
    }

    delay(1000);
  }
}
