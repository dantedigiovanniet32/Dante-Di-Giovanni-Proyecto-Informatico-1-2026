#define LED1 A0
#define LED2 A1
#define LED3 A2
#define LED4 A3
#define LED5 A4
#define LED6 A5

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);
}

void loop() {
  
  analogWrite(LED1, 0);    
  analogWrite(LED2, 51);  
  analogWrite(LED3, 102); 
  analogWrite(LED4, 153); 
  analogWrite(LED5, 204); 
  analogWrite(LED6, 255);
  
  delay(100); 
}
