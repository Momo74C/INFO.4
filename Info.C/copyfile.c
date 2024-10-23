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

    int ca; 
    while ((ca = fgetc(file1)) != EOF) 
    {
        fputc(ca, file2);
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
