#include <stdio.h>
#include <stdlib.h>
int nbr_tir;
float facture=0.00;

void saisi()
{
    do
    {
        printf("donner le nbre de tirage \n");
        scanf("%d",&nbr_tir);
    }while(nbr_tir<0);
}


void facturation(int nbr_tir)
{
    if (nbr_tir<=10)
    {
        facture=facture+nbr_tir*2;
    }
    else
        if(nbr_tir>10 && nbr_tir<=20)
        {
            facture=facture+20+(nbr_tir-10)*1.5;
        }
        else
            if(nbr_tir>20)
            {
                facture=facture+2*10+1.5*10+(nbr_tir-20)*1;
            }
    printf("votre facture est %.2f",facture);
}
int main()
{
    saisi();
    facturation (nbr_tir);
    return 0;
}
