// C++ code
//
int ledAzul = 3;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ledAzul, OUTPUT);
}

void loop()
{
  int pot;
  int pwm;
  pot = analogRead(A0);
  pwm = pot / 4;
  
  analogWrite(ledAzul, pwm);
  
  /*
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  */
}