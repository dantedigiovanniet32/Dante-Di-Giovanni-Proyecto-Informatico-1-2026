#define led 2

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  int patron[] = {1, 0, 0, 1, 1, 0, 1, 1};
  int cantidad = sizeof(patron) / sizeof(patron[0]);

  for(int i = 0; i < cantidad; i++)
  {
    digitalWrite(led, patron[i]);
    delay(500);
  }
}
