/*ELSHOURBGY MOHAMED       4H      29/09/2024*/
//Scrivere e fare le funzioni richieste esercizio c
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>   
#define N 3
#define DIM_COGN 30

struct DataNascita
{
    int giorno;
    int mese;
    int anno;
} typedef DataNascita;

struct Studente
{
    char nome[30];
    char cognome[DIM_COGN];
    int voti[N];
    struct DataNascita dataNascita;
} typedef Studente;

void carica(struct Studente tab[]);
void stampa(struct Studente tab[]);
int riccognome(struct Studente tab[], char x[]);
int StampamediaEContaSufficienti(struct Studente tab[]);
int studenti10(struct Studente tab[]);
void formattaCogn(Studente t[]);

int main()
{
    Studente tab[N];
    char y[30];

    srand(time(NULL));

    carica(tab);
    stampa(tab);

    printf("Inserisci il cognome che vuoi cercare: \n");
    scanf("%s", y);  

    int ris = riccognome(tab, y);

    if (ris != -1)
    {
        printf("Cognome trovato alla posizione: %d\n", ris);
    }
    else
    {
        printf("Cognome non trovato.\n");
    }
    int stampa = StampamediaEContaSufficienti(tab);
    int r =  studenti10(tab);



    return 0;
}

void carica(Studente tab[])
{
    for (int i = 0; i < N; i++)
    {
        printf("Inserisci il nome: \n ");
        scanf("%s", tab[i].nome);

        printf("Inserisci il cognome: \n ");
        scanf("%s", tab[i].cognome);

        printf("Inserisci il giorno di nascita: \n ");
        scanf("%d", &tab[i].dataNascita.giorno);

        printf("Inserisci il mese di nascita: \n ");
        scanf("%d", &tab[i].dataNascita.mese);

        printf("Inserisci l'anno di nascita: \n ");
        scanf("%d", &tab[i].dataNascita.anno);

        for (int j = 0; j < N; j++)
        {
            tab[i].voti[j] = rand() % 10 + 1; 
        }
    }
}

void stampa(Studente tab[])
{
    for (int i = 0; i < N; i++)
    {
		    formattaCogn(tab);
		printf("I DATI SOMO\n");
        printf("\n**************************************************************\n");
        printf("Il nome e': \t\t%s\n", tab[i].nome);
        printf("Il cognome e': \t\t%s\n", tab[i].cognome);
        printf("Data di nascita: \t%d/%d/%d\n\n",
               tab[i].dataNascita.giorno,
               tab[i].dataNascita.mese,
               tab[i].dataNascita.anno)

        for (int j = 0; j < N; j++)
        {
            printf("Il voto %d e': %d\ns", j + 1, tab[i].voti[j]);    //j+1 per iniziare con il voto 1 non con il voto 0.
        }
    }
}

int riccognome(Studente tab[], char x[])
{
    for (int i = 0; i < N; i++)
    {
        if (strcmp(tab[i].cognome, x) == 0)
        {
            return i;
        }
    }
    return -1;
}
int StampamediaEContaSufficienti(Studente tab[])
{
    int cont = 0;
    for (int i = 0; i < N; i++)
    {
        int somma = 0;
        for (int j = 0; j < N; j++)
        {
            somma += tab[i].voti[j];
        }
        float media = (float)somma / N;
        printf("La media dei voti di %s %s e' : %.2f\n", tab[i].nome, tab[i].cognome, media);

        if (media >= 6)
        {
            cont++;
        }
    }
    printf("Numero di studenti con media maggiore o uguale a 6: %d\n", cont);
}
int studenti10(Studente tab[])
{
    int cont = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (tab[i].voti[j] == 10)
            {
                cont++;
                break;
            }
        }
    }
    printf("Numero di studenti con almeno un voto pari a 10 e' : %d\n", cont);
}
void formattaCogn(Studente tab[])
{
	for (int i = 0; i < N; i++)
    {
         if (tab[i].cognome[0] >= 'a' && tab[i].cognome[0] <= 'z')
        {
            tab[i].cognome[0] = tab[i].cognome[0] - 32 ;
        }
        for(int j=1;tab[i].cognome[j] != '\0';j++)
        {
        	if (tab[i].cognome[j] >= 'A' && tab[i].cognome[j] <= 'Z')
        	{
           	 	tab[i].cognome[j] = tab[i].cognome[j] + 32 ;
        	}
		}
	}
}
