const int tiltSensor = 2;//pin  sensor de inclinacion
const int buzzer = 9; //pin  buzzer
int bocina = 3;
void setup()
{
  /*pinMode(tiltSensor, INPUT);//entrada 
  pinMode(buzzer,OUTPUT);//salida
  Serial.begin(9600);*/
  pinMode(bocina, OUTPUT);
}

void loop()
{
  /*int estado = digitalRead(tiltSensor);
  Serial.println(estado);
  if (estado == HIGH){
    tone(buzzer,1000);//activa el buzzer si el sensor esta inclinado
  }else{
    noTone(buzzer);//apaga el buzzer si no hay una inclinacion
}
  tone(buzzer,HIGH);
  delay(1000);
  tone(buzzer,LOW);
  delay(1000);*/
  digitalWrite(bocina, HIGH);
  
  
}