#include "headStruct.h"

void plateau1(t_jeu monopoly)
{
char cas[12] = "|__________|";
int largeur = 3;
int longueur = 8;
int ligne;
int varY; //utilisé pour afficher
int varX; //utilisé pour afficher
/// ///////////////////////////////////////////
int i;                                      ///
int j;        ///Variables pour les parcours///
int k;                                      ///
int l;                                      ///
/// ///////////////////////////////////////////
int m;
int colone;

printf("                                     MONOPLY LA CRISE\n");
printf(" __________  __________  __________  __________  __________  __________  __________  __________ \n");
printf("|          ||          ||          ||          ||          ||          ||          ||          |\n");

 for (ligne = 0; ligne < largeur ; ligne++)
    {
        for(colone = 0; colone < longueur ; colone++)
        {
            for (i=0; i<12 ; i++)
            {

                printf("%c", cas[i]);
            }

        }
        printf ("\n");
        printf("|          ||          ||          ||          ||          ||          ||          ||          |\n");
    }
printf("|__________||__________||__________||__________||__________||__________||__________||__________|\n");
printf(" __________\n");
printf("|          |\n");
printf("|   Menu   |\n");
printf("|__________|\n");
printf("\nUtiliser Tab pour deplacer le curseur et C pour continuer a jouer");

for (j=0; j<monopoly.nbJoueur; j++)
{
        if (monopoly.tabJoueurND[j].emplacementAct == 0)
        {
            l=0;
            k=0;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 1)
        {
            l=0;
            k=1;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 2)
        {
            l=0;
            k=2;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 3)
        {
            l=0;
            k=3;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 4)
        {
            l=0;
            k=4;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 5)
        {
            l=0;
            k=5;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 6)
        {
            l=0;
            k=6;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 7)
        {
            l=0;
            k=7;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 8)
        {
            l=1;
            k=0;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 9)
        {
            l=1;
            k=1;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 10)
        {
            l=1;
            k=2;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 11)
        {
            l=1;
            k=3;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 12)
        {
            l=1;
            k=4;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 13)
        {
            l=1;
            k=5;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 14)
        {
            l=1;
            k=6;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 15)
        {
            l=1;
            k=7;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 16)
        {
            l=2;
            k=0;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 17)
        {
            l=2;
            k=1;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 18)
        {
            l=2;
            k=2;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 19)
        {
            l=2;
            k=3;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 20)
        {
            l=2;
            k=4;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 21)
        {
            l=2;
            k=5;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 22)
        {
            l=2;
            k=6;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 23)
        {
            l=2;
            k=7;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 24)
        {
            l=3;
            k=0;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 25)
        {
            l=3;
            k=1;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 26)
        {
            l=3;
            k=2;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 27)
        {
            l=3;
            k=3;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 28)
        {
            l=3;
            k=4;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 29)
        {
            l=3;
            k=5;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 30)
        {
            l=3;
            k=6;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
        if (monopoly.tabJoueurND[j].emplacementAct == 31)
        {
            l=3;
            k=7;
            varY = 2+2*l;
            varX = 1+12*k + j;
            gotoligcol(varY,varX);
            printf("%c", monopoly.tabJoueurND[j].avatarPlateau);
        }
}
}
