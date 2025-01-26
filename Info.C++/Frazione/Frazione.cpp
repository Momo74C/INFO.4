#include "Frazione.h"
#include <iostream>
using namespace std;

Frazione::Frazione(int num, int deno) 
{
    this ->num = num;
    this ->deno = deno;
}

void Frazione::semplifica() 
{
    int a = num;
    int b = deno;

    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    int mcd = a;
    num /= mcd;
    deno /= mcd;
}

void Frazione::stampa() 
{
    cout<<"numeratore : "<<num<<endl;
    cout<<"denominatore : "<<deno<<endl;
}

void Frazione::stamparis()
{
    cout << "Risultato : "<< num << "/" << deno <<endl;
}