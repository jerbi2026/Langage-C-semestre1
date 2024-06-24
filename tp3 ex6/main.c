#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int main()
{
    int i;
    time_t t;
    srand((unsigned) time(&t));
    i = rand() % 100;
    printf("%d\n", i);
    int n;
    printf("donner un entier n \n");
    scanf("%d",&n);
    if (n==i)
        printf("vous avez saisi la bonne valeur \n");
    while (n!=i)
    {
        printf("le nombre saisie n'est pas la bonne valeur \n");
        if (n>i)
            printf("le nombre saisi est superieur a la bonne valeur \n");
        else
            printf("le nombre saisi est inferieur a la bonne valeur \n");
        printf("redonner un entier n \n");
        scanf("%d",&n);
        if (n==i)
        printf("vous avez saisi la bonne valeur \n");
    }
    return 0;
}
