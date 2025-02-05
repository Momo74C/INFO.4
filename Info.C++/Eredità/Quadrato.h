#ifndef QUADRATO_H
#define QUADRATO_H
#include "Rettangolo.h"

class Quadrato : public Rettangolo {
    private:

    public:

    Quadrato(double lato);
    double Perimetro();
    double Area();
    double Diagonale();
    void stampa();
};

#endif

