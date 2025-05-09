#ifndef ALBERO_H
#define ALBERO_H

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BinaryTree {
private:
    Node* root; 

public:
    BinaryTree();
    //~BinaryTree();
    void insert(int value);
    void print();
    Node* search(int value);
};

#endif
