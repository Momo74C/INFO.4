#include "Pila.h"
#include <iostream>

using namespace std;

int main() {
    Pila pila;

    pila.inserisci(7);
    pila.inserisci(22);
    pila.inserisci(32);

    pila.cancella();
    pila.cancella();
    pila.cancella();


    return 0;
}
