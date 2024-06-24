#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moy;
    printf("donner la moyenne \n");
    scanf("%f",&moy);
    do
    {

        if (moy>20)
            {
                printf("veuillez saisir une valeur plus petite \n");
                scanf("%f",&moy);}
        else
            if(moy<0)
                {
                    printf("veuillez saisir une valeur plus grande \n");
                    scanf("%f",&moy);}
    }while ((moy<0)||(moy>20));
    printf("bravo \n");
    return 0;
}
