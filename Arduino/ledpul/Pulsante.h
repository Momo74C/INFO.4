#ifndef PULSANTE_H
#define PULSANTE_H

class Pulsante 
{
  private:
    int pin;

  public:
    Pulsante(int pin); 

    bool press();  
    
};

#endif