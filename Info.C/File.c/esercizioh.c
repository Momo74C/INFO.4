/*ELSHOURBGY MOHAMED 4H*/
#include <stdio.h>
#include <stdlib.h>

void cesareCrypt(FILE* inFile, FILE* outFile, int n);
void cesareDecrypt(FILE* inFile, FILE* outFile, int n);
int main(int argc, char *argv[]) 
{
    if (argc != 5) 
    {
        printf("Utilizzo: %s [input_file] [output_file] [chiave] [azione (c/d)]\n", argv[0]);
        return 1;
 	}

    char *input_file = argv[1];
  	char *output_file = argv[2];
  	int chiave = atoi(argv[3]);
   	char azione = argv[4][0];

   FILE *inFile = fopen(input_file, "r");
    if (inFile == NULL) 
    {
        perror("Errore nell'apertura del file di input");
        return 1;
    }

    FILE *outFile = fopen(output_file, "w");
    if (outFile == NULL) // posso anche per farlo visto che usa la modalità w (write) e che se non c'è il file lo crea.
    {
        perror("Errore nell'apertura del file di output");
        fclose(inFile);
        return 1;
    }

    if (azione == 'c') 
    {
        cesareCrypt(inFile, outFile, chiave);
    } 
    else if (azione == 'd') 
    {
        cesareDecrypt(inFile, outFile, chiave);
    } 
    else 
    {
        printf("Azione non valida. Usa 'c' per cifrare o 'd' per decifrare.\n");
        fclose(inFile);
        fclose(outFile);
        return 1;
    }

    fclose(inFile);
    fclose(outFile);

    return 0;
}

void cesareCrypt(FILE* inFile, FILE* outFile, int n) 
{
    char ch;
    
    while ((ch = fgetc(inFile)) != EOF) 
    {
        // Crittografia
        if (ch >= 'A' && ch <= 'Z') 
        {
            ch = ((ch - 'A' + n) % 26) + 'A'; // Maiuscole
        } 
        else if (ch >= 'a' && ch <= 'z') 
        {
            ch = ((ch - 'a' + n) % 26) + 'a'; // Minuscole
        }
        fputc(ch, outFile);
    }
}

void cesareDecrypt(FILE* inFile, FILE* outFile, int n) 
{
    char ch;
    
    while ((ch = fgetc(inFile)) != EOF) 
    {
        // Decrittografia
        if (ch >= 'A' && ch <= 'Z') 
        {
            ch = ((ch - 'A' - n + 26) % 26) + 'A'; // Maiuscole
        } 
        else if (ch >= 'a' && ch <= 'z') 
        {
            ch = ((ch - 'a' - n + 26) % 26) + 'a'; // Minuscole
        }
        fputc(ch, outFile);
    }
}
