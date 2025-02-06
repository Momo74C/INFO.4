#include <iostream>
#include "Rettangolo.h"
#include "Quadrilatero.h"
#include "Quadrato.h"

using namespace std;

int main() {
    
    Quadrilatero E1(9,3,6,5);
    Rettangolo R1(5,7);
    Quadrato U1(7);

    cout << "\n[VALORI DEL QUADRILATERO]" << endl;
    cout << "-------------------------------------" << endl;
    E1.stampa();

    E1.setlato(12);
    double r = E1.getlato();
    cout << "\n il primo lato e'" << r << endl; 


    cout << "\n[VALORI DEL RETTANGOLO]" << endl;
    cout << "-------------------------------------" << endl;
    R1.stampa();

    cout << "\n[VALORI DEL QUADRATO]" << endl;
    cout << "-------------------------------------" << endl;
    U1.stampa();

    cout << endl;

    return 0;
}
