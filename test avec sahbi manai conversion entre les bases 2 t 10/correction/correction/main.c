#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int puiss(int x, int n)
{ int i,res=1;
  for(i=0;i<n;i++)
    res=x*res;
    return res;
}
int char_to_int(char d)
{
 char str[2];
 str[0] = d;
 str[1] = '\0';
 return atoi(str);
}

int convertirEnBase10(char binaire[])
{
    int i;
    int sum=0;
    int dec;
    for(i=strlen(binaire)-1;i>=0;i--)
    {
           dec=char_to_int(binaire[i]);
           //printf("%d\n",dec);
            sum=dec*puiss(2,i)+sum;
           // printf("%d\n",puiss(2,i));
            //printf("%dx2^%d+\n",dec,i);
    }


         return sum;
}

int main()
{
      char binaire[10];

          printf("Enter un nombre binaire ");
          scanf("%s",binaire);
          printf ("%s en base 2 = %d en base 10\n",binaire, convertirEnBase10 (binaire) );

      return 0;
}
