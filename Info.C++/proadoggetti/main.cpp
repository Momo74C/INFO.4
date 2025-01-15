#include <iostream>
#include "Rettangolo.h"

using namespace std;

int main() {
    double base, altezza;

    cout << "Inserisci il valore dell'altezza" << endl;
    cin >> altezza;

    cout << "Inserisci il valore della base" << endl;
    cin >> base;

    Rettangolo r1(altezza, base);

    cout << "[VALORI DEL PRIMO RETTANGOLO]" << endl;
    cout << "-------------------------------------" << endl;
    r1.~Rettangolo();
    r1.stampa();

    return 0;
}
