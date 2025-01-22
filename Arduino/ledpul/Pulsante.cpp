#include "Pulsante.h"
#include <Arduino.h>

using namespace std;

Pulsante::Pulsante(int pin)
{
    this->pin = pin;
    pinMode(pin, INPUT_PULLUP);
}

bool Pulsante::press()
{
    return digitalRead(pin) == LOW;
}
