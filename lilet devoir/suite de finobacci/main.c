#include <stdio.h>
#include <stdlib.h>

int u1=1,u2=1;
int n;
void saisi()
{
    do
    {
        printf("donner n\n");
        scanf("%d",&n);
    }while(n<=2);
}
void calcul()
{
    int tab[100];
    int i;
    tab[0]=1;
    tab[1]=1;
    for(i=2;i<100;i++)
    {
        tab[i]=tab[i-1]+tab[i-2];
        if (i==n-1)
        {
            tab[i]=tab[i-1]+tab[i-2];
            printf("le terme U%d = %d",n,tab[i]);
            break;
        }

    }
}


int main()
{
    debut:
    saisi();
    calcul();
    printf("\n-------------------\n");
    goto debut;
    return 0;
}
