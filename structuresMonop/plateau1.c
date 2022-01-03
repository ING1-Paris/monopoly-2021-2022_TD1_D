#include "headStruct.h"

/*int main()
{
   /* int i=0;
    int j;
    FILE* pf = fopen("../monFichier.txt", "w");
    fprintf(pf, "                        MONOPOLY LA CRISE\n");
    /*printf(" _______________________________________________________________________\n");
    for (i=0; i<5 ; i++)
    {
        printf("|        |        |        |        |        |        |        |        |\n");
        printf("|________|________|________|________|________|________|________|________|\n");

    }
    *//*
fprintf(pf," _______________________________________________________________________\n");
fprintf(pf,"|   1    |   2    |   3    |   4    |   5    |   6    |   7    |   8    |\n");
fprintf(pf,"|________|________|________|________|________|________|________|________|\n");
fprintf(pf,"|   9    |   10   |   11   |   12   |   13   |   14   |   15   |   16   |\n");
fprintf(pf,"|________|________|________|________|________|________|________|________|\n");
fprintf(pf,"|   17   |   18   |   19   |   20   |   21   |   22   |   23   |   24   |\n");
fprintf(pf,"|________|________|________|________|________|________|________|________|\n");
fprintf(pf,"|   25   |   26   |   27   |   28   |   29   |   30   |   31   |   32   |\n");
fprintf(pf,"|________|________|________|________|________|________|________|________|\n");
fclose(pf);
 pf = NULL; */


/*


int main(int argc, char *argv[])
{
  int plateau[10][10]; // le tableau 2D représentant le plateau de jeu
  int taille1, taille2; // taille utile
  int blanc, noir, garde, roi, partisan; // Convention pour représenter blanc et noir
  int ligne, colonne; // indices pour parcourir le tableau
  int jouer; //prend la valeur 1 ou 2, suivant quel joueur joue

  char case_blanche;

  case_blanche = 219; // Code ASCII d'une case blanche

  taille1 = 10;
  taille2 = 10;

  blanc = 1;
  noir = 0;
  garde = 72;
  roi = 82;
  partisan = 80;



  printf ("_______________________________________________________________________________\n\n");
printf ("                              Monopoly la desh\n");
printf ("_______________________________________________________________________________\n\n");


  for (ligne = 0 ; ligne<taille1-1 ; ligne++)
  {
       for (colonne = 0 ; colonne<taille2-1 ; colonne++)
       {
            plateau[ligne][colonne]=(ligne+colonne) %2; // cela alterne des 0 et des 1
       }
  }


  for (ligne = 0 ; ligne<taille1-1 ; ligne++)
  {
       for (colonne = 0 ; colonne<taille2-1 ; colonne++)
       {
            if (plateau[ligne][colonne]==0)
            {
            printf(" "); // espace pour les cases noires
            }
            else
            {
            printf("%c", case_blanche);
            printf("%c", case_blanche);
            }
       }
       printf("\n");
  }

  system("PAUSE");   // Le programme se met en pause
  return 0;

*/


void plateau1()
{


char cas[12] = "|__________|";
int largeur = 3;
int longueur = 8;
int ligne;
int i;
int j;
int colone;
printf("                                     MONOPLY LA DESH\n");
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
return 0;
}

