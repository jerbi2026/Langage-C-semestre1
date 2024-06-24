#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int id_ticket;
    char nom_et_prenom [50];
    int age;
    char genre;
    float prix;
}ticket;
ticket s[86000];
void achat (ticket S[]){
    int i,x;
    for(i=0;i<86000;i++){
        printf("donner votre nom et prenom\n");
        scanf("%s",s[i].nom_et_prenom);
    do{
        printf("donner votre age\n");
        scanf("%d",&s[i].age);
    }while(s[i].age<0);
    do{
        printf("donner votre sexe;taper F si vous etes une femme et H si vous etes un homme\n");
        scanf("%c",&s[i].genre);
    }
    while ((s[i].genre!='F')&& (s[i].genre!='H'));
}
    x=0;
    for(i=0;i<86000;i++){
        s[i].id_ticket=x;
        x=x+1;
 }
    for(i=0;i<86000;i++){
        if((s[i].age<12)||(s[i].age>65)){
            s[i].prix=0;
        }
        else if((s[i].age>=12)&&(s[i].age<=25))
        {
            s[i].prix=30;
        }
        else if ((s[i].age>25)&&(s[i].genre=='H'))
        {
        s[i].prix=60;
        }
    else
    {
        s[i].prix=45;
    }
 }
 }

int main()
{

    achat(s);
    return 0;

}
