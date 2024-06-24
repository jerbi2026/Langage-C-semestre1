#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch[100];
int test(char ch[])
{
    int i=0 ;
    while (((ch[i]=="0") && (ch[i]=="1")) && (i<strlen(ch)))
    {
        i++;
    }
    if (strlen(ch)==i)
        return 1;
    else
        return 0;
}

void saisi()
{
    int n;
    n=test(ch);
    do
    {
        puts("donner une chaine binaire \n");
        gets(ch);
    }while (n==0);
}



int main()
{
    saisi();
    return 0;
}
