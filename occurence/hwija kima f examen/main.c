#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct employee
{
    char nom[100];
    char prenom[100];
    float salary;

}employee;
employee emp[5];

void saisi()
{
    int i;
    for(i=0;i<5;i++)
    {
      printf("les coordonnees de l'employee %d\n",i+1);
      printf("le nom:\n");
      scanf("%s",emp[i].nom);
      printf("le prenom:\n");
      scanf("%s",emp[i].prenom);
      printf("salary= \n");
      scanf("%f",&emp[i].salary);
      printf("----------------------\n");

    }
}

void tri(employee emp[])
{
    int x=0;
    float aux;
    char aux1[100];
    char aux2[100];
    while(x==0)
    {
        x=1;
        for(int i=0;i<5;i++)
        {
            if (emp[i].salary>emp[i+1].salary)
            {
               aux=emp[i].salary ;
               emp[i].salary=emp[i+1].salary;
               emp[i+1].salary=aux;
               strcpy(aux1,emp[i].nom);
               emp[i].nom[0]='/0';
               strcpy(emp[i].nom,emp[i+1].nom);
               emp[i+1].nom[0]='/0';
               strcpy(emp[i+1].nom,aux1);
               strcpy(aux2,emp[i].prenom);
               emp[i].prenom[0]='/0';
               strcpy(emp[i].prenom,emp[i+1].prenom);
               emp[i+1].prenom[0]='/0';
               strcpy(emp[i+1].prenom,aux2);
               x=0;
            }
        }
    }
    for (int i=0;i<5;i++)
    {
        printf("les coordonnees de employee %d\n",i+1);
        printf("nom: %s\n",emp[i].nom);
        printf("prenom: %s\n",emp[i].prenom);
        printf("salary:%f\n",emp[i].salary);
        printf("----------------------\n");
    }
}

int main()
{
    saisi();
    tri(emp);
    return 0;
}
