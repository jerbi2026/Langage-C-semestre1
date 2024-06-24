#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ch1[100];
char ch2[100];
void saisi()
{
    do
    {
    puts("donner la 1ere chaine \n");
    gets(ch1);
    puts("donner la 2eme chaine \n");
    gets(ch2);
    }while ((test(ch1)==0)&&(test(ch2)==0));
}
int test(char ch[])
{
    int i , s=1;
    for (i=0;i<strlen(ch);i++)
        if ("A"<ch[i]<"Z")
            s++;
    if (s==strlen(ch))
        return 1;
    else
        return 0;
}
int main()
{
    saisi();


    return 0;
}
