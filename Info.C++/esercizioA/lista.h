#ifndef LISTA_H
#define LISTA_H

struct Nodo {
    int dato;
    Nodo* prossimo;
};

class Lista 
{
    private:
    Nodo* testa;

    public:
    Lista();

    void inserisciInTesta(int valore);
    void inserisciInCoda(int valore);
    void cancella(int valore);
    bool cerca(int valore);
    void stampa();
};

#endif
