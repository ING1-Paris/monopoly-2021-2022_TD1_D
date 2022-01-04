#include "headStruct.h"

void allerEnPrison(t_joueur* lesJoueurs, int numJoueur)
{
    lesJoueurs[numJoueur].emplacementAct=8;
    lesJoueurs[numJoueur].prisonnier=1 ;
}
