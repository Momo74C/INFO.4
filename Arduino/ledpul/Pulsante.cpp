#include "Pulsante.h"
#include <Arduino.h>

using namespace std;

Pulsante::Pulsante(int pin)
{
    this->pin = pin;
    pinMode(pin, INPUT_PULLUP);
    tempoPremuto = 0;
}

bool Pulsante::press()
{
    return digitalRead(pin) == LOW;
}

bool Pulsante::longPress()
{
    if (press()) 
    {
        if (tempoPremuto == 0) 
        {
        tempoPremuto = millis();  // Registra il tempo iniziale
        }
        if (millis() - tempoPremuto >= 2000) 
        {
            return true;  // Se la pressione dura almeno 2 secondi
        }
    } 
    else 
    {
        tempoPremuto = 0;  // Resetta il tempo quando il pulsante viene rilasciato
    }
    return false;
}