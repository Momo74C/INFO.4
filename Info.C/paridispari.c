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
     
    //questa parte è basta sul fatto che se i numeri snon fatti da più di una cifra quindi e non come in ASCII che ha una cifra,
    int ca; 
    while (fscanf(file1, "%d", &ca) != EOF) 
    {
        if (ca % 2 == 0) 
        {
            fprintf(file2, "%d ", ca); 
        } 
        else 
        {
            fprintf(file3, "%d ", ca); 
        }
    }
    


    fclose(file1);
    fclose(file2);
    fclose(file3);


    return 0;
}
//qua ho fatto un'altra versione da quanto ho capito con le cifre numeriche nel sistema ASCII che vanno da 0 a 9 .
/*while ((ca = fgetc(file1)) != EOF) 
    {
        if (ca >= '0' && ca <= '9') 
        {
            int num = ca - '0'; 
            
            if (num % 2 == 0) 
            {
                fputc(ca, file2); 
                fputc(' ', file2); 
            } 
            else 
            {
                fputc(ca, file3); 
                fputc(' ', file3); 
                
            }
        }
    }*/
