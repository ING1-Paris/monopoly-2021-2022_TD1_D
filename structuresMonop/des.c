#include "headStruct.h"

int lancerDes (t_jeu* monop, int numJoueur)
{
    int de1=0, de2=0, sommeDes=0, comptDoubles=0;
    srand(time(NULL));
        {
            de1 = rand()%(6-1+1)+1;
            de2 = rand()%(6-1+1)+1;
            sommeDes=de1+de2;
            printf("%d et %d", de1, de2);
            if( de1==de2)
            {
                comptDoubles++;
            }
            if (comptDoubles==3)
            {
                printf("Allez en prison !");
                allerEnPrison(&(monop->tabJoueurND), numJoueur);
            }

        }
        return sommeDes;
}
