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

    srand(time(NULL));

    int n;
    
    FILE* file = fopen("../File/Studenti.dat", "wb");
    Studente buffer[N];

    carica(buffer,file);

    stampa(buffer,file);

    fclose(file);
    return 0;
}

void carica(Studente buffer[],FILE *file)
{
        for (int i = 0; i < N; i++)
        {
            scanf("%s %s", buffer[i].cognome, buffer[i].nome);
            fwrite(&buffer,sizeof(Studente),1,file);
        }
}

 void stampa(Studente buffer[],FILE *file)
{
   int ca;
   //int i=0;
   fread(buffer, sizeof(Studente), N, file);  

    printf("\nContenuto del file binario:\n");     
    while((ca = fgetc(file)) != EOF)
    {   
        printf("%s", ca);
        //printf("Cognome: %s, Nome: %s\n", buffer[i].cognome, buffer[i].nome);
        //i++;
    }
} 
