#include "headStruct.h"

void traitemMenuPrin(int action, int* pNbJ, t_joueur* pTabJoueurs)
{
    //variables Locales
    int i=0;
    int nbJoueurL=0;
    char avatarL='x';
    int nbAvatarsOkL=0; //nb d'avatars choisis
    char pseudoL[TAILPSEUDO];
    t_joueur tempTabJ[MAXJOUEURS]; //tab temporaire de joueurs

    //NOUVELLE PARTIE
    if (action==1)
    {
        effacerConsole();
        do
        {
            printf("\nNombre de joueurs:\t");
            saisieEntPos(&nbJoueurL);
            if (1>=nbJoueurL || nbJoueurL>MAXJOUEURS)
            {
                printf("Vous devez %ctre entre 2 et %d joueurs pour jouer !", 0x88, MAXJOUEURS);
            }
        }while (1>=nbJoueurL || nbJoueurL>MAXJOUEURS);
        *pNbJ=nbJoueurL;

        //saisie et remplissage
        saisieAvatarPlateau(pTabJoueurs);
        for (i=0; i<nbJoueurL; i++)
        {
            printf ("\nSaisissez votre pseudo joueur %d :\t", i+1);
            saisieChaine(TAILPSEUDO, &pTabJoueurs[i].pseudo);
            pTabJoueurs[i].argent=1500;
            pTabJoueurs[i].emplacementAct=0;
            pTabJoueurs[i].cartePrison=0;
        }
        //Recapitulatif
        effacerConsole();
        printf("Recapitulatif :\n Pseudo du joueur suivit de son avatar :\n");
        for (i=0; i<nbJoueurL; i++)
        {
            printf ("\t%s %c \n\n",pTabJoueurs[i].pseudo, pTabJoueurs[i].avatarPlateau);
        }

    }
/**
    //CHARGER
    if (action==2)
    {

    }
    //Sauve
    if (action==3)
    {

    }
**/
}
