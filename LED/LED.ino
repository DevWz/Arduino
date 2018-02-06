
//
// LED
// Made by DevWz || Wellington Antonio Zaneze
//
// Tinkercad: https://www.tinkercad.com/things/h14Xez7aT2K-led
//


/*
Utiliza um botão de pressão, conectado ao pino 2, para ligar e
desligar um LED conectado ao pino digital 13.
*/

// define os pinos
const int buttonPin = 2; // botão de pressão
const int ledPin = 13; // led

// Variável para leitura do estado do botão
int buttonState = 0;

// A rotina de configuração é executada uma vez quando o reset é pressionado:
void setup()
{
    pinMode(ledPin, OUTPUT); //Inicializa o pino do LED como saída (OUTPUT)
    pinMode(buttonPin, INPUT); // Inicializa o pin do botão como entrada (INPUT)
}

// A rotina de loop é executada repetidamente para sempre:
void loop()
{
    // Lê o estado do botão
	buttonState = digitalRead(buttonPin);
  
	// Verifica se o botão foi pressionado
	if (buttonState == HIGH)
    {
		digitalWrite(ledPin, HIGH); // Se pressionado, liga o LED
	}
	else
    {
		digitalWrite(ledPin, LOW); // Se não pressionado, desliga o LED
	}
}