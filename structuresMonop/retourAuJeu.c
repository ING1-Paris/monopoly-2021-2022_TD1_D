#include "headStruct.h"

void retourAuJeu(t_jeu monopoly)
{
    char sortir;
    printf("\n\n\n\t\tAppuyez sur C puis Entr%ce pour continuer\n",0x82);
    do{
        scanf("%c", &sortir);

    }while((sortir!='c') && (sortir!='C'));
    effacerConsole();
}

void retourAuMenu()
{
    char sortir;
    printf("\n\n\n\t\tAppuyez sur M puis Entr%ce pour retourner au Menu\n",0x82);
    do{
        scanf("%c", &sortir);

    }while((sortir!='m') && (sortir!='M'));
    effacerConsole();
    afficherMenuP();
}
