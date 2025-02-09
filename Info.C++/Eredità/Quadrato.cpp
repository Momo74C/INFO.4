#include "Quadrato.h"
#include "Rettangolo.h"
#include <iostream>
#include <cmath>

using namespace std;

Quadrato::Quadrato(double lato):Rettangolo(lato,lato,lato){

}

double Quadrato::Perimetro() {
    return (l1 * 4);
}

double Quadrato::Area() {
    return (l1 * l1);
}

double Quadrato::Diagonale() {
    return  l1 * sqrt(2);
}

void Quadrato::stampa() {
    cout << "Il valore del lato e': " << l1 << endl;
    cout << "Il valore del perimetro e': " << Perimetro() << endl;
    cout << "Il valore dell'area e': " << Area() << endl;
    cout << "Il valore della diagonale e': " << Diagonale() << endl;
}