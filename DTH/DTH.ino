
//
// Title
// Made by DevWz || Wellington Antonio Zaneze
//
// Tinkercad:
//


// Inclui bibliotecas
#include <dht.h>

// Declara pinos
#define dht A1 // Sensor ligado na porta Analogica A1

// Inicializa objetos
dht DHT;

// A rotina de configuração é executada uma vez quando o reset é pressionado:
void setup()
{
    Serial.begin(9600);
    // Aguarda 1 seg antes de acessar as informações do sensor
    delay(1000);
}

// A rotina de loop é executada repetidamente para sempre:
void loop()
{
    // Lê as informações do sensor
    DHT.read11(dht);

    Serial.print("Umidade = ");
    Serial.print(DHT.humidity);
    Serial.print(" %  ");
    
    Serial.print("Temperatura = ");
    Serial.print(DHT.temperature);
    Serial.println(" Celsius  ");

    // O ideal é a leitura a cada 2 seg
    delay(2000);
}