/* code 007*/
#include <stdio.h>

double fahrenheit=100, celsius=0;

int main(void)
{
     celsius = ((5.0/9.0)*(fahrenheit-32));  // Division von 5.0 / 9.0 als Gleitpunktzahl!

     printf("%.0f Grad Fahrenheit = %.2f Grad Celsius\n",fahrenheit, celsius);
}
