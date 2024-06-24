#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch1[100];
char ch2[100];


void saisi()
{
    do
    {
        printf("donner ch1\n");
        scanf("%s",ch1);
        printf("donner ch2\n");
        scanf("%s",ch2);
    }while(test(ch1,ch2)==1);
}

int test(char ch1[],char ch2[])
{
    int i;
    int k=0;
    for(i=0;i<strlen(ch1);i++)
    {
        if (ch1[i]>'Z' || ch1[i]<'A')
        {
            k=1;
            break;
        }
    }
    for(i=0;i<strlen(ch2);i++)
    {
        if (ch2[i]>'Z' || ch2[i]<'A')
        {
            k=1;
            break;
        }
    }
    if (strlen(ch1)!=strlen(ch2))
    {
        k=1;
    }
    return k;

}

void motus(char ch1[],char ch2[])
{
    int i;
    printf("afficher : ");
    for (i=0;i<strlen(ch1);i++)
    {
        if ((strchr(ch2,ch1[i])!=0)&&(ch1[i]==ch2[i]))
        {
            printf("*");
        }
        else
            if ((strchr(ch2,ch1[i])!=0)&&(ch1[i]!=ch2[i]))
            {
                printf("/");
            }
            else
                printf("+");
    }
}

int main()
{
    saisi();
    motus(ch1,ch2);
    return 0;
}
