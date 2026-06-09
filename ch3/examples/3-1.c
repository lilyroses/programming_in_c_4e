/* Example 3-1.c */
#include <stdio.h>


int main (void)
{
    int         intVar  = 100;
    float       fltVar  = 331.79;
    double      dblVar  = 8.44e+11;
    char        chrVar  = 'W';

    _Bool       boolVar = 0;

    printf("intVar = %i\n", intVar);
    printf("floatVar = %f\n", fltVar);
    printf("doubleVar = %e\n", dblVar);
    printf("doubleVar = %g\n", dblVar);
    printf("charVar = %c\n", chrVar);
    
    printf("boolVar = %i\n", boolVar);

    return 0;
}