#include <stdio.h>
#include <stdlib.h>
void sort(int *tab, int size)
{
    int i, j, tmp;
    for(i = 1; i <= size-1; i++)
    {
        for(j = 0; j < size-i; j++)
        {
            if(tab[j] > tab[j+1])
            {
                tmp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = tmp;
            }
        }
    }
}
void main()
{
    int tab[50], i, n;
    printf("Entrez le nombre d'éléments que vous souhaitez trier: ");
    scanf("%d", &n);
    printf("Entrez les %d éléments : \n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &tab[i]);
    sort(tab, n);
    printf("Le tableau trié = ");
    for(i = 0; i < n; i++)
        printf("%d ", tab[i]);
}
