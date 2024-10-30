for (int i = 0; i < N; i++)
    {
        printf("Inserisci il nome: \n ");
        scanf("%s", buffer[i].nome);

        printf("Inserisci il cognome: \n ");
        scanf("%s", buffer[i].cognome);

        for (int j = 0; j < N; j++)
        {
            buffer[i].voti[j] = rand() % 10 + 1; 
        }
    }