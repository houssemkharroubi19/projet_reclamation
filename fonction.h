#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED

typedef struct
{
    int jour;
    int mois;
    int annee;
}Date;
typedef struct
{
    Date date;
    char nom[20];
    char prenom[20];
    long ID;
    char type_reclamation[30];
    int numero_reclamation;
    char text_reclamation[1000];
}reclamation ;

void ajouter_reclam(char file[],reclamation r);
void modifier_reclam(char file[],reclamation tp);
void afficher_reclam(char file[]);
void supprimer_reclam(char file[],reclamation r);


#endif // FONCTION_H_INCLUDED
