/* code 009*/
#include <stdio.h>

int main(void)
{
     const float MWST = 20;
     float betrag;

     printf("Bitte geben Sie den Verkaufspreis ein \n");
     scanf("%f", &betrag);

     printf("Der Nettobetrag = %.2f\n", betrag/1.2);
     printf("Die MwSt = %.2f\n", betrag - (betrag/1.2));

     //MWST = 25;  // Eine erneute Wertzuweisung ist nicht erlaubt!
}
