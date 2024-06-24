#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char ch[10];
int k,n;
void saisi()
{
    do
    {
        printf("donner un nombre \n");
        scanf("%d",&k);
    }while(k<0);
}
void kaprekar(int k , char ch[] , int n)
{
    int i,x,n=1 ;
    x=k;
    while ((x/10)>10)
    {
        x=x/10
    }
}

int main()
{
    saisi();
    kaprekar(k,ch,n);
    return 0;
}
