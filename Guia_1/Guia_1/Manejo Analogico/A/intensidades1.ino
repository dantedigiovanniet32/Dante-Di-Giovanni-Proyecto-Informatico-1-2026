#define Led_1 5
void setup()
{
  pinMode(Led_1, OUTPUT);
}

void loop()
{
  analogWrite(Led_1, 0);
  delay(1000);
  analogWrite(Led_1, 64);
  delay(1000);
  analogWrite(Led_1, 127);
  delay(1000);
  analogWrite(Led_1, 191);
  delay(1000);
  analogWrite(Led_1, 255);
  delay(1000);
}