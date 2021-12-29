#ifndef HEADSTRUCT_H_INCLUDED
#define HEADSTRUCT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <conio.h>

#define MAXJOUEURS 10
#define TAILPSEUDO 10
#define TAILMESSAGE 80

///donnees par joueur
typedef struct leJoueur
{
    int numJoueur;
    char pseudo[TAILPSEUDO];
    int argent;
    int emplacements; //commence a 0
    int cartePrison; //0 a 2
    //avatarPlateau
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
    int hypothequee; //0 ou 1
    int nCategRue;
}t_case;

///DONNEES CARTE (puis creer 2 tableau de struct, son indice=son num)
typedef struct laCarte
{
    char evenement[TAILMESSAGE];
    char consequence[TAILMESSAGE];
    int typeCarte; //0=deplacementAuNumCase 1=deplacementDeXCases 2=gainOuPerteDeX 3=carteSortirPrison
    int deplacementAuNumCase;
    int deplacementDeXCases;
    int gainOuPerteDeX;
}t_carte;

///DONNEES DE LA PARTIE
typedef struct jeu
{
    t_joueur tabJoueurND[MAXJOUEURS]; //Tableau de Structure de tous les joueurs
    t_case tabCase[32]; //Tableau de Structure de toutes les cases
    //num de case = son indice
    int nbJoueur;

    //int tourDe; //num du joueur qui doit jouer
    //int etape; //tirer les des ou achat ou.. (ce quon peut faire quune fois par tour)

 }t_jeu;

///Sous Programmes
void remplissageDebut (int* pNbJ, t_joueur* pTabJoueurs);
void effacerConsole ();
void plateau1();
//quasi finit:
//void sauve(t_jeu* monjeu, int* succes);
//void charge(t_jeu* monjeu, char filenom[], int* succes);

//blindages
void saisieNbPositif(int* nb);

#endif // HEADSTRUCT_H_INCLUDED
