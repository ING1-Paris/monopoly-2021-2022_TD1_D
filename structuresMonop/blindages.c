#include "headStruct.h"
//Toutes les fonctions de blindage pour calculs et saisies:
void saisieNbPositif(int* nb){
    scanf("%d", nb);
    if (0>=*nb);
    {
        do
        {
            printf("saisir un entier positif:");
            scanf("%d", nb);
        }while(0>=*nb);
    }
}
