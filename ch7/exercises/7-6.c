/* Exercise 7-6.c
 * Modify example 7-8.c so that the squareRoot() function accepts a double
 * precision argument and returns the result as a double precision value. Be
 * sure to change the epsilon value to reflect that double precision values
 * are being used. 
 */
#include <stdio.h>


/* functions*/
double absValue(double);
double squareRoot(double, const double);


// get absolute value of a number
double absValue(double x) {
    if (x < 0) {
        x = -x;
    }
    
    return x;
}


// compute square root of number
double squareRoot(double x, const double epsilon) {
    double guess = 1.0;

    while (absValue(guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
    }

    return guess;
}


int main(void) {
    const double epsilon = .00001;

    printf("squareRoot(2.0) = %f\n", squareRoot(2.0, epsilon));
    printf("squareRoot(144.0) = %f\n", squareRoot(144.0, epsilon));
    printf("squareRoot(17.5) = %f\n", squareRoot(17.5, epsilon));

    return 0;
}