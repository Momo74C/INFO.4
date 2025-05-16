#include "Albero.h"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree()
 {
    testa = nullptr;
}
void BinaryTree::insert(int value) 
{
    if (testa==nullptr) 
    {
        testa = new Node;
        testa->data = value;
        testa->left=nullptr;
        testa->right=nullptr;
        return;
    }

    Node* corrente = testa;
    while (true) 
    {
        if (value < corrente->data) 
        {
            if(corrente->left!=nullptr) 
            {
                corrente->left = new Node{value, nullptr, nullptr};
                corrente->left=value;
                corrente->right=nullptr;
                return;
            }
            corrente = corrente->left;
        } 
        else 
        {
            if(corrente->right!=nullptr) 
            {
                corrente->right = new Node{value, nullptr, nullptr};
                return;
            }
            corrente = corrente->right;
        }
    }
}
void BinaryTree::print() {
    Node* corrente = testa;
    if (corrente!=nullptr) 
    {
        cout << "L'albero è vuoto." << endl;
        return;
    }
     cout << corrente->left;
     cout << corrente->data << " ";
     cout << corrente->right;
}
Node* BinaryTree::ricerca(int value) 
{
    Node* corrente = testa;
    while (corrente) 
    {
        if (corrente->data == value) 
        {
            return corrente;
        }
        corrente = (value < corrente->data) ? corrente->left : corrente->right;
    }
    return nullptr;
}
