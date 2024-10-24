/*ELSHOURBGY MOHAMED 4H*/
#include <stdio.h>
#include <string.h>
int main() 
{
    FILE* file1 = fopen("../File/file.txt", "r");
    if (file1 == NULL) 
    {
        perror("Errore durante l'apertura del file");
    }
     
    int contR=1;
    int contP=1;
    int contC=0;

    int statoparola;
    int ca;
    while ((ca = fgetc(file1)) != EOF) 
    {
        if(ca != ' ' && ca != '\t' && ca != '\n')
        {
            contC++;
        }

        if(ca == '\n')
        {
            contR++;
        }

        if(ca != ' ' && ca != '\t' && ca != '\n' && statoparola == 0)
        {
            statoparola = 1;
            contP++;
        }
        else if(ca == ' ' || ca == '\t' || ca == '\n')
        {
            statoparola = 0;
        }
        
    }
    printf("il numero di caratterri e' %d\n", contC);
    printf("il numero di parole e' %d\n", contP);
    printf("il numero di righe e' %d\n", contR);
    


    fclose(file1);

    return 0;
}
