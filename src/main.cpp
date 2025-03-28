// Author: Daniel Santos
// Projeto: Controle de Luminosidade com Arduino
// Adicionado: 2021-09-26
// Last update: 2021-09-26 
// Version: 0.1
// Description: Controle de Luminosidade com Arduino

// Bibliotecas
#include <Arduino.h>

// Definições dos pinos
#define relePin 3
#define sensorLDR_pin A5

// Configuração dos pinos
void setup() {
  
  // Configuração dos pinos
  pinMode(relePin, OUTPUT);
  pinMode(sensorLDR_pin, INPUT);
  Serial.begin(9600);
  Serial.println("Sistema iniciado");

}

// Loop principal
void loop() {
  
  // Leitura do sensor
  int valorDoSensor = analogRead(sensorLDR_pin);

  // Mapeamento do valor do sensor
  int valorMapeado = map(valorDoSensor, 0, 1023, 0, 255);

  // Controle do rele
  if (valorMapeado > 125){
    digitalWrite(relePin, HIGH);
  }else{
    digitalWrite(relePin, LOW);
  }

  // Exibição do valor do sensor
  Serial.print("Valor do sensor: ");
  Serial.print(valorDoSensor);
  Serial.print(" | Valor mapeado: ");
  Serial.println(valorMapeado);

  delay(1000);

}

