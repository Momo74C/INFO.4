/*ELSHOURBGY MOHAMED 4H*/
#include <stdio.h>

void cesareCrypt(FILE* inFile, FILE* outFile, int n);
void cesareDecrypt(FILE* inFile, FILE* outFile, int n);
int main() 
{
    FILE *inFile = fopen("../File/input.txt", "r");
    FILE *outFileCrypt = fopen("../File/output.encrypt.txt", "w");
    FILE *outFileDecrypt = fopen("../File/output.decrypt.txt", "w");

    int n = 3;  // Chiave per la crittografia

    if (inFile == NULL || outFileCrypt == NULL || outFileDecrypt == NULL) 
    {
        perror("Errore nell'apertura dei file");
        return 1;
    }

    // Crittografia
    cesareCrypt(inFile, outFileCrypt, n);

    fclose(inFile);
    fclose(outFileCrypt);

    
    inFile = fopen("../File/output.encrypt.txt", "r");
    outFileDecrypt = fopen("../File/output.decrypt.txt", "w");

    if (inFile == NULL || outFileDecrypt == NULL) 
    {
        perror("Errore nell'apertura dei file");
        return 1;
    }

    // Decrittografia
    cesareDecrypt(inFile, outFileDecrypt, n);

    fclose(inFile);
    fclose(outFileDecrypt);

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
