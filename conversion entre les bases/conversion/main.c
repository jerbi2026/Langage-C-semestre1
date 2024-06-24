#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int choix;
char ch1[20];
char ch2[20];
int t;

void affiche1()
{
    printf("\n------------------------------\n1- De la base 2 vers la base 10\n");
    printf("2- De la base 10 vers la base 2\n");
    printf("3- De la base 8 vers la base 2\n");
    printf("4- De la base 2 vers la base 8\n");
    printf("5- De la base 16 vers la base 2\n");
    printf("6- De la base 2 vers la base 16\n");
    printf("7- Quitter\n");
}

void conv_2_to_10(char ch1[])
{
    printf("donner la chaine a convertir:\t");
    scanf("%s",ch1);
    int s=0,i;
    for (i=0;i<strlen(ch1);i++)
    {
        if (ch1[i]=='1')
        {
            s=s+puissance(2,i);
        }
    }
    printf(" la chaine en base 10 est %d\n",s);

}

int puissance(int a , int b)
{
    int p=1;
    for(int i=1;i<=b;i++)
        p=p*a;
    return p;
}


void conv_10_to_2(int t, char ch2[])
{
    printf("donner le nombre pour le convertir\n");
    scanf("%d",&t);
    int x;
    while ((t/2)!=1)
    {
        x=t%2;
        t=t/2;
        sprintf(ch2,"%d",x);
    }
    x=t/2;
    sprintf(ch2,"%d",x);
    int i;
    printf("le nombre en base 2\n");
    for (i=strlen(ch2)-1;i>=0;i--)
    {
        printf("%c",ch2[i]);
    }
    printf("\n");


}




int main()
{
    affiche1();
    debut:
    printf("Donner votre choix\n");
    scanf("%d",&choix);
    while (choix!=7)
    {
        if (choix==1)
        {
            conv_2_to_10(ch1);
            ch1[0]='\0';
            goto debut;
        }
        else
            if(choix==2)
            {
                conv_10_to_2(t,ch2);
                ch2[0]='\0';
                goto debut;
            }

    }
    return 0;
}
