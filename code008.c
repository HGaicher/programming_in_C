/* code 008*/
#include <stdio.h>

int main(void)
{
    double a, b, c, d, e;

    a = 5/9;
    b = 5.0/9;
    c = 5.0/9.0;
    d = 5/2;
    e = 8/3;

	printf("a = %f\n",a);   // = 0.000000
	printf("b = %f\n",b);   // = 0.555556
	printf("c = %f\n",c);   // = 0.555556
    	printf("d = %f\n",d);   // = 2.000000
	printf("e = %f\n",e);   // = 2.000000
}