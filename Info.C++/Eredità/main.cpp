#include <iostream>
#include "Rettangolo.h"
#include "Quadrilatero.h"
#include "Quadrato.h"
#include "Rombo.h"

using namespace std;

int main() {
    
    Quadrilatero Q1;
    Rettangolo R1,R2(5,7);
    Quadrato U1(7);
    Rombo M1(10);

    cout << "\n[VALORI DEL QUADRILATERO]" << endl;
    cout << "-------------------------------------" << endl;
    Q1.stampa();

    Q1.setlato(12);
    double r = Q1.getlato();
    cout << "\n il primo lato e'" << r << endl;

    Quadrilatero Q2(9,3,6,5); 
    cout << "\n[VALORI DEL QUADRILATERO SECONDO OGGETTO]" << endl;
    cout << "-------------------------------------" << endl;
    Q2.stampa();

    cout << "\n[VALORI DEL RETTANGOLO]" << endl;
    cout << "-------------------------------------" << endl;
    R1.stampa();
    R1.metodo();

    cout << "\n[VALORI DEL RETTANGOLO SECONDO OGGETTO]" << endl;
    cout << "-------------------------------------" << endl;
    R2.stampa();

    cout << "\n[VALORI DEL QUADRATO]" << endl;
    cout << "-------------------------------------" << endl;
    U1.stampa();

    cout << "\n[VALORI DEL ROMBO]" << endl;
    cout << "-------------------------------------" << endl;
    M1.stampa();

    cout << endl;

    return 0;
}
