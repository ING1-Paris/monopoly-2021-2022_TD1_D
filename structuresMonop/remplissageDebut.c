#include "headStruct.h"

void remplissageDebut (int* pNbJ, t_joueur* pTabJoueurs)
{
    //variables Locales
    int i=0;
    int nbJoueurL=0;
    char pseudoL[TAILPSEUDO];

    do
    {
        printf("\nNombre de joueurs:\t");
        scanf ("%d", &nbJoueurL);
    }while (0>=nbJoueurL || nbJoueurL>MAXJOUEURS);
    *pNbJ=nbJoueurL;

    //saisie et remplissage noms
    for (i=0; i<nbJoueurL; i++)
    {
        printf ("\nPseudo du joueur %d :\t", i+1);
        fflush(stdin);
        gets(pseudoL);
        //blindage saisie
        while( (strlen(pseudoL) > TAILPSEUDO) )
            // + reprendre code qui permet de verifier que les caractere rentres sont des lettres et pas pseudos identiques
        {
            printf ("\nSaisir un pseudo valide \nVous avez %d caracteres maximum :\t", TAILPSEUDO);
            fflush(stdin);
            gets(pseudoL);
        }
        strcpy(pTabJoueurs[i].pseudo, pseudoL);
        pTabJoueurs[i].argent=1500;
        pTabJoueurs[i].emplacements=0;
        pTabJoueurs[i].cartePrison=0;
        pTabJoueurs[i].numJoueur=i+1;
    }
}
