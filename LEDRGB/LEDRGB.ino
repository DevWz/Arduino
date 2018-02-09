
//
// LEDRGB
// Made by DevWz || Wellington Antonio Zaneze
//
// Tinkercad: https://www.tinkercad.com/things/0Jv3Fmd55JW-led-rbg/
//


// Declara pinos
int red = 0;
int blue = 1;
int green = 2;
int R, B, G;
int redPin = 9;
int bluePin = 10;
int greenPin = 11;

// A rotina de configuração é executada uma vez quando o reset é pressionado:
void setup()
{
    pinMode(redPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

// A rotina de loop é executada repetidamente para sempre:
void loop()
{
    R = analogRead(red);
    B = analogRead(blue);
    G = analogRead(green);
  
    analogWrite(redPin, R/4);
    analogWrite(bluePin, B/4);
    analogWrite(greenPin, G/4);
}