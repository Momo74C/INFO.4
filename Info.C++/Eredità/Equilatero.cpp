#include "Equilatero.h"
#include <iostream>

using namespace std;

Equilatero::Equilatero(int l1,int l2,int l3,int l4)
{
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->l4 = l4;
}

int Equilatero::Perimetro()
{
    return l1 + l2 + l3 + l4;
}

void Equilatero::stampa() {
    cout << "Primo lato: " << l1 << endl;
    cout << "Secondo lato: " << l2 << endl;
    cout << "Terzo lato: " << l3 << endl;
    cout << "Quattro lato: " << l4 << endl;
    cout << "Il valore del perimetro e': " << Perimetro() << endl;
}