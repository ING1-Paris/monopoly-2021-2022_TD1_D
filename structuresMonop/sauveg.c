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
        char emplace[40]="../MONOPsauvegardes/data."; //emplacement fichier
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
    }
    retourAuMenu();
}
///chargement d'une structure d'une partie PAS ENCORE FINIE
void charge(t_jeu* monjeu, int* succes)
{
    FILE* file=NULL;
    char nom[10];
    char emplacement[]="../MONOPsauvegardes/data.";
    effacerConsole();
    printf ("\nsaisir un nom de la sauvegarde (10caracteres max): ");
    saisieChaine(10, &nom);
    strcat(emplacement ,nom);

    file = fopen(emplacement,"rb+");
    if (file==NULL)
    {
        printf("erreur d'ouverture fichier pour le chargement\n");
        printf("\nNB: Verifiez la présence de votre partie dans le dossier ''MONOPsauvegardes''\n");
        *succes=0; //reproposer un choix
    }
    else
    {
        fread(monjeu,sizeof(t_jeu),1,file);
        //verif
        printf("SP Nb Joueurs: %d\nPseudoJoueur en cours: %s\nEtape en cours :%d\n",monjeu->nbJoueur, monjeu->tabJoueurND[monjeu->tourDe].pseudo,monjeu->etape);
        fclose(file);
        *succes=1;
        printf("\chargement termine");
    }
    retourAuJeu();
    //retourAuMenu();
}
