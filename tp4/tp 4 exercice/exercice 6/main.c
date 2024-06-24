#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define taille 500
char ch[taille];
void saisi()
{

    printf("donner un verbe de 1er groupe \n");
    scanf("%s",ch);
}
int verif(char ch[])
{
    int i , t_ch;
    t_ch=strlen(ch);
    if ((ch[t_ch-1]=='r') && (ch[t_ch-2]=='e'))
        return 1;
    else
        return 0;
}
void conjug(char ch[])
{
    char rad[taille];
    int t_ch;
    t_ch=strlen(ch);
    int i;
    for (i=0;i<t_ch-2;i++)
        rad[i]=ch[i];
    printf("la conjugaison de verbe %s est :\n",ch);
    printf("je %se\n ",rad);
    printf("tu %ses\n ",rad);
    printf("il/elle %se\n ",rad);
    if ((rad[strlen(rad)]=="a") || (rad[strlen(rad)]=="o") || (rad[strlen(rad)]=="i") || (rad[strlen(rad)]=="e") || (rad[strlen(rad)]=="u")|| (rad[strlen(rad)]=="y")   )
    printf("nous %sons\n ",rad);
    else
        printf("nous %seons\n ",rad);
    printf("vous %sez\n ",rad);
    printf("ils/elles %sent\n ",rad);



}


int main()
{
    saisi();
    if (verif(ch)==0)
        printf("le verbe n'est pas au 1er groupe \n");

    else
       {
           printf("le verbe est au premier groupe \n");
            conjug(ch);
       }



    return 0;
}
