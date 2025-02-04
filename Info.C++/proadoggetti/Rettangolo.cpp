#include <iostream>
#include <cmath>
#include "Rettangolo.h"

using namespace std;

Rettangolo::Rettangolo(double altezza, double base) {
    this->altezza = altezza;
    this->base = base;
}

Rettangolo::~Rettangolo() {
    cout << "\nDistruttore chiamato" << endl;
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

string Rettangolo::name() {
    return nome = "Mohamed";
}

string Rettangolo::name1() {
    return nome1 = "Mohamed";
}

void Rettangolo::comp() {
    if(nome == nome1)
    {
        cout << nome1;
    }
    else
    {
        cout << "i nomi non sono uguale";
    }
}

void Rettangolo::stampa() {
    cout << "Il valore dell'altezza e': " << altezza << endl;
    cout << "Il valore della base e': " << base << endl;
    cout << "Il valore del perimetro e': " << Perimetro() << endl;
    cout << "Il valore della diagonale e': " << Diagonale() << endl;
    cout << "Il valore dell'area e': " << Area() << endl;
    cout << "Il nome e' : " << name() << endl;
    cout << "Il secondo nome e' : " << name1() << endl;
    comp();
}
