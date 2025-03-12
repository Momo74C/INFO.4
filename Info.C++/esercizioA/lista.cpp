#include "lista.h"
#include <iostream>
using namespace std;

Lista::Lista() 
{
    testa = nullptr;
}

void Lista::inserisciInTesta(int valore) 
{
    Nodo* nuovoNodo = new Nodo;
    nuovoNodo->dato = valore;
    nuovoNodo->prossimo = testa;
    testa = nuovoNodo;
}

void Lista::inserisciInCoda(int valore) 
{
    Nodo* nuovoNodo = new Nodo;
    nuovoNodo->dato = valore;
    nuovoNodo->prossimo = nullptr;

    if (testa == nullptr) 
    {
        testa = nuovoNodo;
        return;
    }
    
    Nodo* temp = testa;
    while (temp->prossimo != nullptr)
    {
        temp = temp->prossimo;
    }
    temp->prossimo = nuovoNodo;
}

void Lista::cancella(int valore) 
{
    if (testa == nullptr) 
    {
        return;
    }
    if(testa->dato == valore) 
    {
        Nodo* temp = testa;
        testa = testa->prossimo;
        delete temp;
        return;
    }

    Nodo* temp = testa;
    while (temp->prossimo != nullptr && temp->prossimo->dato != valore) 
    {
        temp = temp->prossimo;
    }

    if (temp->prossimo == nullptr) // Se il valore non è stato trovato
    {
        return;
    }

    // Se temp->prossimo è il nodo da eliminare, lo rimuoviamo
    Nodo* nodoDaEliminare = temp->prossimo;
    temp->prossimo = nodoDaEliminare->prossimo;
    delete nodoDaEliminare;
}

bool Lista::cerca(int valore) 
{
    Nodo* temp = testa;
    while (temp != nullptr) 
    {
        if (temp->dato == valore)
            return true;
        temp = temp->prossimo;
    }
    return false;
}

void Lista::stampa() 
{
    Nodo* temp = testa;
    while (temp != nullptr) 
    {
        cout << temp->dato <<endl;
        temp = temp->prossimo;
    }
    cout << "NULL" << endl;
}

int Lista::contaNodi() 
{
    Nodo* temp = testa;
    int cont = 0;

    while (temp != nullptr) 
    {
        cont++; 
        temp = temp->prossimo; 
    }

    return cont;
}

void Lista::rimuoviDuplicati() 
{
    Nodo* corrente = testa;

    while (corrente != nullptr) 
    {
        Nodo* temp = corrente;
        while (temp->prossimo != nullptr) 
        {
            if (temp->prossimo->dato == corrente->dato) 
            {
                Nodo* nodoDaEliminare = temp->prossimo;
                temp->prossimo = nodoDaEliminare->prossimo;
                delete nodoDaEliminare;
            } 
            
        }
        
    }
}