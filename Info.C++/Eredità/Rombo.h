#ifndef ROMBO_H
#define ROMBO_H
#include "Rombo.h"

class Rombo : public Quadrilatero {
    
    private:

    public:

    Rombo(double base,double altezza);
    double Perimetro();
    double Area();
    double Diagonale();
    void stampa();
};

#endif