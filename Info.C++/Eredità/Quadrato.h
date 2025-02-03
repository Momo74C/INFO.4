#ifndef QUADRATO_H
#define QUADRATO_H
#include "Quadrilatero.h"

class Quadrato : public Quadrilatero {
    private:

    public:

    Quadrato(double lato);
    double Perimetro();
    double Area();
    double Diagonale();
    void stampa();
};

#endif

