#include <Pila.h>
#include <iostream>

Pila::Pila() 
{
    s = NULL;
}


void Pila::inserisci(int valore) 
{
    Nodo* nuovoNodo = new Nodo();
    nuovoNodo->dato = valore;
    nuovoNodo->nodo = pnodo;
    pnodo = nuovoNodo;
}

void Pila::cancella() 
{
    if (pnodo != NULL) 
    {
        Nodo* nodoDaRimuovere = pnodo;
        pnodo = pnodo->nodo;
    } 
    else 
    {
        std::cout << "La pila è vuota.\n";
    }
}

int Pila::get()
{
    return 
}