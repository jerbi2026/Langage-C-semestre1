#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ticket
{
    int id ;
    char nom_prenom[100];
    int age;
    char sex[1];
    float prix;
}ticket;
ticket tik[86000];


void achat_ticket()
{
    int i;
    for(i=0;i<6;i++)
    {
        printf("les coordonnees du ticket %d\n",i+1);
        do
        {
            printf("id:\n");
            scanf("%d",&tik[i].id);
        }while(diff(tik,i)==1);
        printf("nom et prenom:\n");
        scanf("%s",tik[i].nom_prenom);
        do
        {
            printf("l'age\n");
            scanf("%d",&tik[i].age);
        }while(tik[i].age<0);
        printf("sex: (entrez h si homme ou f si femme)\n");
        scanf("%s",tik[i].sex);
        if (tik[i].age<=12 || tik[i].age>=65)
            tik[i].prix=0.00;
        else
            if(tik[i].age<=25)
                tik[i].prix=30.00;
            else
                if(tik[i].sex[0]=='f')
                    tik[i].prix=45.00;
                else
                    tik[i].prix=60.00;
        printf("-----------------------\n");

    }
}

int diff(ticket tic[],int i)
{
    int j=0;
    int x=0;
    while(j!=i && x==0)
    {
        if (tic[i].id==tic[j].id)
        {
            x=1;
        }
        else
            j++;
    }
    return x ;
}
void affiche()
{
    int i;
    for (i=0;i<6;i++)
    {
        printf("les coordonnees du ticket numero %d\n",i+1);
        printf("id:\n%d\nnom et prenom:\n%s\nage:\n%d\nsex:\n%s\nprix:\n%.2f\n",tik[i].id,tik[i].nom_prenom,tik[i].age,tik[i].sex,tik[i].prix);
        printf("-------------------------------\n");
    }
}

void revenue(ticket tik[])
{
    int i;
    float s=0.00;
    for (i=0;i<6;i++)
    {
        s=s+tik[i].prix;
    }
    printf("les revenus de match sont %.2f\n",s);
}


void statistique(ticket tik[])
{
    int i;
    float jeune=0.00, moy_age=0.00, femme=0.00;
    for(i=0;i<6;i++)
    {
        if (tik[i].age>12 && tik[i].age<25 )
            jeune++;
        moy_age=moy_age+tik[i].age;
        if (tik[i].sex[0]=='f')
            femme=femme+1;
    }
    printf("-----------------------------------------\n");
    printf("la proportion des jeunes \n %.2f\n",jeune/4);
    printf("-----------------------------------------\n");
    printf("la moyenne d'age est \n %.2f\n",moy_age/4);
    printf("-----------------------------------------\n");
    printf("la proportion des femmes \n %.2f \n",femme/4);



}

void tri(ticket tik[])
{
    int i, x=0;
    int aux;
    char ch[100]="";
    int aux1;
    char ch1[1];
    float px;
    while(x==0)
    {
        x=1;
        for(i=0;i<6;i++)
        {
            if (tik[i].prix>tik[i+1].prix)
            {
                aux=tik[i].id;
                tik[i].id=tik[i+1].id;
                tik[i+1].id=aux;
                aux1=tik[i].age;
                tik[i].age=tik[i+1].age;
                tik[i+1].age=aux1;
                px=tik[i].prix;
                tik[i].prix=tik[i+1].prix;
                tik[i+1].prix=px;
                strcpy(ch,tik[i].nom_prenom);
                tik[i].nom_prenom[0]='\0';
                strcpy(tik[i].nom_prenom,tik[i+1].nom_prenom);
                tik[i+1].nom_prenom[0]='\0';
                strcpy(tik[i+1].nom_prenom,ch);
                ch[0]='\0';


                strcpy(ch1,tik[i].sex);
                tik[i].sex[0]='\0';
                strcpy(tik[i].sex,tik[i+1].sex);
                tik[i+1].sex[0]='\0';
                strcpy(tik[i+1].sex,ch1);
                ch1[0]='\0';
                x=0;


            }
        }
    }
    printf("----------------------////////////////////--------------------//////////////-------------------------\n");
    for (i=0;i<6;i++)
    {
        printf("les coordonnees du ticket numero %d\n",i+1);
        printf("id:\n%d\nnom et prenom:\n%s\nage:\n%d\nsex:\n%s\nprix:\n%.2f\n",tik[i].id,tik[i].nom_prenom,tik[i].age,tik[i].sex,tik[i].prix);
        printf("-------------------------------\n");
    }

}


int main()
{
    debut:
    achat_ticket();
    printf("********************************************\n");
    affiche();
    printf("********************************************\n");
    revenue(tik);
    printf("********************************************\n");
    statistique(tik);
    printf("********************************************\n");
    tri(tik);
    printf("********************************************\n");
    goto debut;



    return 0;
}
