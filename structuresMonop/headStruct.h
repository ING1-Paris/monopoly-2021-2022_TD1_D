#ifndef HEADSTRUCT_H_INCLUDED
#define HEADSTRUCT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <windows.h>

// Valeurs des touches du clavier
#define tTAB 9
#define tENTER 13
#define tESC '\x1b'//pr l'exemple selectionnerUneCase

#define MAXJOUEURS 10
#define TAILPSEUDO 10
#define TAILMESSAGE 100
#define SAISIEMAXNB 10 //nb de chiffres qu'on peut saisir (pour blindages prcq j'utilise un char avant de convertir en int)

///donnees par joueur
typedef struct leJoueur
{
    char pseudo[TAILPSEUDO];
    int argent;
    int emplacementAct; //commence a 0
    int emplacementPrec;
    int cartePrison; //0 a 2
    char avatarPlateau;
    int prisonnier; //0 ou 1
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
    int nGroupeRue;
}t_case;

///DONNEES CARTE (puis creer 2 tableau de struct, son indice=son num)
typedef struct laCarte
{
    char evenement[TAILMESSAGE];
    char consequence[TAILMESSAGE];
    int typeCarte; //1= libere de prison 2=aller a la case X 3=avancer de X cases 4=+ou- argent
    int deplaceAlaCase;
    int deplaceDeXCases;
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
void effacerConsole ();
void plateau1();
//PAS FINIT:
//void sauve(t_jeu* monjeu, int* succes);
//void charge(t_jeu* monjeu, char filenom[], int* succes);
void selecUneCase();
void menuPrincipal(int* choix, t_jeu* partieEnCours);
void traitemMenuPrin(int action, int* pNbJ, t_joueur* pTabJoueurs);
void remplirCartes(t_carte* tabCartCom, t_carte* tabCartChan);
void saisieAvatarPlateau(t_joueur* tab);


//blindages
void saisieEntPos(int* nb);
void saisieChaine(int tailleChaine, char* chaine[tailleChaine]);


#endif // HEADSTRUCT_H_INCLUDED
