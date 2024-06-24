#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define f 100

char ch[f],facteur[f];
void saisi()
{
    printf("donner src \n");
    scanf("%s",ch);
    printf("donner facteur\n");
    scanf("%s",facteur);
}
int main()
{
    saisi();
    int i,n=1;
    if (strlen(ch)>strlen(facteur))
    {
        for (i=0;i<strlen(ch);i++)
            if (ch[i]==facteur[i])
                n++;
        if (n>=strlen(ch)/2)
            printf("%s est un facteur de %s",facteur,ch);
    }
    else
    {
        for (i=0;i<strlen(facteur);i++)
            if (ch[i]==facteur[i])
                n++;
        if (n>=strlen(facteur)/2)
            printf("%s est un facteur de %s",ch,facteur);
    }

    return 0;
}
