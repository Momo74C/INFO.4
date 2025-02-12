#include <stdio.h>
#define N 5

void Carica(int v[],int *p);
void Stampa(int v[],int *p);
int Max(int v[],int *p);

int main ()
{
    int vet[N];
    int *a;
    a = vet;

    Carica(vet,a);
    Stampa(vet,a);

    int r = Max(vet,a);
    printf("L'elemento massimo e' : %d\n", r);
}

void Carica(int v[],int *p)
{
    printf("inserici i numeri\n");
    for(p=v;p-v<N;p++)
    {
        scanf("%d", p);
    }
}

void Stampa(int v[],int *p)
{
    for(p=v;p-v<N;p++)
    {
        printf("Il numero e': %d\n", *p);
    }
}

int Max(int v[], int *p) 
{
    int *max = v;  
    int *ptr;  

    for (ptr = v; ptr - v < N; ptr++) 
    {
        if (*ptr > *max) 
        {
            max = ptr;
        }
    }

    *p = max - v;
    printf("L'indice del elemento massimo e' : %d\n", *p); 
    return *max;
}
