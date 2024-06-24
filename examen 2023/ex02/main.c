#include <stdio.h>
#include <stdlib.h>
#include <string.h>



char ch[]="Quelle belle epreuve !";
int main()
{
    int i;
    for(i=0;i<strlen(ch);i++)
    {
        if (ch[i]=='v')
        {
            printf("la position de v est %d\n",i);
            break;
        }


    }
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]=='v')
            ch[i]='u';
        if (ch[i]=='u')
            ch[i]='v';
    }
    puts(ch);

    return 0;
}
