#ifndef PILA_H
#define PILA_H

struct Nodo {
    int dato;
    next* nodo;
};

class Pila 
{
    private: 
    s* pnodo;

    public:
    Pila();
    void inserisci(int valore);
    void cancella();
    int get();
    void set();


};

#endif


