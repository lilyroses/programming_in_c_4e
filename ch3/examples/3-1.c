/* Example 3-1.c - Using the Basic Data Types */

#include <stdio.h>

int main (void)
{
    int     intVar = 100;
    float   floatVar = 331.79;
    double  doubleVar = 8.44e+11;
    char    charVar = 'W';

    _Bool   boolVar = 0;

    printf ("\nintVar (%%i) = %i\n", intVar);
    printf ("floatVar (%%f) = %f\n", floatVar);
    printf ("doubleVar (%%e) = %e\n", doubleVar);
    printf ("doubleVar (%%g) = %g\n", doubleVar);
    printf ("charVar (%%c) = %c\n", charVar);

    printf ("boolVar (%%i) = %i\n", boolVar);

    return 0;
}