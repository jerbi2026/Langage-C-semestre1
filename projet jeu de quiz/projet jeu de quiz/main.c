#include <stdio.h>
#include <stdlib.h>
#define x 40
#include <ctype.h>
#include <string.h>
int i,s_max=0;
char jeu[1];

void affiche1()
{
   for(i=0;i<5;i++)
        printf(" ");
   for (i=0;i<x;i++)
        printf("-");
    printf("\n");
    for(i=0;i<20;i++)
        printf(" ");
   printf("JEU DE QUIZ EN C");
   printf("\n");
   for(i=0;i<5;i++)
        printf(" ");
   for (i=0;i<x;i++)
        printf("-");
    printf("\n");
    for(i=0;i<5;i++)
        printf(" ");
    for (i=0;i<x;i++)
        printf("-");
    printf("\n");
    for(i=0;i<10;i++)
        printf(" ");
    printf("BECOME A MILLIONAIRE!!!!!!!!!! \n");
    for(i=0;i<5;i++)
        printf(" ");
    for (i=0;i<x;i++)
        printf("-");
    printf("\n");
}

void final_q()
{
    for (i=0;i<50;i++)
        printf("*");
    printf("\n");
    printf("\t \tTHE FINAL QUESTION......\n");
    printf("\t \t    YOU CAN DO IT \n");
    for (i=0;i<50;i++)
        printf("*");
    printf("\n \n \n");

}

void affiche()
{
    printf("\n \n \n");
    for (i=0;i<50;i++)
        printf("*");
    printf("\n \n \n");
}

void affiche2()
{
    for (i=0;i<45;i++)
        printf("-");
    printf("\n");
    printf("> Press S to start the game\n");
    printf("> Press V to view the highest score\n");
    printf("> Press R to reset score \n");
    printf("> Press H for help \n");
    printf("> Press Q to quit\n");
    for (i=0;i<45;i++)
        printf("-");
    printf("\n");
}

void button_h()
{
    printf("WE WILL SHOW YOU THE RULES\n");
    printf("\n");
    printf("FIRST RULE:\n if you would participate, you have to press s\n");
    for (i=0;i<75;i++)
        printf("-");
    printf("\n");
    printf("SECOND RULE:\n there are two tours to pass\n");
    printf("\t");
    printf("FIRST TOUR\n");
    printf(">there 10 questions to answer, each question answered make you gain 50 000 dollars \n");
    printf("\t");
    printf("SECOND TOUR\n");
    printf(">there 10 questions to answer but make sure that these questions are difficult\n");
    printf(">don't forget each question answered make you gain 50 000 dollars \n");
    printf("\n");
    printf(">the game finish if you reach \t  1.000.000 \t dollars \n");
    for (i=0;i<75;i++)
        printf("-");
    printf("\n");
    printf("THIRD RULE:\t you can't continue the game if you failed in question\n");
    printf("i hope you understood the game and i wish you the win \n");
    for (i=0;i<75;i++)
        printf("-");
    printf("\n");
    for(i=0;i<3;i++)
        printf("\t");
    printf("GOOD LUCK \t :)\n");

}

int button_s(int s_max)
{

    typedef struct game
    {
        int s;
        char q;

    }game;

    char score[20][50]={
    "votre score est 50.000pts",
    "votre score est 100.000pts",
    "votre score est 150.000pts",
    "votre score est 200.000pts",
    "votre score est 250.000pts",
    "votre score est 300.000pts",
    "votre score est 350.000pts",
    "votre score est 400.000pts",
    "votre score est 450.000pts",
    "votre score est 500.000pts",
    "votre score est 550.000pts",
    "votre score est 600.000pts",
    "votre score est 650.000pts",
    "votre score est 700.000pts",
    "votre score est 750.000pts",
    "votre score est 800.000pts",
    "votre score est 850.000pts",
    "votre score est 900.000pts",
    "votre score est 950.000pts",
    "votre score est 1.000.000pts"
   };
    game gm[20] ;


    printf("\t     we will start the first step\n");
    printf("\t \t i hope you are ready");
    affiche();

    int j=0;
    while(j<20)
    {
        printf("QUESTION 1:\t what's the country host of World Cup 2022 ?\n");
        printf(" A-Qatar \t B-Brazil \n C-Russia \t D-Spain \n");
        printf("your answer : \t");
        debut1:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='A')
        {
            printf("GOOD JOB \n let's move the next question\n");
            printf("%s \n",score[0]);
            s_max=50000;
            j++;
        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='D'))
            {
                printf("SORRY! Wrong answer you have lost \n");
                printf("your score is 0\n");
                s_max=0;
                break;
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
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='B')
        {
            printf("GOOD JOB \n let's move the next question\n");
            printf("%s \n",score[1]);
            s_max=100000;
            j++;
        }
        else
            if ((toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='D'))
            {
                printf("SORRY! Wrong answer you have lost \n");
                printf("your score become 0\n");
                break;
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
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='D')
        {
            printf("GOOD JOB \n let's move the next question\n");
            printf("%s \n",score[2]);
            s_max=150000;
            j++;
        }
        else
            if ((toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='B'))
            {
                printf("SORRY! Wrong answer you have lost \n");
                printf("your score become 0\n");
                break;
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
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='C')
        {
            printf("GOOD JOB \n let's move the next question\n");
            printf("%s \n",score[3]);
            s_max=200000;
            j++;
        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='D'))
            {
                printf("SORRY! Wrong answer you have lost \n");
                printf("your score become 0\n");
                break;
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
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='C')
        {
            printf("WELL DONE ! \n let's move the next question\n");
            printf("%s \n",score[4]);
            s_max=250000;
            j++;
        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='D'))
            {
                printf("SORRY! Wrong answer you have lost \n");
                printf("your score become 0\n");
                break;
            }
            else
                {
                    goto debut5;
                }
        affiche();

        printf("QUESTION 6:\t Who won the best player in World Cup 1998 ?\n");
        printf(" A-Zidane \t B-Ronaldo \n C-Owen \t D-Rivaldo \n");
        printf("your answer : \t");
        debut6:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='A')
        {
            printf("WELL DONE ! \n let's move the next and the FINAL question\n");
            printf("%s \n",score[5]);
            s_max=750000;
            j++;
        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='D'))
            {
                printf("SORRY! Wrong answer you have lost \n");
                printf("your score become 0\n");
                break;
            }
            else
                {
                    goto debut6;
                }
        affiche();

        printf("QUESTION 7 : \nHow many goals and assits did MARADONA achieve in 1986\n");
        printf(" A- 5 Goals and 3 Assits\n B- 6 Goals and 4 Assits \n C- 3 Goals and 5 Assists \n D- 5 Goals and 5 Assists \n E- 4 Goals and 5 Assits \n F- 7 Goals and 3 Assists \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut7:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='D')
        {
            printf("\t \tYOU BECOME  A MILLIONAIRE !!!!!!!!!!!!! \n");
            printf("%s",score[6]);
            printf("\n");
            s_max=350000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='E') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut7;

    affiche();

        printf("QUESTION 8 : \nHow many goals and assits did MESSI achieve in 2014\n");
        printf(" A- 4 Goals and 1 Assits\n B- 3 Goals and 2 Assits \n C- 4 Goals and 2 Assists \n D- 5 Goals and 3 Assists  \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut8:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='A')
        {
            printf("\t \tGood job !!!!!!!!!!!!! \n");
            printf("%s",score[7]);
            printf("\n");
            s_max=400000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='D'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut8;

    affiche();

        printf("QUESTION 9 : \nWhere World Cup 2002 get played\n");
        printf(" A- South Africa\n B- Germany \n C- Italy \n D- South Corea \n E- South Corea + Japan \n F- Japan \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut9:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='E')
        {
            printf("\t \tYOU ARE RIGHT !!!!!!!!!!!!! \n you are doing well \n");
            printf("%s",score[8]);
            printf("\n");
            s_max=450000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='D') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut9;

    affiche();

    printf("QUESTION 10 : \nHow many goals and assits did MBAPPE achieve in World Cup 2022\n");
        printf(" A- 5 Goals and 3 Assits\n B- 8 Goals and 4 Assits \n C- 7 Goals and 5 Assists \n D- 8 Goals and 2 Assists \n E- 8 Goals and 3 Assits \n F- 7 Goals and 3 Assists \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut10:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='D')
        {
            printf("\t \tYou did well !!!!!!!!!!!!! \n");
            printf("%s",score[9]);
            printf("\n");
            s_max=500000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='E') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut10;

    affiche();

    printf("QUESTION 11 : \nHow many red cards did Brazil get in the world cup\n");
        printf(" A- 9\n B- 10 \n C- 12 \n D- 11 \n E- 15 \n F- 8 \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut11:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='D')
        {
            printf("\t \tGOOD JOB !!!!!!!!!!!!! \n");
            printf("%s",score[10]);
            printf("\n");
            s_max=550000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='E') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut11;

    affiche();

    printf("QUESTION 12 : \nWho is the player who has most yellow cards \n");
        printf(" A- Ramos(spain)\n B- Mascherano (argentine) \n C- Mathaus (germany) \n D- Maradona (argentine) \n E- zidane (france) \n  ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut12:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='B')
        {
            printf("\t \tYOU ARE DOING WELL !!!!!!!!!!!!! \n");
            printf("%s",score[11]);
            printf("\n");
            s_max=600000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='D') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='E') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut12;

    affiche();

    printf("QUESTION 13 : \nWhich country did win the world cup 1930\n");
        printf(" A- Italy\n B- Germany \n C- Argentine \n D- Brazil \n E- 4 Urguay \n F- France \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut13:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='E')
        {
            printf("\t \tOne other step to the final !!!!!!!!!!!!! \n");
            printf("%s",score[12]);
            printf("\n");
            s_max=650000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='D') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut13;

    affiche();

    printf("QUESTION 14 : \nHow many goals did germany scored in the World Cup\n");
        printf(" A- 150\n B- 161 \n C- 149 \n D- 170 \n E- 172 \n F- 171 \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut14:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='F')
        {
            printf("\t \tWell done !!!!!!!!!!!!! \n");
            printf("%s",score[13]);
            printf("\n");
            s_max=700000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='E') || (toupper( gm[j].q )=='D'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut14;

    affiche();

    printf("QUESTION 15 : \nWho is the marocan player who scored against Portugal in World Cup 2022\n");
        printf(" A- Ounahi\n B- Ziyech \n C- Dari \n D- Ensiry \n E- Achref hakimi \n F- Boufal \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut15:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='D')
        {
            printf("\t \tWell done !!!!!!!!!!!!! \n");
            printf("%s",score[14]);
            printf("\n");
            s_max=750000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='E') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut15;

    affiche();

    printf("QUESTION 16 : \nWho did win the best player in World Cup 2002\n");
        printf(" A- Ronaldo\n B- Ronaldinho \n C- Mathaus \n D- Kahn \n E- Kaka \n F- Roberto Carlos \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut16:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='D')
        {
            printf("\t \tYOU ARE DOING WELL!!!!!!!!!!!!! \n");
            printf("%s",score[15]);
            printf("\n");
            s_max=800000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='E') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut16;

    affiche();

    printf("QUESTION 17 : \nWhich is the right score in World Cup Final 2006 France vs Italy\n");
        printf(" A- Italy 1-0 France\n B- Italy 0-1 France \n C- Italy 1-1 France (tirs au but 5-4) \n D- Italy 1-1 France (tirs au but 5-3) \n E- Italy 2-1 France  \n F- Italy 1-1 France (tirs au but 4-2) \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut17:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='D')
        {
            printf("\t \tRIGHT ANSWER !!!!!!!!!!!!! \n");
            printf("%s",score[16]);
            printf("\n");
            s_max=850000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='E') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut17;

    affiche();

    printf("QUESTION 18 : \nAgainst who Roberto Baggio did miss the penalty in World Cup 1994\n");
        printf(" A-Brazil\n B- USA \n C- Argentine \n D- Germany\n E- Italy \n F- Spain \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut18:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='A')
        {
            printf("\t \tYOU ARE RIGHT  !!!!!!!!!!!!! \n two more steps to be billionaire\n");
            printf("%s",score[17]);
            printf("\n");
            s_max=900000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='D') || (toupper( gm[j].q )=='E') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut18;

    affiche();

    printf("QUESTION 19 : \nWho did score the most goals in World CUP 1958\n");
        printf(" A- Pele\n B- La fonataine \n C- Maradona \n D- Platini \n E- Cesar \n F- Messi \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut19:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='B')
        {
            printf("\t \tI CAN'T BELIEVE you are doing well !!!!!!!!!!!!! \n");
            printf("%s",score[18]);
            printf("\n");
            s_max=950000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='D') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='E') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut19;

    affiche();

    final_q();
    printf("FINAL QUESTION : \nWho is the player who died in the WOrld Cup\n");
        printf(" A- Roberto Baggio\n B- Maradona \n C- Esebeuo \n D- Crujf \n E- Escobar  \n F- Platini \n ");
        printf("\t \tTAKE YOUR TIME ! it's not easy \n");
        printf("your GOLDEN answer : \t");
        debut20:
        scanf("%c",&gm[j].q);
        if (toupper( gm[j].q )=='E')
        {
            printf("\t \tYOU BECOME  A MILLIONAIRE !!!!!!!!!!!!! \n");
            printf("%s",score[19]);
            printf("\n");
            s_max=1000000;
            j++;

        }
        else
            if ((toupper( gm[j].q )=='B') || (toupper( gm[j].q )=='C') || (toupper( gm[j].q )=='A') || (toupper( gm[j].q )=='D') || (toupper( gm[j].q )=='F'))
            {
                printf("SORRY! it's not the right answer \t (you did well) \n NEXT TIME :)\n");
                break;

            }
            else
                goto debut20;

    affiche();
    }

    return s_max;


}

int main()
{
    FILE *scoremax;
    scoremax=fopen("scoremax.txt","a");
    fprintf(scoremax,"%d",0);
    fclose(scoremax);
    affiche1();
    debut:
    affiche2();
    scanf("%s",jeu);
    while (jeu[0]!='q')
    {
        if (toupper( jeu[0] )=='H')
        {
            jeu[0]='\0';
            printf("\a");
            button_h();
                /*help*/

            goto debut;
        }
        else
            if (toupper( jeu[0] )=='S')
            {
                jeu[0]='\0';
                printf("\a");
                s_max=button_s(s_max);
                    /*jeu*/
                if(s_max>atoi(scoremax))
                {
                    scoremax=fopen("scoremax.txt","w");
                    fclose(scoremax);
                    scoremax=fopen("scoremax.txt","a");
                    fprintf(scoremax,"%d",s_max);
                    fflush(stdin);
                    fclose(scoremax);
                }
                goto debut;
            }
            else
                if (toupper( jeu[0] )=='V')
                    {
                        jeu[0]='\0';
                        printf("\a");
                        scoremax=fopen("scoremax.txt","r");
                        printf("votre score maximal est \n");
                        char m;
                        while((m=fgetc(scoremax))!=EOF)
                        {
                            printf("%c",m);
                        }
                        printf("pts \n");
                        fclose(scoremax);
                        goto debut;
                    }

                else
                    if (toupper( jeu[0] )=='R')
                        {
                            jeu[0]='\0';
                            printf("\a");
                            scoremax=fopen("scoremax.txt","w");
                            if (scoremax!=0)
                            printf("your score max become 0pts\n");
                            fclose(scoremax);
                            goto debut;
                        }
    }

    if (toupper( jeu[0] )=='Q')
        exit( EXIT_SUCCESS );
    return EXIT_SUCCESS;


}
