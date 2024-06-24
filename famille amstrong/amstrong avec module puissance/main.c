#include <stdio.h>
#include <stdlib.h>
int n;
void saisi()
{
    do
    {
        printf("donner un nombre ");
        scanf("%d",&n);
    }while(n>999);
    printf("\n");
}
int ams(int n)
{
    int a , b , c ,v;
    a=n/100;
    b=(n%100)/10;
    c=n%10;
    v=puissance(a)+puissance(b)+puissance(c);
    return v;
}
int puissance(int w)
{
    int i,p=1 ;
    for (i=0;i<3;i++)
        p=p*w;
    return p;


}

void affiche(int x)
{
    if (x!=n)
        printf("le nombre %d n'est pas amstrong",n);
    else
        printf("le nombre %d est amstrong",n);
}
int main()
{
    saisi();
    int x;
    x=ams(n);
    affiche(x);


    return 0;
}
