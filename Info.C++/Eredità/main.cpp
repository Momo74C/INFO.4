#include <iostream>
#include "Rettangolo.h"
#include "Equilatero.h"

using namespace std;

int main() {
    
    Equilatero E1(9,3,6,5)
    Rettangolo R1(5,7);

    cout << "[VALORI DEL QUADRILATERO]" << endl;
    cout << "-------------------------------------" << endl;
    E1.stampa();

    cout << "[VALORI DEL RETTANGOLO]" << endl;
    cout << "-------------------------------------" << endl;
    R1.stampa();

    return 0;
}
