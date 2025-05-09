#include "Albero.h"
#include <iostream>
using namespace std;

int main() 
{
    BinaryTree tree;

    
    tree.insert(5);
    tree.insert(2);
    tree.insert(8);
    tree.insert(1);
    tree.insert(3);

    cout << "Elementi in ordine: ";
    tree.print();


    if (tree.search(3)) 
    {
        cout << "Valore trovato." << "\n";
    } 
    else 
    {
        cout << "Valore non trovato." << "\n";
    }

    return 0;
}
