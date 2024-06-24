void main()
{
    int tab[50], i, j, k, size;
    printf("Entrez le nombre d'éléments dans le tableau : ");
    scanf("%d", &size);

    printf("Entrez les %d éléments : \n", size);
    for(i = 0; i < size; i++)
    {
        scanf("%d", &tab[i]);
    }
    printf("Le tableau d'origine est: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\nLe nouveau tableau est: ");
    for(i = 0; i < size; i++)
    {
        for(j = i+1; j < size; )
        {
            if(tab[j] == tab[i])
            {
                for(k = j; k < size; k++)
                {
                    tab[k] = tab[k+1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }
    for(i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
}
