#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ch1[100];
char ch2[100];
char ch3[100];


void saisi()
{
    do
    {
        printf("donner chaine 1 \n");
        scanf("%s",ch1);

    }while(test(ch1)==1);
    do
    {
        printf("donner chaine 2 \n");
        scanf("%s",ch2);

    }while(test(ch2)==1);

}
int test(char ch[])
{
    int i;
    for(i=00;i<strlen(ch);i++)
    {
        if (ch[i]<'A' || ch[i]>'Z')
        {
            return 1;
            break;
        }
    }
}


void motus(char ch1[],char ch2[],char ch3[])
{
    int i ;
    for (i=0;i<strlen(ch1);i++)
    {
        if ((strchr(ch1[i],ch2)!=0)&&(ch1[i]==ch2[i]))
        {
            strcpy(ch3,'*');
        }
        else
            strcpy(ch3,'/');
        if (strchr(ch1[i],ch2)==0)
            strcpy(ch3,'0');

    }
    strcpy(ch3,'/0');
    printf("motus = %s",ch3);

}

int main()
{
    saisi();
    motus(ch1,ch2,ch3);
    return 0;
}
