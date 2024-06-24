#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct dte
{
    int jour;
    int mois;
    int annee;
}date;
typedef struct compte
    {
        char libelle[50];
        int num_compte;
        float solde;
        date date_creation;
    }cpte;
cpte   cpt[3] ;
void saisi()
{
    int i ;
    for (i=1;i<4;i++)
    {
        printf("les donnees du compte %d",i);
        printf("*************************************\n");
        printf ("donner la libelle de cpt %d \n",i);
        scanf("%s",cpt[i].libelle);
        printf("donne le num de compte %d\n",i);
        scanf("%d",&cpt[i].num_compte);
        printf("donner le solde de cpte %d\n",i);
        scanf("%f",&cpt[i].solde);
        printf ("donner la date de creation de numero %d \n",i);
        scanf("%d/%d /%d",&cpt[i].date_creation.jour,&cpt[i].date_creation.mois,&cpt[i].date_creation.annee);
        printf("*******************************************************\n");

    }
}
void affiche()
{
    int i ;
    for (i=1;i<4;i++)
    {
        printf("les donnees du compte %d",i);
        printf("*************************************\n");
        printf ("la libelle de cpt %d est %s \n",i,cpt[i].libelle);
        printf("le num de compte %d est %d\n",i,cpt[i].num_compte);
        printf("le solde de cpte %d est %f \n",i,cpt[i].solde);
        printf ("donner la date de creation de numero %d est %d %d %d \n",i,cpt[i].date_creation.jour,cpt[i].date_creation.mois,cpt[i].date_creation.annee);
        printf("*******************************************************\n");

    }
}

int main()
{
    saisi();
    affiche();
    return 0;
}
