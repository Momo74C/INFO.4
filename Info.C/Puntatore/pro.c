#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void Carica(int v[]);
void Stampa(int v[]);
int *Max(int v[]);
int *Min(int v[]);

int main ()
{
    srand(time(NULL));
    int vet[N];

    Carica(vet);
    Stampa(vet);

    int *r = Max(vet);
    printf("L'indirizzo %d, indice %ld, valore %d\n", r, r-vet,*r);

    *r = Min(vet);
    printf("L'indirizzo %d, indice %ld, valore %d\n", r, r-vet,*r);
    
}

void Carica(int v[])
{
    int *p;
    printf("inserici i numeri\n");
    for(p=v;p-v<N;p++)
    {
        *p = rand () % 99 + 1;
    }
}

void Stampa(int v[])
{
    int *p;
    for(p=v;p-v<N;p++)
    {
        printf("Il numero e': %d\n", *p);
    }
}

int *Max(int v[]) 
{
    int *p_max = v;  
    int *p;

    for (p = v; p - v < N; p++) 
    {
        if (*p > *p_max) 
        {
            p_max = p;
        }
    }
    return p_max;
}

/**
 * @brief restituisce il puntatore 
 * all'elemento che contiene il valore minimo dell'array
 */
int *Min(int v[])
{
    int *p_min = v;  
    int *p;

    //scorro il puntatore per tutto l'array v
    for (p=v; p-v<N; p++) 
    {
        //se il valore puntato da p è 
        //il minore trovato fino ad adesso
        if (*p < *p_min) 
        {
            //Aggiorno l'indirizzo al valore minimo
            p_min = p;
        }
    }
    return p_min;
}

