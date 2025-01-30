#ifndef QUADRILATERO_H
#define QUADRILATERO_H

class Quadrilatero {
    
    protected:

    double l1,l2,l3,l4;

    public:

    Quadrilatero(double l1,double l2,double l3,double l4);
    double Perimetro();
    double Area();
    void stampa();
};

#endif