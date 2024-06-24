#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define taille 500

char chaine[taille];
char mot[taille];


int contenir()
{
    int t_mot , t_chaine , i ,j=0;
    t_mot=strlen(mot);
    t_chaine=strlen(chaine);
    for (i=0;i<t_chaine;i++)
        if(chaine[i]==mot[j])
            j++;
    if (j==t_mot)
        return 1;
    else
        return 0 ;

}

int main()
{
    printf("donner la chaine\n");
    scanf("%s",chaine);
    puts("donner le mot\n");
    scanf("%s",mot);
    if (contenir()==1)
        printf("contient");
    else
        printf("ne contient pas");
    return 0;
}
