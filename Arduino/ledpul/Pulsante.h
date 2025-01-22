#ifndef PULSANTE_H
#define PULSANTE_H

class Pulsante 
{
  private:
    int pin;
    int tempoPremuto;

  public:
    Pulsante(int pin); 

    bool press();
    bool longPress();  
    
};

#endif