#ifndef QUADRILATERO_H
#define QUADRILATERO_H

class Quadrilatero {

    protected:

    double l1,l2,l3,l4;

    public:

    Quadrilatero(double l1=5,double l2=12,double l3=3,double l4=21);
    ~Quadrilatero(); 
    double Perimetro();
    double getlato();
    void setlato(double l1 = 24);
    void metodo();
    void stampa();
};

#endif