/*ELSHOURBGY MOHAMED  4H  22/09/2024 */

/*Consegna : Scrivere un programma C che definisca la struttura “persona” composta da nome, cognome, indirizzo, provincia e data di nascita.
Si richieda all’utente di inserire tutti i dati e si stampino a video.
Suggerimento: definire apposite strutture anche per l'indirizzo e la data di nascita. */

#include <stdio.h>

//Definizione dei vari strutture.
struct DataNascita
{
    int giorno;
    int mese;
    int anno;
};

struct Indirizzo
{
    char via[80];
    int numeroCivico;
    char citta[50];
    char provincia[3];
};

struct Persona
{
    char nome[50];
    char cognome[30];
    struct Indirizzo indirizzo;           //qua ho creato delle variabili di tipo Indrizzo e DataNascita dentro la struttura Persona,
    struct DataNascita dataNascita;       //alposto di crearli nel int main per risparmiare spazio nella memoria.
};

int main()
{
     //Creazione della variabile di tipo persona R(record).
    struct Persona R;


    printf("Inserisci il nome: \n ");
    scanf("%s", &R.nome);

    printf("Inserisci il cognome: \n ");
    scanf("%s", &R.cognome);

    printf("Inserisci la via: \n ");
    scanf("%s", &R.indirizzo.via);

    printf("Inserisci il numero civico: \n ");
    scanf("%d", &R.indirizzo.numeroCivico);

    printf("Inserisci la città: \n ");
    scanf("%s", &R.indirizzo.citta);

    printf("Inserisci la provincia: \n ");
    scanf("%s", &R.indirizzo.provincia);

    printf("Inserisci il giorno di nascita: \n ");
    scanf("%d", &R.dataNascita.giorno);

    printf("Inserisci il mese di nascita: \n ");
    scanf("%d", &R.dataNascita.mese);

    printf("Inserisci l'anno di nascita: \n ");
    scanf("%d", &R.dataNascita.anno);


    printf("\nDati inseriti:\n");
    printf("Nome: %s\n", R.nome);
    printf("Cognome: %s\n", R.cognome);
    printf("Indirizzo: Via %s, %d, %s (Provincia: %s)\n",
            R.indirizzo.via,
            R.indirizzo.numeroCivico,
            R.indirizzo.citta,
            R.indirizzo.provincia);
    printf("Data di nascita: %d/%d/%d\n",
            R.dataNascita.giorno,
            R.dataNascita.mese,
            R.dataNascita.anno);

    return 0;
}