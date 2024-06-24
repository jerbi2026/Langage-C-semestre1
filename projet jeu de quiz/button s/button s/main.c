#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct game
{
    int s;
    char q;

}game;


char score[7][100]={
"votre score est 100.000$",
"votre score est 200.000$",
"votre score est 300.000$",
"votre score est 450.000$",
"votre score est 600.000$",
"votre score est 750.000$",
"votre score est 1.000.000$"};
game gm1 , gm2 , gm3 , gm4 , gm5 , gm6 , gm7 ;
void affiche()
{
    int i ;
    printf("\n \n \n");
    for (i=0;i<50;i++)
        printf("*");
    printf("\n \n \n");
}
void final_q()
{
    int i ;
    for (i=0;i<50;i++)
        printf("*");
    printf("\n");
    printf("\t \tTHE FINAL QUESTION......\n");
    printf("\t \t    YOU CAN DO IT \n");
    for (i=0;i<50;i++)
        printf("*");
    printf("\n \n \n");

}


int s_max ;


int main()
{
    printf("\t     we will start the first step\n");
    printf("\t \t i hope you are ready");
    affiche();



    printf("QUESTION 1:\t what's the country host of World Cup 2022 ?\n");
    printf(" A-Qatar \t B-Brazil \n C-Russia \t D-Spain \n");
    printf("your answer : \t");
    debut1:
    scanf("%c",&gm1.q);
    if (toupper( gm1.q )=='A')
    {
        printf("GOOD JOB \n let's move the next question\n");
        printf("%s \n",score[0]);
        gm1.s=100000;
        s_max=100000;
    }
    else
        if ((toupper( gm1.q )=='B') || (toupper( gm1.q )=='C') || (toupper( gm1.q )=='D'))
        {
            printf("SORRY! Wrong answer you have lost \n");
            printf("your score is 0\n");
            gm1.s=0;
            s_max=0;
        }
        else
            {
                goto debut1;
            }
    affiche();



    printf("QUESTION 2:\t Who won the World Cup 2014 ?\n");
    printf(" A-Argentine \t B-Germany \n C-France \t D-Italy \n");
    printf("your answer : \t");
    debut2:
    scanf("%c",&gm2.q);
    if (toupper( gm2.q )=='B')
    {
        printf("GOOD JOB \n let's move the next question\n");
        printf("%s \n",score[1]);
        gm2.s=200000;
        s_max=200000;
    }
    else
        if ((toupper( gm2.q )=='A') || (toupper( gm2.q )=='C') || (toupper( gm2.q )=='D'))
        {
            printf("SORRY! Wrong answer you have lost \n");
            printf("your score become 0\n");
            gm2.s=0;
        }
        else
            {
                goto debut2;
            }
    affiche();



    printf("QUESTION 3:\t When Tunisia football team played the World Cup  ?\n");
    printf(" A-2010 \t B-2014 \n C-1996 \t D-2006 \n");
    printf("your answer : \t");
    debut3:
    scanf("%c",&gm3.q);
    if (toupper( gm3.q )=='D')
    {
        printf("GOOD JOB \n let's move the next question\n");
        printf("%s \n",score[2]);
        gm2.s=300000;
        s_max=300000;
    }
    else
        if ((toupper( gm3.q )=='A') || (toupper( gm3.q )=='C') || (toupper( gm3.q )=='B'))
        {
            printf("SORRY! Wrong answer you have lost \n");
            printf("your score become 0\n");
            gm3.s=0;
        }
        else
            {
                goto debut3;
            }
    affiche();


    printf("        we move to the next step\n");
    printf("\t  i hope you are ready");
    affiche();


    printf("QUESTION 4:\t Who scored most goal in World Cup 2014 ?\n");
    printf(" A-C.Ronaldo \t B-James Rodrigues \n C-Muller \t D-Messi(the greatest of all time) \n");
    printf("your answer : \t");
    debut4:
    scanf("%c",&gm4.q);
    if (toupper( gm4.q )=='C')
    {
        printf("GOOD JOB \n let's move the next question\n");
        printf("%s \n",score[3]);
        gm4.s=450000;
        s_max=450000;
    }
    else
        if ((toupper( gm4.q )=='B') || (toupper( gm4.q )=='A') || (toupper( gm4.q )=='D'))
        {
            printf("SORRY! Wrong answer you have lost \n");
            printf("your score become 0\n");
            gm4.s=0;
        }
        else
            {
                goto debut4;
            }
    affiche();


    printf("QUESTION 5:\t Which country won the 3rd place in World cup 2018 ?\n");
    printf(" A-Uruguay \t B-Brazil \n C-Belguim \t D-England \n");
    printf("your answer : \t");
    debut5:
    scanf("%c",&gm5.q);
    if (toupper( gm5.q )=='C')
    {
        printf("WELL DONE ! \n let's move the next question\n");
        printf("%s \n",score[4]);
        gm5.s=600000;
        s_max=600000;
    }
    else
        if ((toupper( gm5.q )=='B') || (toupper( gm5.q )=='A') || (toupper( gm5.q )=='D'))
        {
            printf("SORRY! Wrong answer you have lost \n");
            printf("your score become 0\n");
            gm5.s=0;
        }
        else
            {
                goto debut5;
            }
    affiche();


    printf("QUESTION 5:\t Who won the best player in World Cup 1998 ?\n");
    printf(" A-Zidane \t B-Ronaldo \n C-Owen \t D-Rivaldo \n");
    printf("your answer : \t");
    debut6:
    scanf("%c",&gm6.q);
    if (toupper( gm6.q )=='A')
    {
        printf("WELL DONE ! \n let's move the next and the FINAL question\n");
        printf("%s \n",score[5]);
        gm6.s=750000;
        s_max=750000;
    }
    else
        if ((toupper( gm6.q )=='B') || (toupper( gm6.q )=='C') || (toupper( gm6.q )=='D'))
        {
            printf("SORRY! Wrong answer you have lost \n");
            printf("your score become 0\n");
            gm6.s=0;
        }
        else
            {
                goto debut6;
            }
    affiche();

    final_q();
    printf("FINAL QUESTION : \nHow many goals and assits did MARADONA achieve in 1986\n");
    printf(" A- 5 Goals and 3 Assits\n B- 6 Goals and 4 Assits \n C- 3 Goals and 5 Assists \n D- 5 Goals and 5 Assists \n E- 4 Goals and 5 Assits \n F- 7 Goals and 3 Assists \n ");
    printf("\t \tTAKE YOUR TIME ! it's not easy \n");
    printf("your GOLDEN answer : \t");
    debut7:
    scanf("%c",&gm7.q);
    if (toupper( gm7.q )=='D')
    {
        printf("\t \tYOU BECOME  A MILLIONAIRE !!!!!!!!!!!!! \n");
        printf("%s",score[6]);
        printf("\n");
        s_max=1000000;

    }
    else
        if ((toupper( gm7.q )=='B') || (toupper( gm7.q )=='C') || (toupper( gm7.q )=='A') || (toupper( gm7.q )=='E') || (toupper( gm7.q )=='F'))
        {
            printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
            gm7.s=0;

        }
        else
            goto debut7;
    printf("votre score maximal est %dpts",s_max);




    return 0;
}
