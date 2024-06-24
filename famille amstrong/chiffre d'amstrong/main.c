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
    int r;
    r=(n/100)*(n/100)*(n/100)+((n%100)/10)*((n%100)/10)*((n%100)/10)+(n%10)*(n%10)*(n%10);
    if (r==n)
        return 1;
    else
        return 0;
}
void affiche(int x)
{
    if (x==0)
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

