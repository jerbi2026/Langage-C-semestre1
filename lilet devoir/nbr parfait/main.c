#include <stdio.h>
#include <stdlib.h>



int nbr_parfait(int n)
{
    int s=0;
    int d=1;
    int x;
    while(d<=n)
    {
        if((n%d)==0)

        {
            s=s+d;
        }
        d++;
    }
    if(s==2*n)
    {
        x=0;
    }
    else
        if(s==3*n)
            x=1;
        else
            x=2;
    return x;
}
void affiche()
{
    int i;
    printf("les nombres 2-parfaits\n");
    for(i=2;i<10000;i++)
    {
        if (nbr_parfait(i)==0)
            printf("%d\t",i);
    }
    printf("\n**************************\n");
    printf("les nombres 3-parfaits\n");
    for(i=2;i<10000;i++)
    {
        if (nbr_parfait(i)==1)
            printf("%d\t",i);
    }


}

int main()
{
    affiche();
    printf("\n*************************\n");
    return 0;
}
