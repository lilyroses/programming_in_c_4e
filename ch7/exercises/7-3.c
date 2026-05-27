/*
 * 7-3.c - Modify example 7-8.c so that the value of epsilon is passed as an
 * argument to the squareRoot() function. Experiment with different values of
 * epsilon.
 */
#include <stdio.h>


// get abs value of number
float absValue(float x) {
    if (x < 0) {
        x = -x;
    }

    return x;
}


// compute square root of number
float squareRoot(float x, const float epsilon) {
    float guess = 1.0;
    float absValue(float x);

    while (absValue(guess * guess - x) > epsilon) {
        guess = (x / guess + guess) / 2.0;
    }

    return guess;
}


int main(void) {
    float epsilon = 0.2;
    float squareRoot(float x, float epsilon);
    
    printf("squareRoot(16.0) = %f\n", squareRoot(16.0, epsilon));

    return 0;
}