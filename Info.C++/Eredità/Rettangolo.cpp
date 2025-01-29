#include "Rettangolo.h"
#include "Equilatero.h"
#include <iostream>

using namespace std;

Rettangolo::Rettangolo(double base, double altezza):Equilatero(base,altezza,base,altezza);

void Rettangolo::stampa() {
    cout << "Il valore della base e': " << base << endl;
    cout << "Il valore dell'altezza e': " << altezza << endl;
}
