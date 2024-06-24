#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char t[1000];
int s[26];


void saisi_text()
{
    do
    {
        printf("donner le text \n");
        gets(t);
    }while(test(t)==1);
}
int test(char ch[])
{
    int i , k=0;
    for (i=0;i<strlen(ch);i++)
    {
        if(ch[i]>'z' || ch[i]<'a')
        {
            if (ch[i]!=' ')
            {
                k=1;
                break;
            }
        }
    }
    return k;
}

void remp_s(char t[],int s[])
{
    int i;
    char c;
    c='a';
    for (i=0;i<26;i++)
    {
        s[i]=occurence(t,c);
        c=c+1;
    }
    c='a';
    for(i=0;i<26;i++)
    {
        printf("le nombre d'occurence de %c est %d\n",c,s[i]);
        c=c+1;
    }

}

int occurence(char ch[], int a)
{
    int i, s=0;
    for (i=0;i<strlen(ch);i++)
    {
        if (ch[i]==a)
            s++;
    }
    return s;
}


void histogramme(int s[])
{
    int i,j ;
    char c='a';
    int nb=1;
    for (i=0;i<26;i++)
    {
        nb=nb*s[i];
        printf("%c :",c);
        for(j=0;j<nb;j++)
            printf("*");
        printf("\n");
        c++;
        nb=1;
    }

}


int main()
{
    saisi_text();
    int x=strlen(t);
    printf("longueur du texte %d\n",x);
    remp_s(t,s);
    printf("------------------------------\n");
    histogramme(s);
    return 0;
}
