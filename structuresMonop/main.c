#include "headStruct.h"

int main()
{
    t_jeu monopoly;
    int i;
    //t_joueur mesJoueurs;
    remplissageDebut(&(monopoly.nbJoueur), &(monopoly.tabJoueurND));
    effacerConsole();

    //Verifications ok (BLINDAGE!!)
    printf("MAIN \nnb joueurs: %d \n", monopoly.nbJoueur);
    for(i=0; i<monopoly.nbJoueur; i++)
    {
        printf("\npseudo du joueur%d : %s \n", i+1, monopoly.tabJoueurND[i].pseudo);
        printf("argent joueur%d : %d \n \n", i+1, monopoly.tabJoueurND[i].argent);
    }

    return 0;
}
