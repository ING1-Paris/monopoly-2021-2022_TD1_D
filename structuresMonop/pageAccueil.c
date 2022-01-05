#include "headStruct.h"

void pageAccueil()
{
    int touche;
    int cOk=0;
   // HANDLE hscr;
   // hscr=GetStdHandle(STD_OUTPUT_HANDLE);
    printf("\n\n\t\tMONOPOLY %cDITION CRISE FINANCI%cRE", 0x90, 0xD4);
    printf("\n\n\n\t      - Appuyez sur Entr%ce pour commencer -", 0x82);
    printf("\n\n\n\n\t\tDisponible uniquement sous windows\n");

    do
    {
        touche=getch();
        switch(touche)
        {
            case tENTER: case 10: case 14:
                cOk=1;
                break;
            case 'a': case 'A': case tTAB :
                effacerConsole();
                printf("\n\n\t\tMONOPOLY %cDITION CRISE FINANCI%cRE", 0x90, 0xD4);
                printf("\n\n\n", 0x88);
                printf("\n\n\n\n\t\tDisponible uniquement sous windows\n");
                Sleep(500);
                effacerConsole();
                printf("\n\n\t\tMONOPOLY %cDITION CRISE FINANCI%cRE", 0x90, 0xD4);
                printf("\n\n\n\t      - Appuyez sur Entr%ce pour commencer -", 0x82);
                printf("\n\n\n\n\t\tDisponible uniquement sous windows\n");
                Sleep(500);
                break;
            default:
                break;
        }
    }while(cOk!=1);
    effacerConsole();
    printf("OK");
}
