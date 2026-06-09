// Program 3.5 Converting Between Integers and Floats
#include <stdio.h>

int main(void) {
    float   f1 = 123.125;
    float   f2;
    int     i1 = -150;
    int     i2 = -150;
    char    c = 'a';

    i1 = f1;            // float to int conversion
    printf("%f assigned to an int produces %i\n", f1, i1);

    f1 = i2;            // int to float conversion
    printf("%i assigned to a float produces %f\n", i2, f1);

    f1 = i2 / 100;      // int divided by int
    printf("%i divided by 100 produces %f\n", i2, f1);

    f2 = i2 / 100.0;    // int divded by float
    printf("%i divided by 100.0 produces %f\n", i2, f2);

    f2 = (float) i2 / 100;  // type cast operator
    printf("(float) %i divided by 100 produces %f\n", i2, f2);

    return 0;
}