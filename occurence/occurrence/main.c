#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch[100];
void saisi()
{
    do
    {
        printf("donner le nom \n");
        scanf("%s",ch);
    }while (test(ch)==1);
}


int test(char ch[])
{
    int i ;
    for(i=0;i<strlen(ch);i++)
    {
        if (ch[i]>'z' || ch[i]<'a')
        {
            return 1;
            break;
        }
    }
}

int occurence(char c , char ch[])
{
    int x=0,i;
    for (i=0;i<strlen(ch);i++)
    {
        if (ch[i]==c)
        {
            x++;
        }
    }
    return x;
}



void affiche(char ch[])
{
    int n;
    for (int i =0;i<strlen(ch);i++)
    {
        n=occurence(ch[i],ch);
        printf("le caractere %c se trouve %d fois\n",ch[i],n);
    }
}

int main()
{
    saisi();
    affiche(ch);
    return 0;
}
