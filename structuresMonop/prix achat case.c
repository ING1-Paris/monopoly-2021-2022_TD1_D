#include "headStruct.h"
#define TAILLE 5

void remplirCases(t_jeu*mono)
{
    char variableLoc[TAILLE];
    int i=0;

    FILE* pfileNP=NULL;
	pfileNP = fopen(("../nomsCasesetPrix.txt"),"r");

		if (pfileNP==NULL)
    {
        printf("erreur d'ouverture fichier Nom et Prix des rues \n");
        fclose(pfileNP);
    }
    else {
        for(i=0; i<=32;i++)
            {
            fgets(mono->tabCase[i].nom,TAILMESSAGE,pfileNP);
            fgets(variableLoc,TAILLE,pfileNP);
            mono->tabCase[i].prix=atoi(variableLoc);
            fgets(variableLoc, TAILLE, pfileNP);
            mono->tabCase[i].facture=atoi(variableLoc);
            fgets(variableLoc, TAILLE, pfileNP);
            mono->tabCase[i].pmaison1=atoi(variableLoc);
            fgets(variableLoc, TAILLE, pfileNP);
            mono->tabCase[i].pmaison2=atoi(variableLoc);
            fgets(variableLoc, TAILLE, pfileNP);
            mono->tabCase[i].pmaison3=atoi(variableLoc);
            fgets(variableLoc, TAILLE, pfileNP);
            mono->tabCase[i].pmaison4=atoi(variableLoc);
            fgets(variableLoc, TAILLE, pfileNP);
            mono->tabCase[i].photel=atoi(variableLoc);
            }

        }
}
