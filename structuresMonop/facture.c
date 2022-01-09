#include "headStruct.h"

void facture(int numCase, int numJoueur, t_jeu* monopoly)
{
    int choixCase, nbMaisons;
    while(monopoly->tabJoueurND[numJoueur].argent < monopoly->tabCase[numJoueur].facture)
    {
        for(int i=0; i<=32;i++)
        {
            if(monopoly->tabCase[i].appartenance=numJoueur)
            {
                printf("Case %d : %s\n",i+1,monopoly->tabCase[i].nom);
            }
        }
        do
        {
            printf("Choisissez une case sur laquelle vous voulez vendre des batiments ou l'hypothequer\n");
            scanf("%d", &choixCase);
        }
        while (choixCase>0 && choixCase<32);
        if(monopoly->tabCase[choixCase].appartenance!=numJoueur)
        {
            printf("Cette case ne vous appartient pas\n");
        }
        else
        {
            if (monopoly->tabCase[choixCase].nHotel == 0)
            {
                if (monopoly->tabCase[choixCase].nMaison == 0)
                {
                    monopoly->tabJoueurND[numJoueur].argent+= monopoly->tabCase[choixCase].prix /2;
                    monopoly->tabCase[choixCase].hypothequee=1;
                }
                else
                {
                    printf("Vous avez %d maisons, combien souhaitez vous en vendre ?\n", monopoly->tabCase[choixCase].nMaison );
                    scanf("%d", &nbMaisons);
                    if(nbMaisons>0 && nbMaisons<5)
                    {
                        monopoly->tabCase[choixCase].nMaison-=nbMaisons;
                        monopoly->tabJoueurND[numJoueur].argent+= 50;
                    }
                }
            }
            else
            {
                printf("L'hotel correspond à 5 maisons, combien voulez vous en vendre\n");
                scanf("%d", &nbMaisons);
                if(nbMaisons>0 && nbMaisons<6)
                {
                    monopoly->tabCase[choixCase].nHotel=0;
                    monopoly->tabCase[choixCase].nMaison=4-(nbMaisons-1);
                    monopoly->tabJoueurND[numJoueur].argent+=50;
                }
            }
        }

    }

}
