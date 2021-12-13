#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"

void main()
{
int menu;

char file[30];
reclamation tp ,r;

printf("1.ajouter une reclamation\n");
printf("2.modifier une reclamation\n");
printf("3.afficher une reclamation \n");
printf("4.supprimer une reclamation\n");


        printf("donner votre choix");
        scanf("%d",&menu);

    switch(menu)
    {
    case 1:
    ajouter_reclam(file,r);
    break;
    case 2:
        modifier_reclam(file,tp);


    break;
    case 3:
        afficher_reclam(file);


    }


}
