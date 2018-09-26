/* code 011*/
#include <stdio.h>

int i=2;    // globale Variable i=2

void add(void)
{
    int ergebnis = i+i;    // ergebnis = 4
    printf("ergebnis = %d\n", ergebnis);
}
int main(void)
{
    add();      // ruft die Funktion add() auf

    int ergebnis = 5 * i;  // ergebnis = 10

    printf("ergebnis = %d\n", ergebnis);
}