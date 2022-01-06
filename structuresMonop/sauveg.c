#include "headStruct.h"

///sauvegarde d'une structure d'une partie
void sauve(t_jeu* monjeu){
    effacerConsole();
    printf("nb de joueurs : %d", monjeu->nbJoueur);
    if ((monjeu->nbJoueur)==0)
    {
        printf("\n\n\t\tVeuillez commencer une partie avant d'enregistrer");
    }
    else
    {
        char nom[10];
        char emplace[40]="c://MONOPsauvegardes/data."; //emplacement fichier
        printf ("\nsaisir un nom pour la sauvegarde (10caracteres max): ");
        saisieChaine(10, &nom);
        // fflush(stdin);
        //gets(nom);
        strcat(emplace,nom);
        printf("lieu de sauvegarde : %s", emplace);
        FILE* file=NULL;
        file = fopen((emplace),"wb");
        printf("\tEnregistrement reussi");
        if (file==NULL)
        {
            printf("erreur d'ouverture fichier pour l'enregistrement\n");
            printf("NB: sauvegarde possible uniquement sur Windows\n");
        }
        else{
            fwrite(monjeu,sizeof(t_jeu),1,file); // params: pointeur struct, taille, nb objets(1structure), file
            fclose(file);
        }
        retourAuMenu();
    }
}
///chargement d'une structure d'une partie PAS ENCORE FINIT
void charge(t_jeu* monjeu, char filenom[], int* succes)
{
    FILE* file=NULL;
    file = fopen("c://MONOPsauvegardes/data.lasauvegar","rb+");
    if (file==NULL)
    {
        printf("erreur d'ouverture fichier pour le chargement\n");
        printf("NB: chargement possible uniquement sur Windows\n");
        *succes=1; //reproposer un choix
    }
    else
    {
        fread(monjeu,sizeof(t_jeu),1,file);
        //verif
        printf("SP Nb Joueurs: %d\nPseudoJoueur1: %s\n",monjeu->nbJoueur, monjeu->tabJoueurND[0].pseudo);
        fclose(file);
        *succes=0;
    }
}
