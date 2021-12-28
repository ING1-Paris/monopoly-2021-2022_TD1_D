#ifndef HEADSTRUCT_H_INCLUDED
#define HEADSTRUCT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define MAXJOUEURS 10
#define TAILPSEUDO 10
#define TAILMESSAGE 80

///donnees par joueur
typedef struct leJoueur
{
    char pseudo[TAILPSEUDO];
    int argent;
    int emplacements; //commence à 0
    int cartePrison; //0 ou 1
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

///DONNEES CARTE (puis creer 2 tableau de struct, son indice=son num)
typedef struct laCarte
{
    char evenement[TAILMESSAGE];
    char consequence[TAILMESSAGE];
    int typeCarte; //0=deplacementAuNumCase 1=eplacementDeXCases 2=gainOuPerteDeX 3=carteSortirPrison
    int deplacementAuNumCase;
    int deplacementDeXCases;
    int gainOuPerteDeX;
}t_carte;

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
void remplissageDebut (int* pNbJ, t_joueur* pTabJoueurs);
void effacerConsole ();


#endif // HEADSTRUCT_H_INCLUDED
