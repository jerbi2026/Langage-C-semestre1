#include <stdio.h>
#include <stdlib.h>
int a , b , c , somme;
void saisi()
{
    do
    {
        printf("somme=\n");
        scanf("%d",&somme);
    }while(somme<1 && somme>100);
}

void nbr_bil()
{
    a=somme/10;
    b=(somme%10)/5;
    c=((somme%10)%5)/1;
    printf("%d billet 10 , %d billet 5, %d billet 1",a,b,c);

}
int main()
{
    saisi();
    nbr_bil();
    printf("\n****************\n");
    return 0;
}
