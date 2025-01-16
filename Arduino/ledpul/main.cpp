#include "led.h"
#include "Pulsante.h"

using namespace std;

LED ledGreen(12);
LED ledBlue(13);
Pulsante pulsante(2);

void setup() {

}

void loop() 
{
    
  if(pulsante.press()) 
  {
    // premuto
    ledGreen.spegni();
    ledBlue.accendi();
  } 
  else 
  {
    // non premuto
    ledGreen.accendi();
    ledBlue.spegni();
  }
}