#include <stdio.h>
#include <string.h>
int main() 
{
    FILE* file1 = fopen("file.txt", "r");
    FILE* file2 = fopen("momo.txt", "w");
    if (file1 == NULL || file2 == NULL) 
    {
        perror("Errore durante l'apertura del file");
    }

     
    int contR=0;
    int contC=0;

    char riga[100]; 
    while (fgets(riga, sizeof(riga), file1) != NULL) 
    {
        for(int i=0;i<100;i++)
        {   
            contC++;
        }
        contR++;
    }
    printf("il numero di righe e' %d\n", contR);
    printf("il numero di caratterri e' %d\n", contC);


    fclose(file1);
    fclose(file2);

    return 0;
}
