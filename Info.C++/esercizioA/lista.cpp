//ELSHOURBGY MOHAMED 4H
#include "lista.h"
#include <iostream>
using namespace std;

/**
 * @brief Costruttore della classe Lista. Inizializza la lista vuota.
 */
Lista::Lista() 
{
    testa = nullptr;
}

/**
 * @brief Inserisce un elemento all'inizio della lista.
 * @param valore Il valore da inserire.
 */
void Lista::inserisciInTesta(int valore) 
{
    Nodo* nuovoNodo = new Nodo;
    nuovoNodo->dato = valore;
    nuovoNodo->prossimo = testa; 
    testa = nuovoNodo; 
}

/**
 * @brief Inserisce un elemento alla fine della lista.
 * @param valore Il valore da inserire.
 */
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
    temp->prossimo = nuovoNodo; // Colleghiamo il nuovo nodo alla fine
}

/**
 * @brief Rimuove un elemento dalla lista.
 * @param valore Il valore da eliminare.
 */
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

    Nodo* nodoDaEliminare = temp->prossimo;
    temp->prossimo = nodoDaEliminare->prossimo; // Saltiamo il nodo eliminato
    delete nodoDaEliminare;
}

/**
 * @brief Cerca un elemento nella lista.
 * @param valore Il valore da cercare.
 * @return true se il valore è presente, false altrimenti.
 */
bool Lista::cerca(int valore) 
{
    Nodo* temp = testa;
    while (temp != nullptr) 
    {
        if (temp->dato == valore) // Se troviamo il valore, restituiamo true
        {
            return true;
        }
        temp = temp->prossimo; 
    }
    return false; // Il valore non è stato trovato
}

/**
 * @brief Stampa tutti gli elementi della lista.
 */
void Lista::stampa() 
{
    Nodo* temp = testa;
    while (temp != nullptr) 
    {
        cout << temp->dato << "\n";
        temp = temp->prossimo;
    }
    cout << "NULL" << "\n"; // Indichiamo la fine della lista
}

/**
 * @brief Conta il numero di nodi nella lista.
 * @return Il numero totale di nodi nella lista.
 */
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

/**
 * @brief Rimuove tutti gli elementi duplicati dalla lista.
 */
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
            else 
            {
                temp = temp->prossimo; 
            }
        }
        corrente = corrente->prossimo;
    }
}
