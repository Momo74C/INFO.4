#ifndef RETTANGOLO_H 
#define RETTANGOLO_H

class Rettangolo {
    
    private:

    double altezza;
    double base;

    public:

    Rettangolo(double altezza, double base);

    ~Rettangolo();

    double Perimetro();

    double Area();
        
    double Diagonale();
        
    void stampa();
};

#endif
