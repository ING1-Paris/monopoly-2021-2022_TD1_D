#include "headStruct.h"

int main()
{
    t_jeu monopoly;

    ///c'est des verifications (vous pouvez enlever)
    int i;
    int okOuPas;
    effacerConsole();
    plateau1();
    remplissageDebut(&(monopoly.nbJoueur), &(monopoly.tabJoueurND));
    effacerConsole();
    plateau1();
    printf("MAINverification \nnb joueurs: %d \n", monopoly.nbJoueur);
    for(i=0; i<monopoly.nbJoueur; i++)
    {
        printf("\npseudo du joueur%d : %s \n", i+1, monopoly.tabJoueurND[i].pseudo);
        printf("argent joueur%d : %d \n \n", i+1, monopoly.tabJoueurND[i].argent);
    }

    return 0;
}
