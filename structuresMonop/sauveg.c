#include "headStruct.h"

///sauvegarde d'une structure d'une partie
void sauve(t_jeu* monjeu, int* succes){
    char nom[10];
    char emplace[40]="c://MONOPsauvegardes/data."; //emplacement fichier
    printf ("\nsaisir un nom pour la sauvegarde (10caracteres max): ");
    fflush(stdin);
    gets(nom);
	FILE* file=NULL;
	//file = fopen(("c://MONOPsauvegardes/data.Test1"),"wb");
    strcat(emplace, nom);
	file = fopen(emplace,"wb");
	if (file==NULL)
    {
        printf("erreur d'ouverture fichier pour l'enregistrement\n");
        *succes=1; //reproposer un choix
        fclose(file);
    }
    else{
        fwrite(monjeu,sizeof(t_jeu),1,file); // params: pointeur struct, taille, nb objets(1structure), file
        fclose(file);
        *succes=0;
    }
}
///chargement d'une structure d'une partie PAS ENCORE FINIT
void charge(t_jeu* monjeu, char filenom[], int* succes){
    FILE* file=NULL;
    file = fopen("c://MONOPsauvegardes/data.lasauvegar","rb+");
    if (file==NULL)
    {
        printf("erreur d'ouverture fichier pour le chargement\n");
        *succes=1; //reproposer un choix
        fclose(file);
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
