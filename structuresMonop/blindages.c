#include "headStruct.h"
//Toutes les fonctions de blindage pour calculs et saisies:

//saisit un entier positif different de 0
void saisieEntPos(int* nb){
    char tempo[SAISIEMAXNB];
    do
    {
        fflush(stdin);
        scanf("%s", &tempo);
        *nb=atoi(tempo);
        if (0>=(*nb))
        {
            printf("\n!! Saisie invalide \nveuillez saisir un entier positif different de 0\net compos%c de maximum %d nombres : \t", 0x82, SAISIEMAXNB);
        }
    }while(0>=(*nb));
}

//saisit un entier different de 0
void saisieEnt(int* nbPosOuNeg){
    char tempo[SAISIEMAXNB];
    do
    {
        fflush(stdin);
        scanf("%s", &tempo);
        *nbPosOuNeg=atoi(tempo);
        if (0==(*nbPosOuNeg))
        {
            printf("\n!! Saisie invalide \nveuillez saisir un entier different de 0\net compos%c de maximum %d nombres : \t", 0x82, SAISIEMAXNB);
        }
    }while(0==(*nbPosOuNeg));
}

//saisit une chaine de carac de la taille voulue
void saisieChaine(int tailleChaine, char* chaine[tailleChaine])
{
    char chaineTemp[tailleChaine+1];
    int i;
    fflush(stdin);
    fgets(chaineTemp, tailleChaine+1, stdin);
            while( strlen(chaineTemp) >= (tailleChaine) )
            {
                printf ("\n!! Saisie invalide, veuillez ressaisir :\n(vous avez %d caracteres maximum)\t", tailleChaine);
                fflush(stdin);
                fgets(chaineTemp, tailleChaine+1, stdin);
            }

        for (i=0; i<(strlen(chaineTemp)+1); i++)
        {
           if (chaineTemp[i]== '\n')
           {
                chaineTemp[i]='\0';
           }
        }
    strcpy(chaine, chaineTemp);
}
