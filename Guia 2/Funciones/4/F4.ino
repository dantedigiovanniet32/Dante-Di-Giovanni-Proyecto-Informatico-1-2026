#define led 2
#define pir 3

void encender_luz()
{
  if (digitalRead(pir) == HIGH)
  {
    digitalWrite(led, HIGH);
  }
}

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pir, INPUT);
}

void loop()
{
  encender_luz();
}
