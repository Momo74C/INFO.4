/*ELSHOURBGY MOHAMED 4H*/
#include <stdio.h>
int main() 
{
    FILE* file1 = fopen("../File/numeri.txt", "r");
    FILE* file2 = fopen("../File/pari.txt", "w");
    FILE* file3 = fopen("../File/dispari.txt", "w");


    if (file1 == NULL || file2 == NULL || file3 == NULL) 
    {
        perror("Errore durante l'apertura del file");
        return 1;
    }
     
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
