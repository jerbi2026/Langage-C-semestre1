#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch[100];
void saisi()
{
    do
    {
        printf("donnner une chaine binaire \n");
        scanf("%s",ch);
    }while (test(ch)==1);
}
int test(char ch[])
{
    int i;
    for (i=0;i<strlen(ch);i++)
    {
        if ((ch[i]!='0')&&(ch[i]!='1'))
        {
            return 1;
            break;
        }
    }
}
void conversion (char ch[])
{
    int i,b=0;
    int a=2;
   for(i=strlen(ch)-1;i>=0;i--)
    {
        if (ch[i]=='1')
            b=b+(1*puissance(a,i));
    }
    printf("le nombre %s /2 devient  %d /10",ch,b);
}
int puissance(int x,int y)
{
    int f,p=1;
    for(f=1;f<=y;f++)
        p=p*x;
    return p;
}
int main()
{
    saisi();
    conversion(ch);
    return 0;
}
