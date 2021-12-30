#include "headStruct.h"

int main()
{
    t_jeu monopoly;
    t_carte tabCom[16]; //pile cartes communautaires
    t_carte tabChan[16]; //pile cartes chance
    int choixP=0;//pr menu principal
    int choixT=0;//pr menu du tour
    int prix=0;
    //monopoly.tabCase.hypothequee=1;

    ///c'est des verifications (vous pouvez enlever)
    int i;
    int okOuPas;
    //effacerConsole();
    //plateau1();
    //menuPrincipal(&choixP);
    traitemMenuPrin(choixP, &monopoly.nbJoueur, &monopoly.tabJoueurND);
    //printf("MAINtest: nb joueurs %d \npseudo joueur1: %s", monopoly.nbJoueur, monopoly.tabJoueurND[0].pseudo);

    //selecUneCase();

    //Verifications fonction remplirCase
    remplirCartes(&tabCom, &tabChan);
    printf("Verif MAIN carte1 \n evenemt: %s \n conseq: %s", tabCom[0].evenement, tabCom[0].consequence);
    printf("\ntype carte %d \n", tabCom[0].typeCarte);

    return 0;
}
