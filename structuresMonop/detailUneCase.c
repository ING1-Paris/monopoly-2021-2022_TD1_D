#include "headStruct.h"
//quoi faire on arrive sur cette case
void detailUneCase(int num, t_jeu* monopoly)
{
effacerConsole();
if (monopoly->tabCase[num].nCateg == 0) ///case départ
{
    printf("\nvous etes sur la case depart");
}
if (monopoly->tabCase[num].nCateg == 1) ///rue
{
    printf("\n%s", monopoly->tabCase[num].nom);
    if (monopoly->tabCase[num].hypothequee == 1)
    {
        printf("vous n'avez rien a payer ou acheter");
    }
    if (monopoly->tabCase[num].hypothequee == 0)
    {
        if (monopoly->tabCase[num].appartenance == 0)
        {
            monopoly->tabCase[num].prix = 1;
            monopoly->tabCase[num].facture = 0;
            printf("vous pouvez acheter la rue pour %d", monopoly->tabCase[num].prix );
        }
        if (monopoly->tabCase[num].appartenance == 1)
        {
            monopoly->tabCase[num].prix = 0;
            monopoly->tabCase[num].facture = 1;
            printf("vous devez payez %d", monopoly->tabCase[num].facture);
        }
    }
}
if (monopoly->tabCase[num].nCateg == 2)   ///gare
{
    if (monopoly->tabCase[num].appartenance == 0)
        {
            monopoly->tabCase[num].prix = 1;
            monopoly->tabCase[num].facture = 0;
            printf("vous pouvez acheter la rue pour %d", monopoly->tabCase[num].prix );
        }
        if (monopoly->tabCase[num].appartenance == 1)
        {
            monopoly->tabCase[num].prix = 0;
            monopoly->tabCase[num].facture = 1;
            printf("vous devez payez %d", monopoly->tabCase[num].facture);
        }
}
if (monopoly->tabCase[num].nCateg == 3)   ///tirage d'une carte chance
{
    printf("tirer la carte chance");
}
if (monopoly->tabCase[num].nCateg == 4)  ///prison
{
    printf("vous etes en prison");
}
if (monopoly->tabCase[num].nCateg == 5) ///tirer une carte caisse de communauté
{
    printf("tirer une carte caisse de communaute");

}
if (monopoly->tabCase[num].nCateg == 6) ///stationnement gratuit
{
    printf("il ne se passe rien");
}
if (monopoly->tabCase[num].nCateg == 7) ///Aller en prison
{
    printf("Vous allez en prison");
    monopoly->tabJoueurND[num].prisonnier=1;
    monopoly->tabJoueurND[num].emplacementPrec=monopoly->tabJoueurND[num].emplacementAct;
    monopoly->tabJoueurND[num].emplacementAct=8;
}
if (monopoly->tabCase[num].nCateg == 8) //Payer les impôts
{
    printf("\n\n\tImpots : payez 200 centimes d euros");
    monopoly->tabJoueurND[num].argent-=200;
}

}
