#include <stdio.h>
int main() {
    FILE* file_ptr = fopen("file.txt", "r");
    if (file_ptr == NULL) 
    {
        perror("Errore durante l'apertura del file");
        return 1;
    }
    char riga[100]; 
    while (fgets(riga, sizeof(riga), file_ptr) != NULL) 
    {
        printf("%s", riga); 
    }

    fclose(file_ptr);
    return 0;
}
