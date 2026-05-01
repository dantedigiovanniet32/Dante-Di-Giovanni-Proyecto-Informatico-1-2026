#define RGB_G A1
#define RGB_B A2
#define RGB_R A3
void setup()
{
  pinMode(RGB_G, OUTPUT);
  pinMode(RGB_B, OUTPUT);
  pinMode(RGB_R, OUTPUT);
}

void loop()
{
  analogWrite(RGB_B, 255);
  analogWrite(RGB_G, 255);
  delay(1000);
  analogWrite(RGB_B, 0);
  analogWrite(RGB_R, 255);
  delay(1000);
  analogWrite(RGB_R, 0);
  analogWrite(RGB_G, 255);
  analogWrite(RGB_R, 255);
  delay(1000);
  analogWrite(RGB_G, 255);
  analogWrite(RGB_R, 255); 
  delay(1000);
  analogWrite(RGB_G, 0);
  analogWrite(RGB_R, 0); 
}