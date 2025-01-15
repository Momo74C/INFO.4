#include <iostream>
#include <cmath>
#include "Rettangolo.h"

using namespace std;

Rettangolo::Rettangolo(double altezza, double base) {
    this->altezza = altezza;
    this->base = base;
}

Rettangolo::~Rettangolo() {
    cout << "Distruttore chiamato" << endl;
}

double Rettangolo::Perimetro() {
    return (base + altezza) * 2;
}

double Rettangolo::Area() {
    return base * altezza;
}

double Rettangolo::Diagonale() {
    return sqrt(base * base + altezza * altezza);
}

void Rettangolo::stampa() {
    cout << "Il valore dell'altezza e': " << altezza << endl;
    cout << "Il valore della base e': " << base << endl;
    cout << "Il valore del perimetro e': " << Perimetro() << endl;
    cout << "Il valore della diagonale e': " << Diagonale() << endl;
    cout << "Il valore dell'area e': " << Area() << endl;
}
