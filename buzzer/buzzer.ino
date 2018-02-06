
//
// buzzer
// Made by DevWz || Wellington Antonio Zaneze
//
// Tinkercad:
//


// define pinos
const int buzzer = 7;

// A rotina de configuração é executada uma vez quando o reset é pressionado:
void setup()
{
    pinMode(buzzer, OUTPUT);
}

// A rotina de loop é executada repetidamente para sempre:
void loop()
{
    tone(buzzer, 1000);
    delay(1000); // Wait for 1000 millisecond(s)
    noTone(buzzer);
    delay(1000); // Wait for 1000 millisecond(s)
}