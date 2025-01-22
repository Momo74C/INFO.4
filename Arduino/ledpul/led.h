#ifndef LED_H
#define LED_H

class LED 
{
  private:
    int pin;

  public:
    LED(int pin);

    void accendi(); 

    void spegni(); 

    void lampeggio(int numero, int durata);

    void accendi(int durata);

    void spegni(int ritardo);
};

void test();

#endif