
//
// LCD + LM35
// Made by DevWz || Wellington Antonio Zaneze
//
// Tinkercad: https://www.tinkercad.com/things/79FHOii5F7v-lcd-lm35
//


// Inclui bibliotecas
#include <LiquidCrystal.h>

// Instância objetos
LiquidCrystal LCD(12, 11, 5, 4, 3, 2);

// Declara pinos utilizados
const int LM35 = 0;

// A rotina de configuração é executada uma vez quando o reset é pressionado:
void setup()
{
    // Inicializa LCD com 2 linhas e 16 colunas
    LCD.begin(16, 2);
}

// A rotina de loop é executada repetidamente para sempre:
void loop()
{
    LCD.clear();

    // Lê os dados do LM35
    float celsius = (float(analogRead(LM35)) * 5 * 100 / 1024);
    float fahrenheit = (celsius * 1.8 + 32);

    LCD.setCursor(0,0);
    LCD.print(celsius);
    LCD.print(" C");
  
    LCD.setCursor(0,1);
    LCD.print(fahrenheit);
    LCD.print(" F");
  
    delay(1000);
}