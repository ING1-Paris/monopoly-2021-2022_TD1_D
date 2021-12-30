#include "headStruct.h"
//dedicace a Giulian yolo
//!attention aux accents ds le texte
///et aux ' si tu copies colles, rien de grv mais ca affiche des caract pas voulus

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

    //Cartes Communautaires
    //TEST printf("SousP avant strcpy\n");
    strcpy(tabCartCom[0].evenement,"Vous etes libere de prison");
    //TEST printf("apres 1er strcpy\n");
    strcpy(tabCartCom[0].consequence,"Cette carte peut etre conserve jusqu'a ce qu'elle soit utilisee ou vendue");
    tabCartCom[0].typeCarte=1;
    tabCartCom[0].deplaceAlaCase=0;
    tabCartCom[0].deplaceDeXCases=0;
    tabCartCom[0].gainOuPerteDeX=0;

    //Cartes Chance

}
