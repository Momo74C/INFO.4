#include "Rettangolo.h"
#include "Equilatero.h"
#include <iostream>

using namespace std;

Rettangolo::Rettangolo(int base,int altezza):Equilatero(base,altezza,base,altezza){

}

void Rettangolo::stampa() {
    cout << "Il valore della base e': " << l1 << endl;
    cout << "Il valore dell'altezza e': " << l2 << endl;
}
