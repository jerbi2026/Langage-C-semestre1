#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ch[100];
void saisi()
{
    do
    {
        printf("donner la chaine binaire\n");
        scanf("%s",ch);
    }while(test(ch)==1);
}
int test(char ch[])
{
    int i, x=0;
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]!='1' && ch[i]!='0')
        {
            x=1;
            break;
        }
    }
    return x;
}

void conversion(char ch[])
{
    int i,x=0;
    for(i=0;i<strlen(ch);i++)
    {
        if (ch[i]=='1')
            x=x+puissance(2,i);
    }
    printf("le nombre en decimal est %d",x);
}


int puissance(int a, int b)
{
    int p=1;
    for(int f=1;f<=b;f++)
    {
        p=p*a;
    }
    return p;
}


int main()
{
    debut:
    saisi();
    conversion(ch);
    printf("\n---------------------------\n");
    goto debut;
    return 0;
}
