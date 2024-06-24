#include <stdio.h>
#include <stdlib.h>

typedef struct position
{
    int pos_c;
    int pos_l;
}pos;
pos pos_r;
int nc,nl;
void saisi()
{
    do
    {
        printf("donner le nombre de colonnes");
        scanf("%d",&nc);
    }while ((nc>20) || (nc<5));
    do
    {
        printf("donner le nombre de lignes");
        scanf("%d",&nl);
    }while ((nl>20) || (nl<5));
}
void position_robot()
{
    do
    {
        printf("donner la position initiale du robot");
        scanf("%d %d",&pos_r.pos_c,&pos_r.pos_l);

    }while (test(pos_r)==1);
}
int test(pos pos_r)
{
    if (pos_r.pos_c>nc)
        return 1;
    if (pos_r.pos_l>nl)
        return 1;
}
void remplacement_robot(pos pos_r)
{
    char remp[1];
    debut:
    printf("-------------------------------\n");
    printf("pour se remplacer vers le haut press A\n");
    printf("pour se remplacer vers le droit press D\n");
    printf("pour se remplacer vers le gauche press Q\n");
    printf("pour se remplacer vers le bas press S\n");
    printf("pour stopper press X\n");

    int j=0;
    printf("--------------------------------\n");
    scanf("%s",remp);
    while(j<10)
    {
        if (toupper(remp)=='A')
        {
        pos_r.pos_l=pos_r.pos_l-1;
        if (test(pos_r)==1)
            {
                printf("vous avez depassé les limites\n");
                break;
            }
        j++;
        remp[0]='\0';
        goto debut;
        }
        if (toupper(remp)=='D')
        {
            pos_r.pos_c=pos_r.pos_c+1;
            if (test(pos_r)==1)
                {
                    printf("vous avez depassé les limites\n");
                    break;
                }
            j++;
            remp[0]='/0';
            goto debut;
        }
        if (toupper(remp)=='Q')
        {
            pos_r.pos_c=pos_r.pos_c-1;
            if (test(pos_r)==1)
            {
                printf("vous avez depassé les limites\n");
                break;
            }
            j++;
            remp[0]='/0';
            goto debut;
        }
        if (toupper(remp)=='S')
        {
        pos_r.pos_l=pos_r.pos_l+1;
        if (test(pos_r)==1)
            {
                printf("vous avez depassé les limites\n");
                break;
            }
        remp[0]='/0';
        j++;
        goto debut;
        }
        if (toupper(remp)=='X')
        {
        break;
        }
    }
    printf("les coordonnées de ce robot est %d %d",pos_r.pos_c,pos_r.pos_l);

}

int main()
{
    saisi();
    position_robot();
    remplacement_robot(pos_r);
    return 0;
}
