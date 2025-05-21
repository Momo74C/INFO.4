#ifndef ALBERO_H
#define ALBERO_H

struct Nodo {
    int data;
    Nodo* left;
    Nodo* right;
};

class BinaryTree {
private:
    Nodo* testa; 

public:
    BinaryTree();
    void inserimento(int value);
    void print();
    Nodo* ricerca(int value);
};

#endif
