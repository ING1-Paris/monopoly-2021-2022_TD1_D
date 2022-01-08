#include "headStruct.h"

void retourAuJeu(t_jeu monopoly)
{
    char sortir;
    printf("\n\n\t\tAppuyez sur J puis Entr%ce pour retourner au Jeu\n",0x82);
    do{
        scanf("%c", &sortir);

    }while((sortir!='j') && (sortir!='J'));
    effacerConsole();
    plateau1(monopoly);
}

void retourAuMenu()
{
    char sortir;
    printf("\n\n\t\tAppuyez sur M puis Entr%ce pour retourner au Menu\n",0x82);
    do{
        scanf("%c", &sortir);

    }while((sortir!='m') && (sortir!='M'));
    effacerConsole();
    afficherMenuP();
}
