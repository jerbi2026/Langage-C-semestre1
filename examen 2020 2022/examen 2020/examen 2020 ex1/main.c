#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ch[22];
    ch[0]='U';
    ch[1]='n';
    ch[2]='i';
    ch[3]='v';
    ch[4]='e';
    ch[5]='r';
    ch[6]='s';
    ch[7]='i';
    ch[8]='t';
    ch[9]='e';
    ch[10]=' ';
    ch[11]='d';
    ch[12]='e';
    ch[13]=' ';
    ch[14]='C';
    ch[15]='a';
    ch[16]='r';
    ch[17]='t';
    ch[18]='h';
    ch[19]='a';
    ch[20]='g';
    ch[21]='e';
    ch[22]='/0';
    for (int i=strlen(ch);i>=0;i--)
        printf("%c",ch[i]);


    return 0;
}
