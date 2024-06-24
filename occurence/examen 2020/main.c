#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ch[]="Universite de Carthage";

void exercice_1()
{
    int i;
    for(i=0;i<strlen(ch);i++)
    {
        printf("%c",ch[i]);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%c",ch[i]);
    }
    printf("\n");
    for(i=strlen(ch)-1;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
    printf("\n");
    for(i=strlen(ch)-13;i>=0;i--)
    {
        printf("%c",ch[i]);
    }
}


int main()
{
    exercice_1();
    return 0;
}
