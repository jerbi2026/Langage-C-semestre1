#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 100
char src[n],dest[n];
void saisi()
{
    printf("src = \n");
    scanf("%s",src);
}


int main()
{
    saisi();
    int i ;
    for (i=0;i<strlen(src);i++)
    {
        dest[i]=toupper(src[i]);
    }
    printf("la ch en majus est %s",dest);

    return 0;
}
