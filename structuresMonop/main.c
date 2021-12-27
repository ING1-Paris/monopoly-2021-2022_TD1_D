#include "headStruct.h"

int main()
{
    t_jeu monopoly;
    int i;
    //t_joueur mesJoueurs;
    remplissageNbEtPseudo(&(monopoly.nbJoueur), &(monopoly.tabJoueurND));
    //Verifications ok (BLINDAGE!!)
    printf("\nMAIN \nnb joueurs: %d", monopoly.nbJoueur);
    for(i=0; i<monopoly.nbJoueur; i++)
    {
        printf("\npseudo du joueur%d : %s \n", i+1, monopoly.tabJoueurND[i].pseudo);
        printf("\nargent joueur%d : %d \n", i+1, monopoly.tabJoueurND[i].argent);
    }

    return 0;
}
