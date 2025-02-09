#ifndef ROMBO_H
#define ROMBO_H
#include "Rombo.h"
#include "Quadrilatero.h"

class Rombo : public Quadrilatero {
    
    private:

    public:

    Rombo(double lato);
    double Perimetro();
    void stampa();
};

#endif