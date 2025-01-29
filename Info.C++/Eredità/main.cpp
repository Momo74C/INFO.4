#include <iostream>
#include "Rettangolo.h"
#include "Equilatero.h"

using namespace std;

int main() {
    
    Rettangolo R1(5,7);

    cout << "[VALORI DEL PRIMO RETTANGOLO]" << endl;
    cout << "-------------------------------------" << endl;
    R1.stampa();

    return 0;
}
