#ifndef RETTANGOLO_H 
#define RETTANGOLO_H
#include "Quadrilatero.h"

class Rettangolo : public Quadrilatero {
    
    private:
    colore;

    public:

    Rettangolo(double base,double altezza);
    double Perimetro();
    double Area();
    double Diagonale();
    double getcolore();
    void setcolore(double colore1);
    void stampa();
};

#endif
