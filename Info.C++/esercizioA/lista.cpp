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
    nuovoNodo->next = testa; 
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
    nuovoNodo->next = nullptr; 

    if (testa == nullptr) 
    {
        testa = nuovoNodo;
        return;
    }
    
    Nodo* p = testa;
    while (p->next != nullptr) 
    {
        p = p->next;
    }
    p->next = nuovoNodo; // Colleghiamo il nuovo nodo alla fine
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
    
    if(testa->info == valore) 
    {
        Nodo* p = testa;
        testa = testa->next; 
        delete p; 
        return  0;
    }

    Nodo* p = testa;
    while (p->next != nullptr && p->next->dato != valore) 
    {
        p = p->next;
    }

    if (p->next == nullptr) // Se il valore non è stato trovato
    {
        return;
    }

    Nodo* nodoDaEliminare = p->next;
    p->next = nodoDaEliminare->next; // Saltiamo il nodo eliminato
    delete nodoDaEliminare;
}

/**
 * @brief Cerca un elemento nella lista.
 * @param valore Il valore da cercare.
 * @return true se il valore è presente, false altrimenti.
 */
bool Lista::cerca(int valore) 
{
    Nodo* p = testa;
    while (p != nullptr) 
    {
        if (p->dato == valore) // Se troviamo il valore, restituiamo true
        {
            return true;
        }
        p = p->next; 
    }
    return false; // Il valore non è stato trovato
}

/**
 * @brief Stampa tutti gli elementi della lista.
 */
void Lista::stampa() 
{
    Nodo* p = testa;
    while (p != nullptr) 
    {
        cout << p->dato << "\n";
        p = p->next;
    }
    cout << "NULL" << "\n"; // Indichiamo la fine della lista
}

/**
 * @brief Conta il numero di nodi nella lista.
 * @return Il numero totale di nodi nella lista.
 */
int Lista::contaNodi() 
{
    Nodo* p = testa;
    int cont = 0;

    while (p != nullptr) 
    {
        cont++; 
        p = p->next; 
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
        Nodo* p = corrente;
        while (p->next != nullptr) 
        {
            if (p->next->dato == corrente->dato) 
            {
                
                Nodo* nodoDaEliminare = p->next;
                p->next = nodoDaEliminare->next;
                delete nodoDaEliminare;
            } 
            else 
            {
                p = p->next; 
            }
        }
        corrente = corrente->next;
    }
}
