#include <stdio.h>
#include <string.h>
int main() 
{
    FILE* file1 = fopen("file.txt", "r");
    if (file1 == NULL) 
    {
        perror("Errore durante l'apertura del file");
    }
     
    int contR=0;
    int contC=0;

    char riga[50]; 
    while (fgets(riga, sizeof(riga), file1) != NULL) 
    {
        for(int i=0;i<100 && i != ' ';i++)
        {   
            contC++;
        }
        contR++;
    }
    printf("il numero di caratterri e' %d\n", contC);
    printf("il numero di righe e' %d\n", contR);
    


    fclose(file1);

    return 0;
}
