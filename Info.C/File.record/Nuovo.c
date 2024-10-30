#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>   
#define N 1
#define DIM_COGN 30


struct Studente
{
    char nome[30];
    char cognome[DIM_COGN];
    int voti[N];
} typedef Studente;

void carica(Studente buffer[],FILE *file);
void stampa(Studente buffer[],FILE *file); 

int main()
{
    int n;
    
    FILE* file = fopen("../File/Studenti.dat", "wb");
    Studente buffer[N];

    carica(buffer,file);

    fwrite(&buffer,sizeof(Studente),1,file);

    stampa(buffer,file);

    fclose(file);
    return 0;
}

void carica(Studente buffer[],FILE *file)
{
        for (int i = 0; i < N; i++)
        {
            scanf("%s %s", buffer[i].cognome, buffer[i].nome);
        }
}

 void stampa(Studente buffer[],FILE *file)
{
   fread(buffer, sizeof(Studente), N, file);  

    printf("\nContenuto del file binario:\n");
    for (int i = 0; i < N; i++) 
    {
        printf("Cognome: %s, Nome: %s\n", buffer[i].cognome, buffer[i].nome);
    }
} 
