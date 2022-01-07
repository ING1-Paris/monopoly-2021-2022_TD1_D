#include "headStruct.h"
//https://tforgione.fr/posts/ansi-escape-codes/#ansi-escape-codes
//https://www.developpez.net/forums/d1499414/c-cpp/c/debuter/gerer-touches-curseur-mode-console/

//https://openclassrooms.com/forum/sujet/probleme-de-deplacement-en-console

// ajout de la variable esc dans la structure pour sortir du jeu
void selecUneCase(t_jeu* monopoly)
{
    int ch;
    int numCase;
    int i;
    int reponse;
    //effacerConsole();
    //plateau1();

    char *msg="\nUtiliser Tab pour deplacer le curseur et Echap pour quitter le jeu";
    ///nTapez s pour sauvegarder la partie/nTapez c pour charger une partie/nTapez echap pour quitter la partie
    COORD coo;
    HANDLE hscr;
    hscr=GetStdHandle(STD_OUTPUT_HANDLE);
    coo.X=6;
    coo.Y=2;
    SetConsoleCursorPosition(hscr,coo);
    effacerConsole();
    plateau1();
    printf("%s",msg);
    gotoligcol(2,19);
    printf("B");
    gotoligcol(2,7);
    printf("A");
    //coo.X=(short)(csbi.srWindow.Right/2);
    SetConsoleCursorPosition(hscr,coo);
    do {
        //while(!kbhit());
        ch=getch();
        //effacerConsole();
        //printf("\ntouche %d",ch);
        //Sleep(1000);
        //plateau1();
        switch(ch) {
            case tTAB:

                if(coo.X<89 && coo.Y!=11){
                    coo.X=coo.X+12;
                }
                else {
                  if (coo.Y < 8 ) {
                        coo.X=6;
                        coo.Y=coo.Y + 2;
                  }
                else if (coo.Y==8 && coo.X==90)
                  {
                    coo.X=6;
                    coo.Y=11;
                  }
                else if(coo.X==6 && coo.Y==11)
                  {
                      coo.X=6;
                      coo.Y=2;
                  }

                }
                break;

            case 14: // touche enter
                //affiche info case à faire
                break;
            case 's': case 'S':
                // sauvegarde à intégrer
                break;

            case 'c': case 'C':
                // charger une partie
                break;


            case 'd': case 'D': //lancement des des
                //if monopoly.etape==lancement de dès

                break;
                /*
            case 'e': case 'E':
                coo.X=csbi.srWindow.Right;
                coo.Y=csbi.srWindow.Bottom;
                break;
                */

            case tENTER: // afficher la position X Y et les details de la case
                effacerConsole();
                printf("\nVos coordonnes sont: X = %d ET Y = %d\n", coo.X, coo.Y);
              if (coo.X == 6 && coo.Y== 2)
              {
                    numCase=0;


                    monopoly->tabCase[numCase].nCateg = 0;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\ntesssssssst");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X ==  18 && coo.Y == 2)
              {
                  numCase=1;
                  monopoly->tabCase[numCase].nCateg = 1;
                  monopoly->tabCase[numCase].nGroupeRue = 1;
                  detailUneCase(numCase, *monopoly);
                  couleur(numCase, *monopoly);
                  printf("\n testestestest");
                  Color(15,0);
                  printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X ==  30 && coo.Y == 2)
              {
                    numCase=2;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 1;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X ==  42 && coo.Y == 2)
              {
                    numCase = 3;
                    monopoly->tabCase[numCase].nCateg = 2;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X ==  54 && coo.Y == 2)
              {
                    numCase = 4;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 1;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 66 && coo.Y == 2)
              {
                    numCase = 5;
                    monopoly->tabCase[numCase].nCateg = 3;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 78 && coo.Y == 2)
              {
                    numCase = 6;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 2;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 90 && coo.Y == 2)
              {
                    numCase = 7;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 2;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 6 && coo.Y == 4)
              {
                    numCase = 8;
                    monopoly->tabCase[numCase].nCateg = 4;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 18 && coo.Y == 4)
              {
                    numCase = 9;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 3;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 30 && coo.Y == 4)
              {
                    numCase = 10;
                    monopoly->tabCase[numCase].nCateg = 5;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 42 && coo.Y == 4)
              {
                    numCase = 11;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 3;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 54 && coo.Y == 4)
              {
                    numCase = 12;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 3;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 66 && coo.Y == 4)
              {
                    numCase = 13;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 4;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 78 && coo.Y == 4)
              {
                    numCase = 14;
                    monopoly->tabCase[numCase].nCateg = 2;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 90 && coo.Y == 4)
              {
                    numCase = 15;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 4;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 6 && coo.Y == 6)
              {
                    numCase = 16;
                    monopoly->tabCase[numCase].nCateg = 6;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }

              if (coo.X == 18 && coo.Y == 6)
              {
                    numCase = 17;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 5;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 30 && coo.Y == 6)
              {
                    numCase = 18;
                    monopoly->tabCase[numCase].nCateg = 3;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 42 && coo.Y == 6)
              {
                    numCase = 19;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 5;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 54 && coo.Y == 6)
              {
                    numCase = 20;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 5;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 66 && coo.Y == 6)
              {
                    numCase = 21;
                    monopoly->tabCase[numCase].nCateg = 2;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 78 && coo.Y == 6)
              {
                    numCase = 22;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 6;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 90 && coo.Y == 6)
              {
                    numCase = 23;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 6;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 6 && coo.Y == 8)
              {
                    numCase = 24;
                    monopoly->tabCase[numCase].nCateg = 7;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 18 && coo.Y == 8)
              {
                    numCase = 25;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 7;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 30 && coo.Y == 8)
              {
                    numCase = 26;
                    monopoly->tabCase[numCase].nCateg = 2;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 42 && coo.Y == 8)
              {
                    numCase  = 27;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 7;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 54 && coo.Y == 8)
              {
                    numCase = 28;
                    monopoly->tabCase[numCase].nCateg = 8;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 66 && coo.Y == 8)
              {
                    numCase = 29;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 2;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 78 && coo.Y == 8)
              {
                    numCase = 30;
                    monopoly->tabCase[numCase].nCateg = 2;
                    monopoly->tabCase[numCase].nGroupeRue = 0;
                    detailUneCase(numCase, *monopoly);
                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);
              }
              if (coo.X == 90 && coo.Y == 8)
              {
                    numCase = 31;
                    monopoly->tabCase[numCase].nCateg = 1;
                    monopoly->tabCase[numCase].nGroupeRue = 2;

                    couleur(numCase, *monopoly);
                    printf("\n testestestest");
                    Color(15,0);
                    detailUneCase(numCase, *monopoly);
                    printf("\n\nSortir ? 1-OUI \n");
                    do{
                        saisieEntPos(&reponse);
                    }while (reponse!=1);

              }
                ///Sleep(5000);
                effacerConsole();
                plateau1();
                printf("%s",msg);
                break;
            default: break;
        }
        SetConsoleCursorPosition(hscr,coo);
    } while(ch!=tESC);
    effacerConsole();
}

