#include "headStruct.h"

void afficherMenuP()
{
    effacerConsole();
    printf("\t\t\t   MENU PRINCIPAL\n");
    printf("\tUtilisez Tab pour deplacer le curseur et Enter pour valider\n\n");
    printf("\n %c Nouvelle partie \n\n %c Charger partie existante \n\n %c Sauvegarder partie actuelle",0x10, 0x10, 0x10);
    printf("\n\n %c Afficher les regles \n\n %c Afficher le nom des membres de l'equipe du projet",0x10, 0x10);
    printf("\n\n %c Quitter le jeu ( pensez %c sauvegarder %c )",0x10,0x85, 0x01);
}

void menuPrincipal(int* choix)
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
    SetConsoleCursorPosition(hscr,coo);
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
                    *choix=1;
                }
                //Charger Partie
                if (coo.Y==6)
                {
                    *choix=2;
                }
                //Sauvergarder
                if (coo.Y==8)
                {
                    //*choix=3;
                }
                //Afficher regles
                if (coo.Y==10)
                {
                    //*choix=4;
                    effacerConsole();
                    printf("\n\t\t REGLES DU MONOPOLY EDITION CRISE FINANCIERE \n\n");
                    printf("L'objectif du jeu est de devenir le joueur le plus riche et d'amener vos adversaires a la faillite.\n");
                    //utiliser fichier txt
                    printf("\n\n\nAppuyez sur M pour retourner au Menu Principal");
                }
                //Afficher membres
                if (coo.Y==12)
                {
                    //*choix=5;
                    effacerConsole();
                    printf("ECE Campus Paris \nING1 TD1\n\n\tMembres de l'equipe D:\n");
                    printf("\n\n COUSY Daria\n DE SAINT PERN Louis-Marie\n EYRAUD J%cr%cmy\n PERRIN Giulian", 0x82, 0x82);
                    printf("\n\n\nAppuyez sur M pour retourner au Menu Principal");
                }
                //Quitter jeu
                if (coo.Y==14)
                {
                    effacerConsole();
                    printf("\n\n\n\t\tA BIENTOT \n\n-l'%cquipe D du TD1",0x82);
                    Sleep(2000);
                    return 0;
                }
                break;

            //M : retourner au Menu (reafficher)
            case 'm': case 'M':
                effacerConsole();
                afficherMenuP();
                break;

            //FONCTIONS CACHEES
            //w : afficher la position X Y
            case 'w':
                effacerConsole();
                printf("\nVos coordonnes sont: %d;%d", coo.X, coo.Y);
                Sleep(150);
                effacerConsole();
                afficherMenuP();
                break;
            default: break;
        }
        SetConsoleCursorPosition(hscr,coo);
    } while(*choix==0);
    effacerConsole();
}
