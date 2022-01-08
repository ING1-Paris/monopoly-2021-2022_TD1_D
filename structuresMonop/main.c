#include "headStruct.h"

int main()
{
    t_jeu monopoly;
    t_carte tabCom[16]; //pile cartes communautaires
    t_carte tabChan[16]; //pile cartes chance

    monopoly.nbJoueur=0; //indique que a partie n'a pas commencee
    monopoly.tourDe=0; //le joueur 0 commence
    monopoly.etape=0;
    int auJoueurSuiv=0; //Au joueur suivant ? 0 NON 1 OUI
    int des=0; //d�s pour la triche
    int fin=0;


    //variables pr verification
    int i, j;
    int okOuPas;
    int tou;

    remplirCartes(&tabCom, &tabChan);
    //pageAccueil();
    menuPrincipal(&monopoly);
    while (fin==0)
    {
        //tester la fin du jeu avec une fonction qui boucle ts les joueurs
        selecUneCase(&monopoly);
        //devant chaque etape verif si argent sinon passer
        ///if etape0 : DES + etape+=1;
        if(monopoly.etape==0 && monopoly.tabJoueurND[monopoly.tourDe].argent>0)
        {
            printf ("\n\n\tc'est au tour de %s %c !",monopoly.tabJoueurND[monopoly.tourDe].pseudo, monopoly.tabJoueurND[monopoly.tourDe].avatarPlateau);
            ///MODE TRICHE
            if (monopoly.modeJeu==2)
            {
                printf("\nDe combien voulez-vous avancer ?\t");
                saisieEntPos(&des);
                //printf("\nVous tirez les des et obtenez : %d \nQuelle chance !", des);
                //mettre qq pr quon puisse lire
                monopoly.tabJoueurND[monopoly.tourDe].emplacementPrec = monopoly.tabJoueurND[monopoly.tourDe].emplacementAct;
                monopoly.tabJoueurND[monopoly.tourDe].emplacementAct+=des;
                //pour retourner au debut du plateau
                while (monopoly.tabJoueurND[monopoly.tourDe].emplacementAct>31)
                {
                    monopoly.tabJoueurND[monopoly.tourDe].emplacementAct-=32;
                }
            }
            ///MODE CLASSIQUE NE FONCTIONNE PAS
            else if(monopoly.modeJeu==1)
            {
                //fonction d�s
                lancerDes(&monopoly, monopoly.tourDe);
            }
            else
            {
                printf("\npb Mode de jeu");
            }
        }

        ///if etape 1: action (detailCase) +etape+=1;
        if (monopoly.etape==1 && monopoly.tabJoueurND[monopoly.tourDe].argent>0)
        {
            effacerConsole();
            //detailUneCase(monopoly.tourDe, &monopoly);
            printf("ETAPE1");
            Sleep(1000);
            auJoueurSuiv=1;
        }

        ///JOUEUR ELIMINE
        if(monopoly.tabJoueurND[monopoly.tourDe].argent<=0)
        {
            printf ("\n\nLe joueur %s %c est elimine !",monopoly.tabJoueurND[monopoly.tourDe].pseudo, monopoly.tabJoueurND[monopoly.tourDe].avatarPlateau);
            printf("\nPassons au joueur suivant");
            auJoueurSuiv=1;
        }
        ///PASSAGE A L'ETAPE SUIVANTE (ACTIONS LIEES A LA CASE : achat/loyer/carte)
        if(monopoly.etape==0 && monopoly.tabJoueurND[monopoly.tourDe].argent>0)
        {
            monopoly.etape=1;
        }
        ///JOUEUR SUIVANT ?
        if (auJoueurSuiv==1)
        {
            printf("JOUEUR SUIV");
            Sleep(1000);
            auJoueurSuiv=0;//ce n'est plus au tour du joueur suivant
            monopoly.etape=0;//etape 0 pour le prochain joueur
            if (monopoly.tourDe < monopoly.nbJoueur-1)
            {
                monopoly.tourDe+=1;
            }
            else
            {
                monopoly.tourDe=0;
            }
        }
    }


    return 0;
}
