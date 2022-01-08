#ifndef HEADSTRUCT_H_INCLUDED
#define HEADSTRUCT_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <windows.h>
#include <time.h>
#include <sys/types.h>
#include <signal.h>

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
    int prix;    ///prix de la rue a l'achat
    int facture; ///prix a payer quand on arrive sur la rue
    int pmaison1; ///prix � payer si 1 maison
    int pmaison2; ///prix � payer si 2 maisons
    int pmaison3; ///prix � payer si 3 maisons
    int pmaison4; ///prix � payer si 4 maisons
    int photel;


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
    int nbJoueur;
    int tourDe; //num du joueur qui doit jouer
    int etape; //0=tirer les des 1= achat 2=au suivant (ce quon peut faire une fois par tour)
    int modeJeu;
 }t_jeu;

///Sous Programmes
void sauve(t_jeu* monjeu);
//void charge(t_jeu* monjeu, char filenom[], int* succes);
void selecUneCase(t_jeu* monopoly);
void menuPrincipal(t_jeu* partieEnCours);
void remplissageDebut(int* pNbJ, t_joueur* pTabJoueurs, int* choixModeJeu);
void remplirCartes(t_carte* tabCartCom, t_carte* tabCartChan);
void saisieAvatarPlateau(t_joueur* tab);
void couleur(int nume, t_jeu monopoly);
void remplirCases(t_jeu*mono);

//� tester encore
int lancerDes (t_jeu* monop, int numJoueur);
void allerEnPrison(t_joueur* lesJoueurs, int numJoueur);
void detailUneCase(int num, t_jeu* monopoly);


//blindages
void saisieEntPos(int* nb);
void saisieChaine(int tailleChaine, char chaine[tailleChaine]);

//affichage
void effacerConsole ();
void plateau1(t_jeu monopoly);

void retourAuJeu();
void retourAuMenu();
void affichageRegles();
void affichageEquipe();
void pageAccueil();


#endif // HEADSTRUCT_H_INCLUDED
