/*
 * Exercise 7-4.c - MNodify 7-8.c so that the value of guess is printed with
 * every iteration of the while loop.
 */
// 7-8.c - Calculate square root of number
#include <stdio.h>


// get absolute value of a number
float absValue(float x) {
    if (x < 0) {
        x = -x;
    }
    
    return x;
}


// compute square root of number
float squareRoot(float x) {

    const float epsilon = .00001;
    float guess = 1.0;
    int i = 0;

    while (absValue(guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
        ++i;
        printf("[%i]. Guess: [%f]\n", i, guess);
    }

    return guess;
}


int main(void) {
    printf("squareRoot(2.0) = %f\n", squareRoot(2.0));
    printf("squareRoot(144.0) = %f\n", squareRoot(144.0));
    printf("squareRoot(17.5) = %f\n", squareRoot(17.5));

    return 0;
}