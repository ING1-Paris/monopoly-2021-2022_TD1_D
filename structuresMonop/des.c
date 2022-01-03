#include "headStruct.h"

void lancerDes (t_jeu* monop, int numJoueur)
{
    int des=4;
    //calcul avec fonction random
    //et s'il est deja en prison ou pas
    //penser à inclure verifier si doublons
    //ex : if 3 doubles && pas en prison :  monop->tabJoueurND[numJoueur].prisonnier=1
    monop->tabJoueurND[numJoueur].emplacementPrec=monop->tabJoueurND[numJoueur].emplacementAct;
    monop->tabJoueurND[numJoueur].emplacementAct+=des;
}
