#define led1 2
#define led2 3

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  int uno[] = {1, 0, 0, 1, 1, 0, 1, 1};
  int dos[] = {0, 1, 0, 1, 0, 0, 1, 0};
  int cantidad = sizeof(uno) / sizeof(uno[0]);

  for(int i = 0; i < cantidad; i++)
  {
    digitalWrite(led1, uno[i]);
    digitalWrite(led2, dos[i]);
    delay(1000);
  }
}
