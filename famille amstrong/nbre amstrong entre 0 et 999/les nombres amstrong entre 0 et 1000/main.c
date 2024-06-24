#include <stdio.h>
#include <stdlib.h>
void affiche()
{
    int i;
    printf("les nbres amstrong entre 0 et 1000 sont: \n");
    for (i=0;i<1000;i++)
        if (ams(i)==1)
            printf("%d \t",i);
}
int ams(int x)
{
    int v , a , b ,c ;
    a=x/100;
    b=(x%100)/10;
    c=x%10;
    v=puissance(a)+puissance(b)+puissance(c);
    if (v==x)
        return 1;
    else
        return 0;

}
int puissance(int w)
{
    int j,p=1;
    for (j=0;j<3;j++)
        p=p*w;
    return p ;
}
int main()
{
    affiche();
    return 0;
}
