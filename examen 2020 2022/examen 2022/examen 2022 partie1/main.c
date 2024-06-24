#include <stdio.h>
#include <stdlib.h>
/*int n=5;
void fct(int);
int main()
{
    int n=3;
    fct(n);
    return 0;
}
void fct(int p)
{
    printf("%d %d",n,p);
}
affichage 5 3
*/


int nbr_tir;
float facture=0;
void saisi()
{
    do
    {
        printf("donner nbre de tirage \n");
        scanf("%d",&nbr_tir);

    }while (nbr_tir<0);
}
void facture_imp(float facture, int nbr_tir)
{
   int i ;
   if(nbr_tir<=20)
   {
       if (nbr_tir>10)
       {
           for(i=1;i<=10;i++)
           {
               facture=facture+2;
           }
           for(i=1;i<=nbr_tir-10;i++)
           {
               facture=facture+1.5;
           }
       }
       else
       {
           for(i=1;i<=nbr_tir;i++)
           {
               facture=facture+2;
           }
       }
   }
   else
   {
        facture=facture+20+15;
        for(i=1;i<=nbr_tir-20;i++)
        {
            facture=facture+1;
        }
   }
   printf("votre facture est %.2f\n",facture);


}


int main()
{
    debut:
    saisi();
    facture_imp(facture,nbr_tir);

    goto debut;
    return 0;
}
