#include "headStruct.h"

void affichageRegles()
{
    effacerConsole();
    printf("\n\t\t REGLES DU MONOPOLY EDITION CRISE FINANCIERE \n\n");
    printf("L'objectif du jeu est de devenir le joueur le plus riche et d'amener vos adversaires a la faillite.\n");
    retourAuMenu();
}

void affichageEquipe()
{
    effacerConsole();
    printf("ECE Campus Paris \nING1 TD1\n\n\tMembres de l'%cquipe D:\n", 0x82);
    printf("\n\n COUSY Daria\n DE SAINT PERN Louis-Marie\n EYRAUD J%cr%cmy\n PERRIN Giulian", 0x82, 0x82);
    retourAuMenu();
}
