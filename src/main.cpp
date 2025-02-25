#include <Arduino.h>

#define relePin 3
#define sensorLDR_pin A5


void setup() {
  
  pinMode(relePin, OUTPUT);
  pinMode(sensorLDR_pin, INPUT);
  Serial.begin(9600);
  Serial.println("Sistema iniciado");

}

void loop() {
  
  int valorDoSensor = analogRead(sensorLDR_pin);

    if (valorDoSensor > 500){
    digitalWrite(relePin, HIGH);
  }else{
    digitalWrite(relePin, LOW);
  }

  Serial.println(valorDoSensor);
  delay(1000);

}

