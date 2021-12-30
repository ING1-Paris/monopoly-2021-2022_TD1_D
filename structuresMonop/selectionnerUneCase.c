#include "headStruct.h"
//https://tforgione.fr/posts/ansi-escape-codes/#ansi-escape-codes
//https://www.developpez.net/forums/d1499414/c-cpp/c/debuter/gerer-touches-curseur-mode-console/

//https://openclassrooms.com/forum/sujet/probleme-de-deplacement-en-console
// ajout de la variable esc dans la structure pour sortir du jeu
void selecUneCase()
{
    int ch;
    //effacerConsole();
    //plateau1();

    char *msg="Utiliser Tab pour deplacer le curseur et Echap pour quitter le jeu";
    ///nTapez s pour sauvegarder la partie/nTapez c pour charger une partie/nTapez echap pour quitter la partie
    COORD coo;
    HANDLE hscr;
    CONSOLE_CURSOR_INFO cci,old_cci;                // not really needed, just for test
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    hscr=GetStdHandle(STD_OUTPUT_HANDLE);
    cci.dwSize=100;                                 // not really needed, just for test
    cci.bVisible=TRUE;                              // not really needed, just for test
    GetConsoleCursorInfo(hscr,&old_cci);            // not really needed, just for test
    SetConsoleCursorInfo(hscr,&cci);                // not really needed, just for test
    GetConsoleScreenBufferInfo(hscr,&csbi);
    //coo.X=(short)((csbi.srWindow.Right-strlen(msg))/);
    //coo.Y=(short)(csbi.srWindow.Bottom/2);
    coo.X=6;
    coo.Y=2;
    SetConsoleCursorPosition(hscr,coo);
    effacerConsole();
    plateau1();
    printf("%s",msg);
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
            case 9:
                if(coo.X<89){
                    coo.X=coo.X+12;
                }
                else {
                  if (coo.Y <10 ) {
                        coo.X=6;
                        coo.Y=coo.Y + 2;
                  } else {
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

            case 'w': // afficher la position X Y
                effacerConsole();
                printf("\nVos coordonnes sont: %d : %d", coo.X, coo.Y);
                Sleep(1000);
                effacerConsole();
                plateau1();
                printf("%s",msg);
                break;
            default: break;
        }
        SetConsoleCursorPosition(hscr,coo);
    } while(ch!=tESC);
    effacerConsole();
    SetConsoleCursorInfo(hscr,&old_cci);            // needed if lines 37 is used
}
