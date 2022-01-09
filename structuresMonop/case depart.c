#include "headStruct.h"
void passagecasedepart(t_jeu*monop, int num) {

    if (monop->tabJoueurND[num].emplacementPrec>monop->tabJoueurND[num].emplacementAct && monop->tabJoueurND[num].prisonnier== 0 ) {

        monop->tabJoueurND[num].argent+=200;
        printf("Vous etes passez par la case depart vous recevez 200\n");
    }
}
