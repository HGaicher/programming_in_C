/* code 010*/
#include <stdio.h>

double fahrenheit=100, celsius=0;  	        // diese Variablen sind globale Variablen

double temperaturumrechnung(void)           // Funktion temperaturumrechnung mit Rückgabewert double
{
    return ((5.0/9.0)*(fahrenheit-32));     // return Division von 5.0 / 9.0 als Gleitpunktzahl!
}

int main(void)
{
    /* ruft die Funktion temperaturumrechnung auf und speichert den returnwert in celsius */
    celsius = temperaturumrechnung();
    printf("%.0f Grad Fahrenheit = %.2f Grad Celsius\n",fahrenheit, celsius);
    fahrenheit += 10;      // erhöht den Wert von fahrenheit um 10
    celsius = temperaturumrechnung();
    printf("%.0f Grad Fahrenheit = %.2f Grad Celsius\n",fahrenheit, celsius);
}