#include "Frazione.h"
#include <iostream>
using namespace std;

int main() 
{
    Frazione F1;
    F1.stampa();

    F1.semplifica();
    F1.stamparis();
    cout<<endl;

    Frazione F2(14);
    F2.stampa();

    F2.semplifica();
    F2.stamparis();
    cout<<endl;

    Frazione F3(36,16);
    F3.stampa();

    F3.semplifica();
    F3.stamparis();
}