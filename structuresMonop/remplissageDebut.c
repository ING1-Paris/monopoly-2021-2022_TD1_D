#include "headStruct.h"
//NOUVELLE PARTIE
void remplissageDebut(int* pNbJ, t_joueur* pTabJoueurs, int* choixModeJeu)
{
    //variables Locales
    int choixCarte;
    char sortir;
    int i=0;
    int tricher=0;
    int nbJoueurL=0;
    char pseudoL[TAILPSEUDO];
    //choix du mode
    effacerConsole();
    printf("\n\tVous avez deux options de jeu :\n\t\t 1-Mode classique\n\t\t 2-Mode riche (triche possible)\n");
    do
    {
        scanf("%d",choixModeJeu);
    }while(*choixModeJeu!=1 && *choixModeJeu!=2);
    //***************************************************************************************
    //MODE CLASSIQUE
    //***************************************************************************************
    if (*choixModeJeu==1)
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
            printf ("\nJoueur %d \nSaisissez un pseudo :\t", i+1);
            saisieChaine(TAILPSEUDO, pTabJoueurs[i].pseudo);
            pTabJoueurs[i].argent=1500;
            pTabJoueurs[i].emplacementAct=0;
            pTabJoueurs[i].cartePrison=0;
            pTabJoueurs[i].prisonnier=0;
        }
        //Recapitulatif
        effacerConsole();
        melangerTab(nbJoueurL,pTabJoueurs);
        effacerConsole();
        printf("\nRecapitulatif ordre de jeu :\n Pseudo du joueur suivit de son avatar :\n");
        for (i=0; i<nbJoueurL; i++)
        {
            printf ("\t%s %c \n\n",pTabJoueurs[i].pseudo, pTabJoueurs[i].avatarPlateau);
        }
        printf("Vous recevez tous 1500 centimes d'euros !");
        }
    //***************************************************************************************
    //MODE TRICHE / RICHE
    //***************************************************************************************
    else if (*choixModeJeu==2)
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
            printf ("\nSaisissez un pseudo :\t");
            saisieChaine(TAILPSEUDO, pTabJoueurs[i].pseudo);
            printf("\nTricher ? 1-OUI 2-NON\t");
            do{
                saisieEntPos(&tricher);
            }while(tricher!=1 && tricher!=2);
            if (tricher==1) //le joueur peut saisir ses donnees
            {
                printf("\nSaisissez son argent :\t");
                saisieEntPos(&pTabJoueurs[i].argent);
                printf("\nSaisissez le numero de case de son emplacement :\n");
                do
                {
                    saisieEntPos(&pTabJoueurs[i].emplacementAct);
                    pTabJoueurs[i].emplacementAct-=1;
                    if((pTabJoueurs[i].emplacementAct)>=32)
                    {
                        printf("Veuillez choisir entre 1 et 32 : ");
                    }
                }while((pTabJoueurs[i].emplacementAct)>=32);
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
            }
            else  //le joueur decide de ne pas tricher, donnees remplies par le jeu
            {
                pTabJoueurs[i].argent=1500;
                pTabJoueurs[i].emplacementAct=0;
                pTabJoueurs[i].cartePrison=0;
                pTabJoueurs[i].prisonnier=0;
            }
            effacerConsole();
        }
        //Recapitulatif
        effacerConsole();
        melangerTab(nbJoueurL,pTabJoueurs);
        effacerConsole();
        printf("\t    Recapitulatif  ordre de jeu \nPseudo du joueur suivit de son avatar:");
        for (i=0; i<nbJoueurL; i++)
        {
            printf("\n\n\t\t%s %c",pTabJoueurs[i].pseudo, pTabJoueurs[i].avatarPlateau);
            printf("\nson argent en centimes d'euros: %d", pTabJoueurs[i].argent);
            printf("\nson emplacement (numero de la case) : %d", pTabJoueurs[i].emplacementAct+1);
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

//**************************************************************************************
//Melange le tableau de joueurs pour qu'il y ai ordre de passage des joueurs al�atoire :
//**************************************************************************************
void melangerTab(int nbJ, t_joueur* pTab)
{
    int i=0;
    t_joueur tempTabJ[MAXJOUEURS]; //tab temporaire de joueurs
    int Bmax=nbJ-1;
    int tabindicerestant[nbJ];  //tableau indice des joueurs restants à mélanger
    int Bmin=0;
    int alea=0;
    //permutation des 2 premiers joueurs
    ///printf("\nmelange tableau");
    srand(time(NULL)); // ne plus faire meme pour le tirage deplacement

    // chargement de la table des indices des joueurs restants
    for (i = 0; i < nbJ; i++)
    {
        tabindicerestant[i]=i;
    }
    // alimentation du tableau temporaire
    for (i = 0; i < nbJ; i++)
    {
        alea= rand()%(Bmax-Bmin+1)+Bmin; // tirage aléatoire sur le nombre Max des indices restants
        ///printf("\nRandom :%d, min :%d, max :%d",alea,Bmin,Bmax);
        ///printf("\nindicejoueur correspondant :%d",tabindicerestant[alea]);
        Bmax=Bmax-1;//prochain tour tab indice avec un joueur de moins
        tempTabJ[i]=pTab[tabindicerestant[alea]]; //alimentation table temp avec l'indice du joueur sélectionné
        //suppression du joueur sélectionné dans le tableau des indices restants
        for (int j=alea; j<nbJ-1-i;j++)
        {
            tabindicerestant[j]= tabindicerestant[j+1];
        }
    }
    //rechargement du tableau de joueur dans l'ordre melancgé
    for (i=0; i < nbJ; i++){
        pTab[i]=tempTabJ[i];
    }
    ///Sleep(5000);
}
