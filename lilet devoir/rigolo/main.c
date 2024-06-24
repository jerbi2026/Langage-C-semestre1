#include <stdio.h>
#include <stdlib.h>

void affiche()
{
    int i;
    int n=0;
    printf("les nombres rigolo \n");
    for(i=100;i<1001;i++)
    {
        if (somme_chiff(i)==fact_premier(i))
            {
                printf("%d\t",i);
                n++;
            }
    }
    printf("\n------------\n nbre de valeur %d",n);

}
int somme_chiff(int x)
{
    int a=x/100;
    int b=(x/10)%10;
    int c=x%10;
    int s=0;
    s=s+a+b+c;
    return s;
}
int fact_premier(int x)
{
    int d=1;
    int m=0;
    while(d<=x)
    {
        if ((x%d==0)&&(premier(d)==0))
        {
            if(d>=100 || d<=999)
            {
                m=m+somme_chiff(d);
            }
            if(d<100 || d>=10)
            {
                m=m+somme_chiff_2(d);
            }
            if(d<10)
                m=m+d;
        }
        d++;
    }
    return m;
}
int somme_chiff_2(int y)
{
    int a=y/10;
    int b=y%10;
    int s=0;
    s=s+a+b;
    return s;
}
int premier(int p)
{
    int i;
    int n=1;
    for(i=2;i<p;i++)
    {
        if (p%i==0)
            n++;
    }
    if(n>1)
        return 1;
    else
        return 0;
}


int main()
{
    affiche();
    return 0;
}
