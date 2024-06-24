#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int tab[6];
    for (i = 1; i <= 6; i++)
    {
        tab[i] = rand() % 6 + 1;
        printf("%d\n", tab[i]);
    }


    return 0;
}
