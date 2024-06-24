#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dte
{
    int jour;
    int mois;
    int annee;
}date;


typedef struct analyse
{
    int code ;
    char nom_prenom[100];
    date date_prelev;
    int resultat;
}analyse;

analyse anal[1000];

void ajout_test()
{
    int i ;
    for (i=0;i<4;i++)
    {
        printf("les coordonnees de l'analyse %d\n",i+1);
        printf("code:\n");
        scanf("%d",&anal[i].code);
        printf("nom prenom:\n");
        scanf("%s",anal[i].nom_prenom);
        printf("date de prelevement:\n");
        scanf("%d",&anal[i].date_prelev.jour);
        scanf("%d",&anal[i].date_prelev.mois);
        scanf("%d",&anal[i].date_prelev.annee);
        do
        {
            printf("resultat:\n");
            scanf("%d",&anal[i].resultat);
            printf("---------------------------\n");
        }while(anal[i].resultat!=0 && anal[i].resultat!=1);
    }
}

void affiche_tests()
{
    int i;
    for (i=0;i<4;i++)
    {
        printf("les coordonnees de l'analyse %d",i+1);
        printf("code: %d\n",anal[i].code);
        printf("nom et prenom: %s\n",anal[i].nom_prenom);
        printf("date de prelevement: %d/%d/%d\n",anal[i].date_prelev.jour,anal[i].date_prelev.mois,anal[i].date_prelev.annee);
        printf("resultat: %d\n",anal[i].resultat);
        printf("-------------------\n");
    }
}

void affiche_test_janv_2021(analyse anal[])
{
    int i;
    for(i=0;i<4;i++)
    {
        if(anal[i].date_prelev.mois==01 && anal[i].date_prelev.annee==2021)
        {
            if (anal[i].resultat==1)
            {
                printf("les coordonnees de l'analyse %d",i+1);
                printf("code: %d\n",anal[i].code);
                printf("nom et prenom: %s\n",anal[i].nom_prenom);
                printf("date de prelevement: %d/%d/%d\n",anal[i].date_prelev.jour,anal[i].date_prelev.mois,anal[i].date_prelev.annee);
                printf("resultat: %d\n",anal[i].resultat);
                printf("-------------------\n");
            }

        }
    }
}

void recherche_patient(analyse anal[])
{
    int code_user;
    printf("donner le code de patient qui vous recherche \n");
    scanf("%d",&code_user);
    int i=0;
    while(i<4)
    {
        if (anal[i].code==code_user)
        {
            printf("les coordonnees de patient que vous recherchez sont\n");
            printf("code: %d\n",anal[i].code);
            printf("nom et prenom: %s\n",anal[i].nom_prenom);
            printf("date de prelevement: %d/%d/%d\n",anal[i].date_prelev.jour,anal[i].date_prelev.mois,anal[i].date_prelev.annee);
            printf("resultat: %d\n",anal[i].resultat);
            printf("-------------------\n");
            break;
        }
        else
            i++;
    }
    if (i==4)
    {
        printf("le code saisi ne correspond a aucun patient\n");
    }
}

void taux_contam(analyse anal[])
{
    int i;
    float s=0.00;
    for(i=0;i<4;i++)
    {
        if (anal[i].resultat==1)
        {
            s++;
        }
    }
    printf("le taux de contamination dans le labo: %.2f",s/4);

}


int main()
{
    ajout_test();
    affiche_tests();
    affiche_test_janv_2021(anal);
    recherche_patient(anal);
    taux_contam(anal);

    return 0;
}
