#define led 2
#define boton 4

int secuencia[5] = {};

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(boton, INPUT_PULLUP);
}

void loop()
{
  for (int i = 0; i < 5; i++)
  {
    digitalWrite(led, HIGH);
    delay(1000);

    bool pulsado = LOW;
    while (digitalRead(boton) == LOW)
    {
      pulsado = HIGH;
    }

    secuencia[i] = pulsado;

    digitalWrite(led, LOW);
    delay(1000);
  }

  for (int i = 0; i < 5; i++)
  {
    Serial.println(secuencia[i]);
  }
  Serial.println("---");

  for (int i = 0; i < 5; i++)
  {
    secuencia[i] = 0;
  }
}
