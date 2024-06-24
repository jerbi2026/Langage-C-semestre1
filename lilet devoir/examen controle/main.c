#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct voiture
{
    char mod[100];
    int matricule;
    float km;
    int etat;
}voiture;
int n;
voiture voit[100];
void saisi()
{
    do
    {
        printf("donner n\n");
        scanf("%d",&n);
    }while(n<0);

}
void remp_voit()
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("les coordonne du voiture %d\n",i+1);
        printf("modele\n");
        scanf("%s",voit[i].mod);
        do
        {
            printf("le matricule\n");
            scanf("%d",&voit[i].matricule);
        }while(distinct(voit,i)==1);
        printf("km\n");
        scanf("%f",&voit[i].km);
        do
        {
            printf("etat\n");
            scanf("%d",&voit[i].etat);
        }while(voit[i].etat!=1 && voit[i].etat!=0);
    }
}
int distinct(voiture voit[],int i)
{
    int j=0;
    int x=0;
    while(j!=i && x==0 )
    {
        if(voit[i].matricule==voit[j].matricule)
        {
            x=1;
        }
        else
            j++;
    }
    return x;
}

void louer(voiture voit[],int n)
{
    int mat;
    int i;
    printf("donner le matricule de la voiture\n");
    scanf("%d",&mat);
    for(i=0;i<n;i++)
    {
        if (voit[i].matricule==mat)
        {
            if (voit[i].etat==0)
            {
                printf("jawek behi \n");
                voit[i].etat=1;
                break;
            }
            else
               {
                   printf("deja loue\n");
                   break;
               }
        }
    }
    if (i==n)
    {
        printf("tetkouheb asba\n");
    }
}
void retour(voiture voit[],int n)
{
    int mat;
    printf("donner matricule\n");
    scanf("%d",&mat);
    int i;
    for(i=0;i<n;i++)
    {
        if (voit[i].matricule==mat)
        {
            if (voit[i].etat==1)
            {
                printf("jawek behi \n");
                voit[i].etat=0;
                break;
            }
            else
               {
                   printf("wakteh krit zokomha\n");
                   break;
               }
        }
    }
    if (i==n)
    {
        printf("tetkouheb asba\n");
    }
}
void etatparc(voiture voit[],int n)
{
    printf("**************************\n");
    printf("nbre de voiture %d \n",n);
    int i,s=0,p=0;
    float kilom=0.00;
    printf("les voitures en location\n");
    for(i=0;i<n;i++)
    {
        if(voit[i].etat==1)
        {
            printf("matricule : %d\n",voit[i].matricule);
            s++;
        }
        kilom=kilom+voit[i].km;
    }
    printf("%d voitures en location \n",s);
    printf("les voitures libre\n");
    for(i=0;i<n;i++)
    {
        if(voit[i].etat==0)
        {
            printf("matricule : %d\n",voit[i].matricule);
            p++;
        }
    }
    printf("%d voitures libres\n",p);
    printf("kilometrage moyen est %.2f",kilom/n);

}

int main()
{
    debut:
    saisi();
    remp_voit();
    louer(voit,n);
    retour(voit,n);
    etatparc(voit,n);
    printf("\n---------------------------\n");
    goto debut;
    return 0;
}
