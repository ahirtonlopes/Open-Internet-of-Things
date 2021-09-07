// Experimento 1 - Aula 2 - SENSOR DHT-11

// INCLUDE DE NOSSO SENSOR DHT-11

#include<dht.h>

dht DHT11;

#define DHT11_PIN 4

void setup() {

// ABRINDO NOSSA CONEXÃO SERIAL EM BANDA 9600

Serial.begin(9600);

Serial.println("DHT11");

}

// CRIANDO NOSSO LOOP DE LEITURA HUMIDADE/TEMPERATURA

void loop() {

int chk = DHT11.read11(DHT11_PIN);

Serial.print(" Humidade " );

Serial.print(DHT11.humidity, 1);

Serial.print(" ");

Serial.print(" Temperatura ");

Serial.println(DHT11.temperature, 1);

delay(2000);

}
