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

     
    char riga[100]; 
    while (fgets(riga, sizeof(riga), file1) != NULL) 
    {
        for(int i=0;i<100;i++)
        {   
            if (riga[i] >= 'a' && riga[i] <= 'z')
            {
                riga[i] = riga[i] - 32 ;
            }
        }
        fputs(riga, file2);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
