#include "lista.h"
#include <iostream>
using namespace std;

int main() {
    Lista lista;

    lista.inserisciInTesta(7);
    lista.inserisciInTesta(6);
    lista.inserisciInTesta(5);

    lista.inserisciInCoda(8);
    lista.inserisciInCoda(9);

    lista.stampa();

    lista.cancella(7);
    lista.stampa();

    if(lista.cerca(7)) 
    {
        cout << "Elemento trovato nella lista." << endl;
    } 
    else 
    {
        cout << "Elemento non trovato." << endl;
    }

    return 0;
}
