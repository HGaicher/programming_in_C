/* code006 */
#include <stdio.h>

const double PI = 3.1415926;    // Konstante mit dem Wert von PI
const double RADIUS = 4.0;        // Konstante mit dem Wert 4

int main(void)
{
   double umfang=0, flaeche=0;

   umfang = 2 * RADIUS * PI;
   flaeche = RADIUS * RADIUS * PI;

   printf("Umfang des Kreises: %f",umfang);
   printf("\nFlaeche des Kreises: %f",flaeche);
}