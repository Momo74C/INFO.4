/*ELSHOURBGY MOHAMED 4H*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

#define N 1
#define NUM_VOTI 5

struct Studente
{
    char nome[30];
    char cognome[30];
    int voti[NUM_VOTI];
} typedef Studente;

void carica(FILE *file);
void stampa(FILE *file); 
int riccognome( FILE *file ,char x[]);
void StampaInfo(FILE *file);
void Coregge(FILE *file);

int main(int argc, char*argv[])
{

    srand(time(NULL));
    char y[30];
    
    FILE* file = fopen("../File/Studenti.dat", "wb");
    Studente buffer;

    carica(file);
    fclose(file);

    file = fopen("../File/Studenti.dat", "rb");
    stampa(file);
    fclose(file);

    file = fopen("../File/Studenti.dat", "rb");
    printf("Inserisci il cognome che vuoi cercare: \n");
    scanf("%s", y);  

    int ris = riccognome(file,y);
    printf("il numero di persone che hanno il cognome uguale a %s e' %d\n", y,ris);
    fclose(file);

    file = fopen("../File/Studenti.dat", "rb");
    StampaInfo(file);
    fclose(file);

    file = fopen("../File/Studenti.dat", "rb");
    Coregge(file);
    fclose(file);
    
    file = fopen("../File/Studenti.dat", "rb");
    StampaInfo(file);
    fclose(file);
    return 0;
}

void carica(FILE *file)
{
    Studente buffer;
    
    for (int i = 0; i < N; i++) 
    {
        printf("Inserisci nome : ");
        scanf("%s", buffer.nome);

        printf("inserisci cognome : ");
        scanf("%s", buffer.cognome);

        for (int j = 0; j < NUM_VOTI; j++) 
        {
            buffer.voti[j] = rand() % 10 + 1;
            printf("Voto %d: %d\n", j + 1, buffer.voti[j]);
        }

        fwrite(&buffer, sizeof(Studente), 1, file);
    }
}

 void stampa(FILE *file)
{
    Studente buffer;

    while (fread(&buffer, sizeof(Studente), 1, file) == 1)   
    {
        printf("\n************************************************************\n");
        printf("Nome : %s\n", buffer.nome);
        printf("Cognome : %s\n", buffer.cognome);
        printf("Voti dell'alunno: ");
        for (int j = 0; j < NUM_VOTI; j++) 
        {
            printf("%d ", buffer.voti[j]);
        }
        printf("\n************************************************************\n");
    }
}

int riccognome(FILE *file,char x[])
{
    Studente buffer;
    int cont = 0;
    while (fread(&buffer, sizeof(Studente), 1, file) == 1)
    {
        if(strcmp(buffer.cognome, x) == 0)
        {
            cont++;
        }
    }
    return cont;
}

void StampaInfo(FILE *file)
{
    Studente buffer;
    
    while (fread(&buffer, sizeof(Studente), 1, file) == 1) 
    {
        int max = 0, min = 10, somma = 0;
        
        for (int i = 0; i < NUM_VOTI; i++) 
        {
            somma += buffer.voti[i];
            if (buffer.voti[i] > max) 
            { 
                max = buffer.voti[i]; 
            }
            if (buffer.voti[i] < min) 
            { 
                min = buffer.voti[i]; 
            }
        }
        
        int media = somma / NUM_VOTI;
        printf("%s %s    ",buffer.nome, buffer.cognome);
        printf("Media: %d / Voto più alto: %d / Voto più basso: %d\n",media, max, min);
    }
}

void Coregge(FILE *file)
{
    fseek(file,0,SEEK_SET);
    
    Studente buffer;
    
    while (fread(&buffer, sizeof(Studente), 1, file) == 1)
    {
        for (int i = 0; i < NUM_VOTI; i++)
        {
            if(buffer.voti[i] < 4)
            {
                buffer.voti[i] = 4;
            }
            printf("Cognome : %s | voto : %d\n", buffer.cognome, buffer.voti[i]);
        }
        fwrite(&buffer, sizeof(Studente), 1, file);
    }
}



