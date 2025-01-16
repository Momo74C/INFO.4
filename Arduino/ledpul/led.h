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
    
};

#endif