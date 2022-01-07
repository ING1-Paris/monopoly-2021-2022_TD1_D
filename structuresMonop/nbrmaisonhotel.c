#include "headStruct.h"
void nbrhotelmaison(t_jeu*monopoly, int numCaseVoulue)
{
int compteurmaison=0;
int compteurhotel=0;
int i=0;
int j=0;

for (i=0; i<=32; i++) {
    compteurmaison += monopoly->tabCase[i].nMaison;
}

for (j=0; j<=12; j++) {
    compteurhotel += monopoly->tabCase[j].nHotel;
}


if (compteurmaison >= 32) {
    printf("Il ne reste plus de maison");
}

if (compteurhotel >= 12) {
    printf("Il ne reste plus d hotel");
}

if (compteurmaison <= 32)
{
    printf("Une maison ici coute %d centimes", monopoly->tabCase[numCaseVoulue].prix);
    printd("Combien de maisons voulez-vous?");
}

}
