#include "headStruct.h"

void traitemMenuPrin(int action, int* pNbJ, t_joueur* pTabJoueurs)
{
    //Nouvelle Partie
    if (action==1)
    {
        effacerConsole();
        effacerConsole();
        //variables Locales
        int i=0, j=0, ok=0;;
        int nbJoueurL=0;
        char avatarL='x';
        int nbAvatarsOkL=0; //nb d'avatars choisis
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
                // + verifier que les caractere rentres sont des lettres et pas pseudos identiques
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
            printf("\nchoisir votre avatar (1 caractere): ");
            //blindage pour que les joueurs n'aient pas le meme avatar
            /**do{
                scanf("%c", &avatarL);
                pTabJoueurs[i].avatarPlateau=avatarL;
                for (j=0; j<nbAvatarsOkL; j++)
                {
                    if (pTabJoueurs[i].avatarPlateau==pTabJoueurs[j].avatarPlateau || i!=j)
                    {
                      printf("\nAvatar deja pris, veuillez en choisir un autre : ");
                    }
                    else
                    {
                        ok=1;
                    }
                }
                nbAvatarsOkL++;
**/
            }while(ok!=1);
        }
        /**
    }
    //Charger
    if (action==2)
    {

    }
    //Sauve
    if (action==3)
    {

    }
**/
}
