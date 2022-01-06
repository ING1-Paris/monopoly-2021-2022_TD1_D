#include "headStruct.h"
//NOUVELLE PARTIE
void remplissageDebut(int* pNbJ, t_joueur* pTabJoueurs)
{
    //variables Locales
    int choixModeJeu;
    int choixCarte;
    char sortir;
    int i=0;
    int nbJoueurL=0;
    char pseudoL[TAILPSEUDO];
    t_joueur tempTabJ[MAXJOUEURS]; //tab temporaire de joueurs
    //choix du mode
    effacerConsole();
    printf("\n\tVous avez deux options de jeu :\n\t\t 1-Mode classique\n\t\t 2-Mode riche (triche possible)\n");
    do
    {
        scanf("%d",&choixModeJeu);
    }while(choixModeJeu!=1 && choixModeJeu!=2);
    //***************************************************************************************
    //MODE CLASSIQUE
    //***************************************************************************************
    if (choixModeJeu==1)
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
            printf ("\nSaisir un pseudo valide \nVous avez %d caracteres maximum :\t", TAILPSEUDO);
            fflush(stdin);
            gets(pseudoL);
        }
        strcpy(pTabJoueurs[i].pseudo, pseudoL);
        pTabJoueurs[i].argent=1500;
        pTabJoueurs[i].emplacementAct=0;
        pTabJoueurs[i].cartePrison=0;

        //Recapitulatif
        effacerConsole();
        printf("Recapitulatif :\n Pseudo du joueur suivit de son avatar :\n");
        for (i=0; i<nbJoueurL; i++)
        {
            printf ("\t%s %c \n\n",pTabJoueurs[i].pseudo, pTabJoueurs[i].avatarPlateau);
        }
        printf("Vous recevez tous 1500 centimes d'euros !");
        }
    //***************************************************************************************
    //MODE TRICHE / RICHE
    //***************************************************************************************
    else if (choixModeJeu==2)
    {
        effacerConsole();
        do
        {
            printf("\nNombre de joueurs:\t");
            saisieEntPos(&nbJoueurL);
            if (1>=nbJoueurL || nbJoueurL>MAXJOUEURS)
            {
                printf("Vous devez %ctre entre 2 et %d joueurs pour jouer !\nm%cme en mode triche...\n", 0x88, MAXJOUEURS, 0x88);
            }
        }while (1>=nbJoueurL || nbJoueurL>MAXJOUEURS);
        *pNbJ=nbJoueurL;
        //saisie et remplissage
        saisieAvatarPlateau(pTabJoueurs);
        for (i=0; i<nbJoueurL; i++)
        {
            printf("\n\t\t   Joueur %d :", i+1);
            printf ("\nSaisissez pseudo :\t");
            saisieChaine(TAILPSEUDO, &pTabJoueurs[i].pseudo);
            printf("\nSaisissez son argent :\t");
            saisieEntPos(&pTabJoueurs[i].argent);
            printf("\nSaisissez le numero de case de son emplacement :\n");
            do
            {
                saisieEntPos(&pTabJoueurs[i].emplacementAct);
                if((pTabJoueurs[i].emplacementAct)>32)
                {
                    printf("Veuillez choisir entre 1 et 32 : ");
                }
            }while((pTabJoueurs[i].emplacementAct)>32);
            printf("\nPossede une carte Sortir de Prison ? 1-OUI 2-NON\n");
            do{
                saisieEntPos(&choixCarte);
            }while(choixCarte!=1 && choixCarte!=2);
            if(choixCarte==1){
                pTabJoueurs[i].cartePrison=1;
            }
            else{
                pTabJoueurs[i].cartePrison=0;
            }
            effacerConsole();
        }
        //Recapitulatif
        effacerConsole();
        printf("\t    Recapitulatif \nPseudo du joueur suivit de son avatar:");
        for (i=0; i<nbJoueurL; i++)
        {
            printf("\n\n\t\t%s %c",pTabJoueurs[i].pseudo, pTabJoueurs[i].avatarPlateau);
            printf("\nson argent en centimes d'euros: %d", pTabJoueurs[i].argent);
            printf("\nson emplacement (numero de la case) : %d", pTabJoueurs[i].emplacementAct);
            printf("\nCartes ''Sortir de Prison'' en sa possession : %d", pTabJoueurs[i].cartePrison);
        }
    }
    //***************************************************************************************
    //FIN REMPLISSAGE
    printf("\n\n\tAppuyez sur C pour continuer\n");
    do{
        scanf("%c", &sortir);
    }while((sortir!='c') && (sortir!='C'));
    effacerConsole();
}
