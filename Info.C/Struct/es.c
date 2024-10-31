#include <stdio.h>
#include <string.h>
#define N 2
struct DataNascita{
    int giorno;
    int mese;
    int anno;
}typedef DataNascita;
struct studente{
    char nome[30];
    char cognome[30];
    int voti[N];
    struct DataNascita dataNascita;
}typedef studente;


void carica(studente tab[]);
void stampa(studente tab[]);

int main()
{
    studente tab[N];

    carica(tab);
    stampa(tab);


}
void carica(studente tab[])
{
    for(int i=0;i<N;i++)
    {
        printf("inserisci il cognome e il nome\n");
        scanf("%s %s/n",tab[i].cognome, tab[i].nome);

        printf("inserisci la data di nascita: \t");
        scanf("%d%d%d",&tab[i].dataNascita.giorno,&tab[i].dataNascita.mese,&tab[i].dataNascita.anno);

        for(int j=0;j<N;j++)
        {
            printf("inserisci i voti\n");
            scanf("%d",&tab[i].voti[j]);
        }
    }

}

void stampa(studente tab[])
{
    for(int i=0;i<N;i++)
    {
        printf("il cognome e nome sono: %s%s\n",tab[i].cognome, tab[i].nome);

        printf("Data di nascita: %d/%d/%d\n",
            tab[i].dataNascita.giorno,
            tab[i].dataNascita.mese,
            tab[i].dataNascita.anno);

        for(int j=0;j<N;j++)
        {
            printf("i voti sono:%d\n",tab[i].voti[j]);
        }
    }
}
