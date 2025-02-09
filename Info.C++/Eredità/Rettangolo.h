#ifndef RETTANGOLO_H 
#define RETTANGOLO_H
#include "Quadrilatero.h"

class Rettangolo : public Quadrilatero {
    
    private:
    double colore;

    public:

    Rettangolo(double base = 7,double altezza = 17,double colore =0);
    double Perimetro();
    double Area();
    double Diagonale();
    double getcolore();
    void setcolore(double colore1);
    void metodo();
    void stampa();
};

#endif