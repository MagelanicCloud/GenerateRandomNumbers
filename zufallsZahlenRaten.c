/*******************************************************************************
* Autor:      MagelanicCloud, <addYourName>			  						   								   									   
* Version:    1.0				   			   								   									   
* Datum:      16.03.2012 									   
********************************************************************************
*
*
* Beschreibung: Diese Programm kann zufällige zahlen Generieren. ^^
*     
* Benötigte Libraries:
* - stdlib.h
* - stdio.h
* - time.h
*
*******************************************************************************/

/***  Include Files ***********************************************************/
#include <stdlib.h> /* Funktionsbibliothek: Hilfsfunktionen */
#include <stdio.h>  /* Funktionsbibliothek: Standard Ein- Ausgabe */
#include <time.h>   /* Funktionsbibliothek: Bibliothek der Zeit*/
/***  Globale Deklarationen und Definitionen **********************************/


void getRandomSeed()
{
     static char Zufall = 0;
     if(Zufall != 1)
     {
         /* inizialisierung random seed: */
         srand ( time(NULL) );
         Zufall = 1;
     }
}


int getRandom(int Min, int Max)
{ 
    getRandomSeed();
    return (rand() % (Max - Min +1) + Min);
}

double getRandomDouble(double Min, double Max)
{ 
   getRandomSeed();
   return ((((double)rand()) / (double)RAND_MAX) * (Max - Min)) + Min;
}

int main(void) 
{
    int i;
    for(i=0; i<20; i++)
    {
        printf("Die loesung ist %d\n", getRandom(12,14));
    }
    
    for(i=0; i<20; i++)
    {
        printf("Die loesung ist %f\n", getRandomDouble(1.1,2.3));
    }
    system("PAUSE");
}
