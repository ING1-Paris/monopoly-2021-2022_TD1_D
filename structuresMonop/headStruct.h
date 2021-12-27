#ifndef HEADSTRUCT_H_INCLUDED
#define HEADSTRUCT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define MAXJOUEURS 10
#define TAILPSEUDO 10

///donnees par joueur
typedef struct leJoueur
{
    char pseudo[TAILPSEUDO];
    int argent;
    int emplacements;
}t_joueur;

///donnees par case
typedef struct laCase
{
    char nom[20];
    int nCateg; //categories par num
    //seulement pour les rues :
    int appartenance; //par defaut = 0, sinon nPassage du joueur
    int nMaison;
    int nHotel;
}t_case;

///DONNEES DE LA PARTIE
typedef struct jeu
{
    t_joueur tabJoueurND[MAXJOUEURS]; //Tableau de Structure de tous les joueurs
    t_case tabCase[32]; //Tableau de Structure de toutes les cases
    //num de joueur/de case = son indice
    int nbJoueur;
    int nTour; //num de tour

 }t_jeu;

///Sous Programmes
void remplissageNbEtPseudo (int* pNbJ, t_joueur* pTabJoueurs);

#endif // HEADSTRUCT_H_INCLUDED
