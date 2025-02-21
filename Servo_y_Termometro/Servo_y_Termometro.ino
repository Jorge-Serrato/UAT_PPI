// C++ code
//
#include<Servo.h>

int ledAzul = 3;
Servo panchito;

void setup()
{
  Serial.begin(9600);//Lo uso para poner un print en el monitor
  //Control del led
  pinMode(LED_BUILTIN, OUTPUT);//Para controlar un led no puesto
  pinMode(ledAzul, OUTPUT);
  
  //Senal de del servo
  panchito.attach(5);//donde saldra la señal para controal al servo
  panchito.write(0); // lo dejo en posicion inicial 0 "cero"
  delay(250);//le doy tiempo para que se posicione (un cuarto de segundo)
  
}

void loop()
{
  int pot;
  int pwm;
  
  //Contro del Led
  pot = analogRead(A0);// un valor entre 0 - 1023
  						// ADC de 10 bits
  Serial.print(pot);
  Serial.print(",");
  pwm = pot / 4;
  
  analogWrite(ledAzul, pwm);
  
  /*
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  */
  
  //Control de servo
  int pos, lectura, temperatura;
  pos = map(pot,0,1023,180,0); 
  panchito.write(pos);
  Serial.print(pos);
  Serial.print(",");
  
  //manejo del termometro
  lectura = analogRead(A1);
  temperatura = (lectura * (500.0 / 1023.0))-50.0;
  Serial.print(temperatura);
  Serial.print(",");
  Serial.println("");
  
}