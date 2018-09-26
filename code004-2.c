/* code 004-2*/
extern int x;           // Deklaration der globalen Variable x
extern int y;           // Deklaration der globalen Variable y

void addiere(void)      // Definition der Funktion addiere
{
     x = 4;				// Zugriff auf x in main.c
     y = 6;				// Zugriff auf y in main.c
     x = x + y;          // Zugriff auf x und y in main.c
}
