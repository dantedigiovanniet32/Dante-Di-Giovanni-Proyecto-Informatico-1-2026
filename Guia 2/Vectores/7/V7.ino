#define led1 1
#define led2 2
#define led3 3
#define led4 4
#define led5 5

int pines[] = {led1, led2, led3, led4, led5};
int cantidad = sizeof(pines) / sizeof(pines[0]);

void setup()
{
  for (int i = 0; i < cantidad; i++)
  {
    pinMode(pines[i], OUTPUT);
  }
}

void loop()
{
  for (int i = 0; i < cantidad; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      digitalWrite(pines[j], HIGH);
    }

    delay(500);

    for (int j = 0; j < cantidad; j++)
    {
      digitalWrite(pines[j], LOW);
    }

    delay(500);
  }
}
