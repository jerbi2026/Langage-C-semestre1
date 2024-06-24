#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100];
    int i,j;
    for( i=0;i<5;i++)
    {
        printf("t[%d]=\n",i+1);
        scanf("%d",&t[i]);
    }
    int x=0;
    int aux;
    while(x==0)
    {
        x=1;
        for(j=0;j<5;j++)
        {
           if(t[j]>t[j+1])
           {
               aux=t[j];
               t[j]=t[j+1];
               t[j+1]=aux;
               x=0;
           }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d\n",t[i]);
    }

    return 0;
}
