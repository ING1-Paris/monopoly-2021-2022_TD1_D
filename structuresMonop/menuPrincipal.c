#include "headStruct.h"

void afficherMenuP()
{
    effacerConsole();
    printf("\t\t\t   MENU PRINCIPAL\n");
    printf("\tUtilisez Tab pour d%cplacer le curseur et Entr%ce pour valider\n\n", 0x82, 0x82);
    printf("\n %c Nouvelle partie \n\n %c Charger partie existante \n\n %c Sauvegarder partie actuelle",0x10, 0x10, 0x10);
    printf("\n\n %c Afficher les r%cgles \n\n %c Afficher le nom des membres de l'%cquipe du projet",0x10, 0x8A, 0x10, 0x82);
    printf("\n\n %c Quitter le jeu ( pensez %c sauvegarder %c )",0x10,0x85, 0x01);
}

void menuPrincipal(int* choix, t_jeu* partieEnCours)
{
    int ch;
    COORD coo;
    HANDLE hscr;
    hscr=GetStdHandle(STD_OUTPUT_HANDLE);
    coo.X=1;    //coordonnee X debut
    coo.Y=4;    //coordonnee Y debut
    SetConsoleCursorPosition(hscr,coo);
    effacerConsole();
    afficherMenuP();
    do {
        ch=getch();//obtient touche appuyee

        //pr TROUVER NOM DUNE TOUCHE DU CLAVIER:
        //effacerConsole();
        //printf("\ntouche %d",ch);

        switch(ch) {
            //touche TAB
            case tTAB:
                if(coo.Y<14){
                    coo.Y+=2; //descend ligne
                }
                else {
                    coo.Y=4;
                }
                break;
            //touche ENTER ou retour chariot
            case tENTER: case 10: case 14: //(sur selons les ordi c'est 13 10 ou 14)
                //Nouvelle Partie
                if (coo.Y==4)
                {
                    remplissageDebut(&partieEnCours->nbJoueur, &partieEnCours->tabJoueurND);
                    sortir =1;
                    //tours
                }
                //Charger Partie
                if (coo.Y==6)
                {
                    //finir fonction
                }
                //Sauvergarder
                if (coo.Y==8)
                {
                    //*choix=3;
                }
                //Afficher regles
                if (coo.Y==10)
                {
                    affichageRegles();
                }
                //Afficher membres
                if (coo.Y==12)
                {
                    affichageEquipe();
                }
                //Quitter jeu
                if (coo.Y==14)
                {
                    effacerConsole();
                    printf("\n\n\n\t\tA BIENTOT \n\n\n-l'%cquipe D du TD1",0x82);
                    Sleep(2000);
                    return 0;
                }
                break;
//effacer partie M
            //M : retourner au Menu (reafficher)
            case 'm': case 'M':
                effacerConsole();
                afficherMenuP();
                break;
        /**
            //FONCTIONS CACHEES
            //w : afficher la position X Y
            case 'w':
                effacerConsole();
                printf("\nVos coordonnes sont: %d;%d", coo.X, coo.Y);
                Sleep(150);
                effacerConsole();
                afficherMenuP();
                break;
        **/
            default: break;
        }
        SetConsoleCursorPosition(hscr,coo);
    } while(*choix==0);
    effacerConsole();
    printf("fin");
}
