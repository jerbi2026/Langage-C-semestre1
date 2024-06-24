#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int user_code;
int achet_code,achet_quant;
int vend_code,vend_quant;
typedef struct produits
{
    int code;
    char design[100];
    float prix_v;
    int quant;
}produit;
produit prod[100];

void saisi()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("les infos du produit %d\n",i+1);
        do
        {
            printf("le code :\n");
            scanf("%d",&prod[i].code);
        }while (distinct(prod,i)==1);
        printf("designation:\n");
        scanf("%s",prod[i].design);
        printf("donner son prix de vente\n");
        scanf("%f",&prod[i].prix_v);
        do
        {
            printf("la quantite\n");
            scanf("%d",&prod[i].quant);
        }while(prod[i].quant<0);
        printf("-------------------------\n");
    }
}


void affiche()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("les coordonnee de produit %d\n",i+1);
        printf("le code: %d\n",prod[i].code);
        printf("la designation: %s \n",prod[i].design);
        printf("prix de vente: %.2f\n",prod[i].prix_v);
        printf("la quantite: %d\n",prod[i].quant);
        printf("--------------------------\n");
    }
}
int distinct(produit prod[],int y)
{
    int j=0;
    int x=0;
    while((j!=y) && (x==0))
    {
        if (prod[y].code==prod[j].code)
        {
            x=1;
        }
        else
            j++;
    }
    return x;
}

void affiche_prdt_rup(produit prod[])
{
    int i;
    printf("les produits rupture de stock\n");
    for (i=0;i<5;i++)
    {
        if(prod[i].quant==0)
        {
             printf("les coordonnee de produit %d\n",i+1);
            printf("le code: %d\n",prod[i].code);
            printf("la designation: %s \n",prod[i].design);
            printf("prix de vente: %.2f\n",prod[i].prix_v);
            printf("la quantite: %d\n",prod[i].quant);
            printf("--------------------------\n");
        }
    }
}

void recherche_prod(produit prod[], int user_code)
{
    printf("donner le code du produit a rechercher\n");
    scanf("%d",&user_code);
    int i=0;
    while(i<5)
    {
        if(prod[i].code==user_code)
        {
            printf("les infos de produit a rechercher\n");
            printf("le code: %d\n",prod[i].code);
            printf("la designation: %s \n",prod[i].design);
            printf("prix de vente: %.2f\n",prod[i].prix_v);
            printf("la quantite: %d\n",prod[i].quant);
            printf("--------------------------\n");
            break;
        }
        else
            i++;
    }
    if (i==5)
    {
        printf("le produit que vous recherchez n'existe pas\n");
    }
}
void acheter(produit prod[],int achet_code, int achet_quant)
{
    printf("donnez le code de produit que vous voulez achetez \n");
    scanf("%d",&achet_code);
    printf("donner la quantite \n");
    scanf("%d",&achet_quant);
    int i;
    for(i=0;i<5;i++)
    {
        if(prod[i].code==achet_code)
        {
            prod[i].quant=prod[i].quant+achet_quant;
            break;
        }
    }
}
void vendre(produit prod[], int vend_code , int vend_quant)
{
    printf("donner le code de produit a vendre \n");
    scanf("%d",&vend_code);
    printf("donner la quantite a vendre\n");
    scanf("%d",&vend_quant);
    int i;
    for(i=0;i<5;i++)
    {
        if (prod[i].code==vend_code)
        {
            prod[i].quant=prod[i].quant-vend_quant;
            printf("le montant a payer : %.2f\n",vend_quant*prod[i].prix_v);
        }
    }
}
void trier(produit prod[])
{
    int x=0;
    int aux, aux1;
    float aux2;
    char aux3[]="";
    while(x==0)
    {
        x=1;
        for(int i=0;i<5;i++)
        {
            if (prod[i].quant>prod[i+1].quant)
            {
                aux=prod[i].code;
                prod[i].code=prod[i+1].code;
                prod[i+1].code=aux;


                aux1=prod[i].quant;
                prod[i].quant=prod[i+1].quant;
                prod[i+1].quant=aux1;


                aux2=prod[i].prix_v;
                prod[i].prix_v=prod[i+1].prix_v;
                prod[i+1].prix_v=aux2;

                strcpy(aux3,prod[i].design);
                prod[i].design[100]="";
                strcpy(prod[i].design,prod[i+1].design);
                prod[i+1].design[100]="";
                strcpy(prod[i+1].design,aux3);

                x=0;

            }

        }
    }
    for(int i=0;i<5;i++)
    {
       printf("les coordonnee de produit %d\n",i+1);
        printf("le code: %d\n",prod[i].code);
        printf("la designation: %s \n",prod[i].design);
        printf("prix de vente: %.2f\n",prod[i].prix_v);
        printf("la quantite: %d\n",prod[i].quant);
        printf("--------------------------\n");
    }

}


int main()
{
    saisi();
    printf("----------------------------\n");
    affiche();
    printf("----------------------------\n");
    affiche_prdt_rup(prod);
    printf("----------------------------\n");
    recherche_prod(prod,user_code);
    printf("----------------------------\n");
    acheter(prod,achet_code,achet_quant);
    printf("----------------------------\n");
    vendre(prod,vend_code,vend_quant);
    printf("----------------------------\n");
    trier(prod);
    printf("----------------------------\n");
    return 0;
}
