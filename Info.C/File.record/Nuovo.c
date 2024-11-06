#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>

#define NUM_STUD 2
#define DIM_COGN 30
#define NUM_VOTI 5

struct Studente
{
    char nome[30];
    char cognome[DIM_COGN];
    int voti[NUM_VOTI];
} typedef Studente;

void carica(Studente buffer[],FILE *file);
void stampa(Studente buffer[],FILE *file); 
int riccognome(Studente buffer[], char x[]);

int main(int argc, char*argv[])
{

    srand(time(NULL));
    char y[30];
    
    FILE* file = fopen("../File/Studenti.dat", "wb");
    Studente buffer[NUM_STUD];

    carica(buffer,file);

    stampa(buffer,file);

    printf("Inserisci il cognome che vuoi cercare: \n");
    scanf("%s", y);  

    int ris = riccognome(buffer, y);



    fclose(file);
    return 0;
}

void carica(Studente buffer[],FILE *file)
{
    for (int i = 0; i < NUM_STUD; i++) {
        printf("Inserisci nome e cognome dello studente: ");
        scanf("%s %s", buffer[i].nome, buffer[i].cognome);

        // Genera casualmente i voti
        for (int j = 0; j < NUM_VOTI; j++) {
            buffer[i].voti[j] = rand() % 10 + 1;
            printf("Voto %d: %d\n", j + 1, buffer[i].voti[j]);
        }

        // Scrive i dati dello studente nel file
        fwrite(&buffer[i], sizeof(Studente), 1, file);
    }
}

 void stampa(Studente buffer[],FILE *file)
{
   int i=0;
    while(!feof(file) && i<NUM_STUD)
    {
        fread(buffer, sizeof(Studente),1, file);
        printf("\n************************************************************\n");
        printf(" Nome e cognome :     %s %s       \n", buffer[i].nome, buffer[i].cognome);
        printf(" Voti dell'alunno:    ");
        for (int j = 0; j < NUM_VOTI; j++) 
        {
            printf("%d ", buffer[i].voti[j]);
        }
        printf("\n************************************************************\n");
        i++;
    }
}

int riccognome(Studente buffer[], char x[])
{
    //sistemare buffer 
    int cont = 0;
    for (int i = 0; i < NUM_STUD; i++)
    {
        if(strcmp(buffer[i].cognome, x) == 0)
    }
}

