#include "Albero.h"
#include <iostream>
using namespace std;

int main() 
{
    BinaryTree tree;

    
    tree.insert(5);
    tree.insert(2);
    tree.insert(8);

    cout << "Elementi in ordine: ";
    tree.print();


    if (tree.ricerca(3)) 
    {
        cout << "Valore trovato." << "\n";
    } 
    else 
    {
        cout << "Valore non trovato." << "\n";
    }

    return 0;
}
