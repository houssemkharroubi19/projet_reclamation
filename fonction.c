#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"

void ajouter_reclam(char file[],reclamation r)
{

    FILE *f;


    f=fopen(file,"a+");
    if(f==NULL)
{
printf("\n impossible d'ouvrir de fichier");
}
else{
    fprintf(f,"%d %s %s %ld %s %d %d %d %s\n",r.numero_reclamation,r.nom,r.prenom,r.ID,r.type_reclamation,r.date.jour,r.date.mois,r.date.annee,r.text_reclamation);
    fclose(f);
}

}

void modifier_reclam(char file[],reclamation tp)
{
    FILE *tmp,*f;
    reclamation r;
    f=fopen(file,"r");
    tmp=fopen("tmp.txt","w+");
    if(f!=NULL)
    {
        while((fscanf(f,"%d %s %s %ld %s %d %d %d %s\n",&r.numero_reclamation,r.nom,r.prenom,&r.ID,r.type_reclamation,&r.date.jour,&r.date.mois,&r.date.annee,r.text_reclamation))!=EOF)
        {
            if(r.numero_reclamation == tp.numero_reclamation)
            {

                fprintf(tmp,"%d %s %s %ld %s %d %d %d %s\n",tp.numero_reclamation,tp.nom,tp.prenom,tp.ID,tp.type_reclamation,tp.date.jour,tp.date.mois,tp.date.annee,tp.text_reclamation);
            }
            else
            {
                fprintf(tmp,"%d %s %s %ld %s %d %d %d %s\n",r.numero_reclamation,r.nom,r.prenom,r.ID,r.type_reclamation,r.date.jour,r.date.mois,r.date.annee,r.text_reclamation);
            }
        }
    fclose(f);
    fclose(tmp);
    }
    else
    {
        printf("ERROR!!!");
    }

    remove(file);
    rename("tmp.txt",file);
}

void afficher_reclam(char file[])
{
    FILE *f;
    reclamation r;
    f=fopen(file,"r");
    if(f==NULL)
    {
        printf("ERROR!!!!!");
    }
    else
    {
       do
        //while((fscanf(f,"%d %s %s %ld %s %d %d %d %s\n",&r.numero_reclamation,r.nom,r.prenom,&r.ID,r.type_reclamation,&r.date.jour,&r.date.mois,&r.date.annee,r.text_reclamation))!=EOF)
        {
            printf("**********************");
            fscanf(f,"%d %s %s %ld %s %d %d %d %s\n",&r.numero_reclamation,r.nom,r.prenom,&r.ID,r.type_reclamation,&r.date.jour,&r.date.mois,&r.date.annee,r.text_reclamation);
            printf("%d %s %s %ld %s %d %d %d %s\n",r.numero_reclamation,r.nom,r.prenom,r.ID,r.type_reclamation,r.date.jour,r.date.mois,r.date.annee,r.text_reclamation);

        }while(f!=EOF);
        fclose(f);
    }


}
