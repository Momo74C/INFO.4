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

void Rombo::stampa() {
    cout << "Il valore del lato e': " << l1 << endl;
    cout << "Il valore del perimetro e': " << Perimetro() << endl;
}