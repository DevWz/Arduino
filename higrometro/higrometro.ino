
class Higrometro
{

  const int pin;
  
  public:

  int v;
  
  int getPin()
  {
    return pin;
  }

  Higrometro(int pin)
  {
    pin = pin;
  }
    
};

Higrometro higrometro(A0);

void setup() {
  
  Serial.begin(9600);
  
  pinMode(higrometro.getPin(), INPUT);
  
}

void loop() {

  higrometro.v = analogRead(higrometro.getPin());

  Serial.print("Porta analog: ");
  Serial.println(higrometro.v);

  // 0 to 400 = umido
  // 400 to 800 = moderado
  // 800 to 1024 = seco

  delay(1000);
  
}
