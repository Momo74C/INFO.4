#ifndef RETTANGOLO_H 
#define RETTANGOLO_H
#include <string>

using namespace std;

class Rettangolo {
    
    private:

    double altezza;
    double base;
    string nome;
    string nome1;

    public:
    Rettangolo(double altezza, double base);
    ~Rettangolo();
    double Perimetro();
    double Area();
    double Diagonale();
    string name();
    string name1();
    void comp();
    void stampa();
};

#endif
