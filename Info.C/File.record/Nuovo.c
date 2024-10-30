#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>   
#define N 4
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


    fclose(file);
    return 0;
}

void carica(Studente buffer[],FILE *file)
{
    while (feof(file))
    {
        for (int i = 0; i < N; i++)
        {
            fscanf("%s\n %s\n", buffer[i].cognome, buffer[i].nome);
        }
    }
    
    
}

/*void stampa(Studente buffer[],FILE *file)
{
    printf("I DATI SOMO\n");
    for (int i = 0; i < N; i++)
    {
		    formattaCogn(buffer);
		
        printf("\n**************************************************************\n");
        printf("Il nome e': \t\t%s\n", buffer[i].nome);
        printf("Il cognome e': \t\t%s\n", buffer[i].cognome);
        printf("Data di nascita: \t%d/%d/%d\n\n",
               buffer[i].dataNascita.giorno,
               buffer[i].dataNascita.mese,
               buffer[i].dataNascita.anno);

        for (int j = 0; j < N; j++)
        {
            printf("Il voto %d e': %d\n", j + 1, buffer[i].voti[j]);    //j+1 per iniziare con il voto 1 non con il voto 0.
        }
    }
}
