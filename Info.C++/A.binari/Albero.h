#ifndef ALBERO_H
#define ALBERO_H

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BinaryTree {
private:
    Node* testa; 

public:
    BinaryTree();
    void insert(int value);
    void print();
    Node* ricerca(int value);
};

#endif
