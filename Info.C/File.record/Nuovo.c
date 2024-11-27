/*ELSHOURBGY MOHAMED 4H*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

#define N 3
#define NUM_VOTI 5

struct Studente
{
    char nome[30];
    char cognome[30];
    int voti[NUM_VOTI];
} typedef Studente;

void carica(char filename[]);
void stampa(char filename[]); 
int riccognome( char filename[] ,char x[]);
void StampaInfo(char filename[]);
void Coregge(char filename[]);

int main(int argc, char*argv[])
{
    Studente buffer;
    srand(time(NULL));
    char y[30];

    char name[30];
    printf("inserssci il nme del file\n");
    scanf("%s",  name);
      
    carica(name);

    stampa(name);

    printf("Inserisci il cognome che vuoi cercare: \n");
    scanf("%s", y);  

    int ris = riccognome(name,y);
    printf("il numero di persone che hanno il cognome uguale a %s e' %d\n", y,ris);

    StampaInfo(name);

    Coregge(name);
    
    StampaInfo(name);

    return 0;
}

void carica(char filename[])
{
    Studente buffer[N];
    FILE* file = fopen(filename, "wb");
    for (int i = 0; i < N; i++) 
    {
        printf("Inserisci nome : ");
        scanf("%s", buffer[i].nome);

        printf("inserisci cognome : ");
        scanf("%s", buffer[i].cognome);

        for (int j = 0; j < NUM_VOTI; j++) 
        {
            buffer[i].voti[j] = rand() % 10 + 1;
            printf("Voto %d: %d\n", j + 1, buffer[i].voti[j]);
        }

        //fwrite(&buffer, sizeof(Studente), N, file); questa va messa fuori dal ciclo se usi array di record
   }
    fclose(file);
}

 void stampa(char filename[])
{
    Studente buffer;
    FILE* file = fopen(filename, "rb");

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
    fclose(file);
}

int riccognome(char filename[],char x[])
{
    Studente buffer;
    FILE* file = fopen(filename, "rb");

    int cont = 0;
    while (fread(&buffer, sizeof(Studente), 1, file) == 1)
    {
        if(strcmp(buffer.cognome, x) == 0)
        {
            cont++;
        }
    }
    return cont;
    fclose(file);
}

void StampaInfo(char filename[])
{
    Studente buffer;
    FILE* file = fopen(filename, "rb");

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
    fclose(file);
}

void Coregge(char filename[])
{    
    Studente buffer;
    FILE* file = fopen(filename, "rb+");
    
    while (fread(&buffer, sizeof(Studente), 1, file) == 1)
    {
        int flag=0;
        for (int i = 0; i < NUM_VOTI; i++)
        { 
            if(buffer.voti[i] < 4)
            {
                buffer.voti[i] = 4;
                flag=1;

            }
            printf("Cognome : %s | voto : %d\n", buffer.cognome, buffer.voti[i]);
        }
        if(flag==1)
        {      
            fseek(file, -sizeof(Studente), SEEK_CUR);
            fwrite(&buffer, sizeof(Studente), 1, file);
        }
    }
    fclose(file);
}