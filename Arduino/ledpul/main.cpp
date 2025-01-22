#include "led.h"
#include "Pulsante.h"

using namespace std;

LED ledred(13);
LED ledyellow(11);
LED ledGreen(9);
LED ledblue(7);
Pulsante p1(12);
Pulsante p2(10);
Pulsante p3(8);
Pulsante p4(6);

void test() {
    ledred.lampeggio(5, 300);   
    ledyellow.accendi(2000);   
    ledGreen.accendi(5000);    
    ledblue.accendi(3000);      
}

void setup() {

  test();
}

void loop() 
{
  /*if (p1.press()) 
  {
    ledred.accendi();
  } 
  else 
  {
    ledred.spegni();
  }

  if(p2.press()) 
  {
    ledyellow.accendi();
  } 
  else 
  {
    ledyellow.spegni();
  }

  if(p3.press()) 
  {
    ledGreen.accendi();
  } 
  else 
  {
    ledGreen.spegni();
  }

  if(p4.press()) 
  {
    ledblue.accendi();
  } 
  else 
  {
    ledblue.spegni();
  }*/
}