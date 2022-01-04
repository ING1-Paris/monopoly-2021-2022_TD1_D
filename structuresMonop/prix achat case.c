#include "headStruct.h"

void remplirCases(t_jeu*mono);
char variableLoc[4];
int i=0;
char nbL[TAILMESSAGE];

FILE* pfileNP=NULL;
	pfileNP = fopen(("../nomsCasesetPrix.txt"),"r");

		if (pfileNP==NULL)
    {
        printf("erreur d'ouverture fichier Nom et Prix des rues \n");
        fclose(pfileNP);
    }
    else {
        for(i=0; i<=32;i++){
            fgets(mono.tabCase[i].nom,TAILMESSAGE,pfileNP);
            fgets(variableLoc,4,pfileNP);
            mono.Case[i].prixAlachat=atoi(nbL);



    }

}
