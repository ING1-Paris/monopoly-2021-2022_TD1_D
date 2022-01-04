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
            printf("\nsaisir un entier positif: ");
        }
    }while(0>=(*nb));
    //A supprimer avant de rendre
    //pr verifier (si lettre rentree apres chiffres seulement les debut sera pris en compte)
    printf("(Sous programme blindage) votre valeur envoyee : %d \n", *nb);

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
            printf("\nsaisir un entier valide svp: ");
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
    printf("taille de votre saisie :  %d \n", strlen(chaineTemp));
            while( strlen(chaineTemp) >= (tailleChaine) )
            {
                printf ("\nSaisie invalide \nVous avez %d caracteres maximum :\t", tailleChaine);
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
