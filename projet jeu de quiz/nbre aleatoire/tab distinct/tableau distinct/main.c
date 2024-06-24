#include <stdio.h>
#include <stdlib.h>
int distinct(int t[],int i)
{
    int j=0;
    int s=0;
    while((j!=i)&&(s==0))
    {
        if (t[i]==t[j])
        {
            s=1;
            break;
        }

        j++;
    }
    return s;
}

int main()
{
    int tab[6];
    int k;
    tab[0]=rand() % 6 + 0;
    for(k=1;k<6;k++)
    {
        do
        {
            tab[k]=rand() % 6 + 0;
        }while (distinct(tab,k)==1);


    }
    for(k=0;k<6;k++)
        printf("%d \n",tab[k]);
    return 0;
}
