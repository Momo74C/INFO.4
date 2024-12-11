//ELSHOURBGY MOHAMED 4H 

class LED 
{
  private:
    int pin;      
    int stato;   

  public:
    
    LED(int p) 
    {
      pin = p;
      stato = 0; // Inizialmente spento
      pinMode(pin, OUTPUT);
    }

    void accendi() 
    {
      digitalWrite(pin, HIGH);
      stato = 1;
    }

    void spegni() 
    {
      digitalWrite(pin, LOW);
      stato = 0;
    }

    void inverti() 
    {
      if (stato == 1) 
      {
        spegni();
      } 
      else 
      {
        accendi();
      }
    }

    void lampeggio(int nrLampeggi) 
    {
      for (int i = 0; i < nrLampeggi; i++) 
      {
        accendi();
        delay(500); 
        spegni();
        delay(500); 
      }
    }

    // Metodo per testare le funzionalità della classe LED
    void test(int numeroTest) 
    {
      for (int i = 0; i < numeroTest; i++) 
      {
        lampeggio(3); // Tre lampeggi per test
        delay(3000);
        accendi();
        delay(3000);
        inverti();
        delay(3000);
      }
    }
};

// Crea un oggetto LED sulla porta 11
LED led(11);

void setup() {

}

void loop() 
{
  led.test(1);  // Esegue il test del LED 1 volte
  delay(5000);  
}

