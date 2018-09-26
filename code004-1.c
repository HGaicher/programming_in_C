/* code 004-1 */

#include <stdio.h>

int x, y;                   	// Definition von x und y

void addiere(void);         	// Deklaration der Funktion addiere welche sich in add.c befindet

int main(void)              	// Definition der Funktion main
{
     addiere();             	// Aufruf der Funktion addiere in add.c
     printf("Summe = %d\n",x);// Ausgabe von x, Summe = 10
}
