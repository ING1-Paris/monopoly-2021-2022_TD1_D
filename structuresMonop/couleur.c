#include "headStruct.h"

void Color(int couleurDuTexte,int couleurDeFond)     /// permet d afficher les couleurs
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}

void couleur(int nume, t_jeu monopoly)
{
    if (monopoly.tabCase[nume].nGroupeRue == 0)
    {
        Color(15,0);
    }
        if (monopoly.tabCase[nume].nGroupeRue == 1)
    {
        Color(15,1);
    }
        if (monopoly.tabCase[nume].nGroupeRue == 2)
    {
        Color(15,3);
    }
        if (monopoly.tabCase[nume].nGroupeRue == 3)
    {
        Color(15,5);
    }
        if (monopoly.tabCase[nume].nGroupeRue == 4)
    {
        Color(15,12);
    }
        if (monopoly.tabCase[nume].nGroupeRue == 5)
    {
        Color(15,4);
    }
        if (monopoly.tabCase[nume].nGroupeRue == 6)
    {
        Color(0,14);
    }
        if (monopoly.tabCase[nume].nGroupeRue == 7)
    {
        Color(15,2);
    }
}
