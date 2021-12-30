#include "headStruct.h"

int main()
{
    t_jeu monopoly;
    int choixP=0;//pr menu principal
    int choixT=0;//pr menu du tour
    int prix=0;
    monopoly.tabCase.hypothequee=1;

    ///c'est des verifications (vous pouvez enlever)
    int i;
    int okOuPas;
    //effacerConsole();
    //plateau1();
    //menuPrincipal(&choixP);
    traitemMenuPrin(choixP, &monopoly.nbJoueur, &monopoly.tabJoueurND);
    //printf("MAINtest: nb joueurs %d \npseudo joueur1: %s", monopoly.nbJoueur, monopoly.tabJoueurND[0].pseudo);

    selecUneCase();

    return 0;
}
