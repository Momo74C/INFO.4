#include "Quadrilatero.h"
#include <iostream>
#include <cmath>

using namespace std;

Quadrilatero::Quadrilatero(double l1,double l2,double l3,double l4)
{
    this->l1 = l1;
    this->l2 = l2;
    this->l3 = l3;
    this->l4 = l4;
}

Quadrilatero::~Quadrilatero()
{
    cout << "Hai chiamato il distruttore" << endl;
}

double Quadrilatero::Perimetro()
{
    return l1 + l2 + l3 + l4;
}

//Ho provato i metodi get e set con solo il primo lato.
 
void Quadrilatero::setlato(double l1)
{
    this->l1 = l1;
}

double Quadrilatero::getlato()
{
    return l1;
}

void Quadrilatero::metodo()
{
    cout << "Metodo della SuperClasse" << endl;
}

void Quadrilatero::stampa() {
    cout << "Primo lato: " << l1 << endl;
    cout << "Secondo lato: " << l2 << endl;
    cout << "Terzo lato: " << l3 << endl;
    cout << "Quattro lato: " << l4 << endl;
    cout << "Il valore del perimetro e': " << Perimetro() << endl;
}