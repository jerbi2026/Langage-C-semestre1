#include <stdio.h>
#include <stdlib.h>
int n;
void saisi()
{
    printf("donner n\n");
    scanf("%d",&n);
}
int factrec(int n)
{
    if (n==0)
    {
        return 1;

    }
    else
        return n*factrec(n-1);
}



int main()
{
    saisi();
    factrec(n);
    printf("le factoriel est %d",factrec(n));
    return 0;
}
