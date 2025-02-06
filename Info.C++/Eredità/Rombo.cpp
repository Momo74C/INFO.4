#include "Rombo.h"
#include "Quadrilatero.h"
#include <iostream>
#include <cmath>

using namespace std;

Rombo::Rombo(double lato):Quadrilatero(lato,lato,lato,lato){

}

double Rombo::Perimetro() {
    return (l1 * 4);
}

double Rombo::Area() {
    return (l1 * l1) / 2;
}


void Rombo::stampa() {
    cout << "Il valore del lato e': " << l1 << endl;
    cout << "Il valore del perimetro e': " << Perimetro() << endl;
    cout << "Il valore dell'area e': " << Area() << endl;
}