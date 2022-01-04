#include "headStruct.h"

void retourAuJeu()
{
    char sortir;
    printf("\n\n\t\tAppuyez sur J pour retourner au Jeu\n");
    do{
        scanf("%c", &sortir);

    }while((sortir!='j') && (sortir!='J'));
    effacerConsole();
    plateau1();
}

void retourAuMenu()
{
    char sortir;
    printf("\n\n\t\tAppuyez sur M pour retourner au Menu\n");
    do{
        scanf("%c", &sortir);

    }while((sortir!='m') && (sortir!='M'));
    effacerConsole();
    afficherMenuP();
}
