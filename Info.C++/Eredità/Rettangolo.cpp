#include "Rettangolo.h"
#include "Quadrilatero.h"
#include <iostream>
#include <cmath>

using namespace std;

Rettangolo::Rettangolo(double base,double altezza,double colore):Quadrilatero(base,altezza,base,altezza){
    this->colore = colore;
}

double Rettangolo::Perimetro() {
    return (l1 + l2) * 2;
}

double Rettangolo::Area() {
    return l1 * l2;
}

double Rettangolo::Diagonale() {
    return sqrt(l3 * l3 + l4 * l4);
}

void Rettangolo::metodo()
{
    Quadrilatero::metodo();
}

void Rettangolo::stampa() {
    cout << "Il valore della base e': " << l1 << endl;
    cout << "Il valore dell'altezza e': " << l2 << endl;
    cout << "Il valore del perimetro e': " << Perimetro() << endl;
    cout << "Il valore dell'area e': " << Area() << endl;
    cout << "Il valore della diagonale e': " << Diagonale() << endl;
}
