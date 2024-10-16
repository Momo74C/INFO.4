#include <stdio.h>
int main() {
    FILE* file_ptr = fopen("file.txt", "w");
    if (file_ptr == NULL) {
        perror("Errore durante l'apertura del file");
        return 1;
    }

    int numero = 42; float valore = 3.14;
    char testo[] = "Hello, World!";

    fprintf(file_ptr, "Numero intero: %d\n", numero);
    fprintf(file_ptr, "Valore float: %.2f\n", valore);
    fprintf(file_ptr, "Testo: %s\n", testo);

    fclose(file_ptr);
    return 0;
}
