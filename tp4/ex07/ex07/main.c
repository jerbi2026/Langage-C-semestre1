#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch1[5];
char ch2[5];
void saisi()
{
    printf("donner ch1 :\n");
    scanf("%s",ch1);
    printf("donner ch2 :\n");
    scanf("%s",ch2);

}
void affiche(char ch1[],char ch2[])
{
    int i=0,j=0;
    printf("chaine ch1 : %s \n",ch1);
    printf("chaine ch2 : %s \n",ch2);
    printf("afficher :  \n");
    while (i<5)
    {
       debut :
        if ((ch1[i]==ch2[j])&&(i==j))
            printf("*");
            i++;
            j++;
            goto debut;

        if ((ch1[i]==ch2[j])&&(i!=j))
            printf("_");
            i++;
            j++;
            goto debut;

        if (ch1[i]!=ch2[j])
            printf("-");
            i++;
            j++;
            goto debut;


    }

}



int main()
{
    saisi();
    affiche(ch1,ch2);
    return 0;
}
