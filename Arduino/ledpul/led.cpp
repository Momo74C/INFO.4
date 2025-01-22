#include "led.h"
#include <Arduino.h>

using namespace std;

LED::LED(int pin)
{
    this->pin = pin;
    pinMode(pin, OUTPUT);
}

void LED::accendi()
{
    digitalWrite(pin, HIGH);
}

void LED::spegni()
{
    digitalWrite(pin, LOW);
}

void LED::lampeggio(int numero, int durata) 
{
    for (int i = 0; i < numero; i++) 
    {
        accendi();
        delay(durata);
        spegni();
        delay(durata);
    }
}

void LED::accendi(int durata) 
{
    accendi();
    delay(durata);
    spegni();
}

void LED::spegni(int ritardo) 
{
    delay(ritardo);
    spegni();
}

void LED::test() 
{
  ledred.lampeggio(5, 3000); // Lampeggia 5 volte con intervalli di 500ms
  ledyellow.accendi(2000); // Accendi il LED per 2000ms
  ledGreen.accendi();
  ledblue.spegni(3000); // Spegni il LED dopo 3000ms
}
