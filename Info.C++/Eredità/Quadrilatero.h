#ifndef QUADRILATERO_H
#define QUADRILATERO_H

class Quadrilatero {

    protected:

    double l1,l2,l3,l4;

    public:

    Quadrilatero(double l1,double l2,double l3,double l4);
    double Perimetro();
    double getlato();
    void setlato(double l1 = 24);
    void stampa();
};

#endif