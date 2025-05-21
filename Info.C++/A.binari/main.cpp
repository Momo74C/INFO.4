#include "Albero.h"
#include <iostream>
using namespace std;

int main() 
{
    BinaryTree tree;

    
    tree.inserimento(5);
    tree.inserimento(2);
    tree.inserimento(8);

    cout << "Elementi in ordine: ";
    tree.print();


    if (tree.ricerca(8)) 
    {
        cout << "Valore trovato." << "\n";
    } 
    else 
    {
        cout << "Valore non trovato." << "\n";
    }

    return 0;
}
