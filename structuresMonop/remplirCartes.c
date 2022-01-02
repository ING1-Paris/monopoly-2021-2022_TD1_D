#include "headStruct.h"

/** types de cartes selon ce quon doit faire
1= libere de prison
2= deplaceAlaCase : aller à la case X
3= deplaceDeXCases : avancer de X cases
4= gainOuPerteDeX : +-X argent
**/

void remplirCartes(t_carte* tabCartCom, t_carte* tabCartChan)
{
    //variables locales
    int i=0;
    char nbL[TAILMESSAGE]; //va recevoir les entiers du fichier

    //Cartes Communautaires
    /** test pour la carte 1 : (trop long)
    strcpy(tabCartCom[0].evenement,"Vous etes libere de prison");
    strcpy(tabCartCom[0].consequence,"Cette carte peut etre conserve jusqu'a ce qu'elle soit utilisee ou vendue");
    tabCartCom[0].typeCarte=1;
    tabCartCom[0].deplaceAlaCase=0;
    tabCartCom[0].deplaceDeXCases=0;
    tabCartCom[0].gainOuPerteDeX=0;
    **/
    FILE* pfileCo=NULL;
	pfileCo = fopen(("../cartesCommu.txt"),"r"); //read
    //cartesCommu.txt se trouve dans le Repository local
	if (pfileCo==NULL)
    {
        printf("erreur d'ouverture fichier cartes communautaires \n");
    }
    else{
        //printf("fichier ouvert");
        for (i=0; i<=16; i++) //Tu devras changer le 2 par 16 qd ttes les cartes seront la
        {
            fgets(tabCartCom[i].evenement, TAILMESSAGE, pfileCo);
            fgets(tabCartCom[i].consequence, TAILMESSAGE, pfileCo);
            fgets(nbL, TAILMESSAGE, pfileCo);   //valeur temporaire stockée ds nbL
            //printf("SP %s", nbL); tests
            //printf("%d", atoi(nbL));
            tabCartCom[i].typeCarte=atoi(nbL);  //atoi() convertit une chaine de carac en un entier
            fgets(nbL, TAILMESSAGE, pfileCo);   //valeur temporaire
            tabCartCom[i].deplaceAlaCase=atoi(nbL);
            fgets(nbL, TAILMESSAGE, pfileCo);   //valeur temporaire
            tabCartCom[i].deplaceDeXCases=atoi(nbL);
            fgets(nbL, TAILMESSAGE, pfileCo);   //valeur temporaire
            tabCartCom[i].gainOuPerteDeX=atoi(nbL);
        }
        }
        fclose(pfileCo);
        printf("fichier ferme");

/**
    //Cartes Chance

    FILE* pfileCh=NULL;
	pfileCh = fopen(("../cartesChance.txt"),"r"); //read
	if (pfileCh==NULL)
    {
        printf("erreur d'ouverture fichier cartes chance \n");
        fclose(pfileCh);
    }
    else{
        //printf("fichier ouvert");
        for (i=0; i<2; i++)
        {
            fgets(tabCartChan[i].evenement, TAILMESSAGE, pfileCh);

            // changer recopier avec les bons noms de fichier et tableau de carte (chance)
            fgets(tabCartCom[i].consequence, TAILMESSAGE, pfileCo);
            fgets(nbL, TAILMESSAGE, pfileCo);   //valeur temporaire
            tabCartCom[i].typeCarte=atoi(nbL);  //atoi() convertit une chaine de carac en un entier
            fgets(nbL, TAILMESSAGE, pfileCo);   //valeur temporaire
            tabCartCom[i].deplaceAlaCase=atoi(nbL);
            fgets(nbL, TAILMESSAGE, pfileCo);   //valeur temporaire
            tabCartCom[i].deplaceDeXCases=atoi(nbL);
            fgets(nbL, TAILMESSAGE, pfileCo);   //valeur temporaire
            tabCartCom[i].gainOuPerteDeX=atoi(nbL);
            //apres c bon normalement

        }
        }
        fclose(pfileCh);
        //printf("fichier ferme");

**/

}
