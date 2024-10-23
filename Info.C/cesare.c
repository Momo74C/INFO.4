#include <stdio.h>

void cesareCrypt(FILE* inFile, FILE* outFile, int key) 
{
    char ch;
    
    while ((ch = fgetc(inFile)) != EOF) 
    {
        // Crittografia
        if (ch >= 'A' && ch <= 'Z') 
        {
            ch = ((ch - 'A' + key) % 26) + 'A'; 
        } 
        else if (ch >= 'a' && ch <= 'z') 
        {
            ch = ((ch - 'a' + key) % 26) + 'a'; 
        }
        fputc(ch, outFile);
    }
}

void cesareDecrypt(FILE* inFile, FILE* outFile, int key) 
{
    char ch;
    
    while ((ch = fgetc(inFile)) != EOF) 
    {
        // Decrittografia
        if (ch >= 'A' && ch <= 'Z') 
        {
            ch = ((ch - 'A' - key + 26) % 26) + 'A'; // Maiuscole
        } 
        else if (ch >= 'a' && ch <= 'z') 
        {
            ch = ((ch - 'a' - key + 26) % 26) + 'a'; // Minuscole
        }
        fputc(ch, outFile);
    }
}
#include <stdio.h>

int main() 
{
   
    int key = 3;  // Chiave per la crittografia

    FILE *inFile = fopen(inputFile, "r");
    FILE *outFileCrypt = fopen(outputFileCrypt, "w");
    FILE *outFileDecrypt = fopen(outputFileDecrypt, "w");

    if (inFile == NULL || outFileCrypt == NULL || outFileDecrypt == NULL) 
    {
        perror("Errore nell'apertura dei file");
        return 1;  // Uscita dal programma in caso di errore
    }

    // Crittografia
    cesareCrypt(inFile, outFileCrypt);
    
    // Chiudiamo i file crittografati prima di riaprirli per la decrittografia
    fclose(inFile);
    fclose(outFileCrypt);
    
    // Riapriamo il file di output crittografato per la decrittografia
    inFile = fopen(outputFileCrypt, "r");
    outFileDecrypt = fopen(outputFileDecrypt, "w");

    if (inFile == NULL || outFileDecrypt == NULL) 
    {
        perror("Errore nell'apertura dei file");
        return 1;  // Uscita dal programma in caso di errore
    }

    // Decrittografia
    cesareDecrypt(inFile, outFileDecrypt, key);

    // Chiusura dei file
    fclose(inFile);
    fclose(outFileDecrypt);

    return 0;
}
