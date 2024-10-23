#include <stdio.h>
#include <string.h>
int main() 
{
    FILE* file1 = fopen("file.txt", "r");
    FILE* file2 = fopen("pari.txt", "w");
    FILE* file3 = fopen("dispari.txt", "w");


    if (file1 == NULL || file2 == NULL || file3 == NULL) 
    {
        perror("Errore durante l'apertura del file");
    }
     
    int ca; 
    while ((ca = fgetc(file1)) != EOF) 
    {
       
    }
    


    fclose(file1);
    fclose(file2);
    fclose(file3);


    return 0;
}
