class LED {
  private:
    int pin; // Pin del LED

  public:
    // Costruttore: imposta la modalità del pin del LED come output
    LED(int p) {
      pin = p;
      pinMode(pin, OUTPUT);
    }

    // Metodo per accendere il LED
    void accendi() {
      digitalWrite(pin, HIGH);
    }

    // Metodo per spegnere il LED
    void spegni() {
      digitalWrite(pin, LOW);
    }
};

// Crea un oggetto LED sulla porta 11
LED led(11);

void setup() {
  // Non c'è nulla da fare qui
}

void loop() {
  led.accendi();  // Accendi il LED
  delay(1000);    // Aspetta per un secondo
  led.spegni();   // Spegni il LED
  delay(1000);    // Aspetta per un secondo
}