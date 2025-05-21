#include "Albero.h"
#include <iostream>
using namespace std;

BinaryTree::BinaryTree()
{
    testa = nullptr;
}
void BinaryTree::inserimento(int value) 
{
    if(testa == nullptr) 
    {
        testa = new Nodo;
        testa->data = value;
        testa->left = nullptr;
        testa->right = nullptr;
        return;
    }

    Nodo* corrente = testa;
    while(true) 
    {
        if(value < corrente->data) 
        {
            if(corrente->left == nullptr) 
            {
                corrente->left = new Nodo;
                corrente->left->data = value;
                corrente->left->left = nullptr;
                corrente->left->right = nullptr;
                return;
            }
            corrente = corrente->left;
        } 
        else 
        {
            if(corrente->right == nullptr) 
            {
                corrente->right = new Nodo;
                corrente->right->data = value;
                corrente->right->left = nullptr;
                corrente->right->right = nullptr;
                return;
            }
            corrente = corrente->right;
        }
    }
}
void BinaryTree::print() {
    Nodo* corrente = testa;
    if(corrente == nullptr) 
    {
        cout << "L'albero è vuoto." << endl;
        return;
    }
     cout << corrente->left;
     cout << corrente->data << " ";
     cout << corrente->right;
}
Nodo* BinaryTree::ricerca(int value) 
{
    Nodo* corrente = testa;
    while(corrente != nullptr) 
    {
        if(corrente->data == value) 
        {
            return corrente;
        }
        corrente = (value < corrente->data) ? corrente->left : corrente->right;
    }
    return nullptr;
}
