/* code 005 */
#include <stdio.h>

int main (void)					
{          
     int a=2, b=5, hilf=0;

     printf("Die Variable a = %i und b = %i",a,b);	

     hilf = a;
     a = b;
     b = hilf;

     printf("\nDie Variable a = %i und b = %i",a,b);	
}
