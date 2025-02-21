// C++ code
//
void setup()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  int lectura, temp;
  
  lectura = analogRead(A0);
  Serial.print("Lectura: ");
  Serial.print(lectura);
  
  Serial.print(", temperatura: ");
  temp = (lectura * (500.0 / 1023.0))-50.0;
  Serial.print(temp);
  Serial.println(",");

}