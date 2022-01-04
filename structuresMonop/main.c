#include "headStruct.h"

int main()
{
    t_jeu monopoly;
    t_carte tabCom[16]; //pile cartes communautaires
    t_carte tabChan[16]; //pile cartes chance
    monopoly.nbJoueur=0;
    int prix=0;

    //variables pr verification
    int i, j;
    int okOuPas;
    int tou;
    int fin=0;
/**
    //Verifications fonction remplirCase
    remplirCartes(&tabCom, &tabChan);
    for (i=0; i<=16;i++)
    {
        printf("Verif MAIN carte %d \n evenemt: %s \n conseq: %s", i+1, tabCom[i].evenement, tabCom[i].consequence);
        printf("\ntype carte %d \n", tabCom[i].typeCarte);
    }
**/
                    ///***************mettez vos VERIFICATIONS ICI*******************//

    menuPrincipal(&monopoly);
    effacerConsole();
    plateau1();

    lancerDes(&monopoly, 0);
    printf("\n\nemplacement joueur %d : %d", 0, monopoly.tabJoueurND[0].emplacementAct);

                    ///**************************************************************//
}
