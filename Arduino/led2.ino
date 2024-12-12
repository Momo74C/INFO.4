// ELSHOURBGY MOHAMED 4H

class LED 
{
  private:
    int pin;

  public:
    LED(int pin) 
    {
      this->pin = pin;
      pinMode(pin, OUTPUT);
    }

    void accendi() 
    {
      digitalWrite(pin, HIGH);
    }

    void spegni() 
    {
      digitalWrite(pin, LOW);
    }
};

class Pulsante 
{
  private:
    int pin;

  public:
    Pulsante(int pin) 
    {
      this->pin = pin;
      pinMode(pin, INPUT_PULLUP);
    }

    bool press()  // restituisce true e false se è high allora il pulsante non è premuto invece se è low è premuto
    {
      return digitalRead(pin) == LOW;
    }
};

LED ledGreen(12);
LED ledBlue(13);
Pulsante pulsante(2);

void setup() {

}

void loop() 
{
    
  if (pulsante.press()) 
  {
    // Pulsante premuto
    ledGreen.spegni();
    ledBlue.accendi();
  } 
  else 
  {
    // Pulsante non premuto
    ledGreen.accendi();
    ledBlue.spegni();
  }
}