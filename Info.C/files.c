#include <stdio.h>
int main()
{
	FILE* file_ptr = fopen("file.txt", "r");
	
	if (file_ptr == NULL) 
	{
    	perror("Errore durante l'apertura del file");
    	// Gestisci l'errore in modo appropriato
	}

}