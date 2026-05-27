/* Exercise 7-5.c - Calculate square root of number. Change example 7-8.c
 * so that instead of comparing the difference between the value of x and the
 * value of guess**2, the program compares the ratio of the two values to 1.
 * The closer this ratio gets to 1, the more accurate the approximation of the
 * square root.
 */
// 7-8.c - Calculate square root of number
#include <stdio.h>

float absValue(float);
float squareRoot(float, const float);



// get absolute value of a number
float absValue(float x) {
    if (x < 0) {
        x = -x;
    }
    
    return x;
}


// compute square root of number
float squareRoot(float x, const float epsilon) {
    float guess = 1.0;

    do {
        guess = (x / guess + guess) / 2.0;
        printf("Guess: [%f]\n", guess);
    }
    while (absValue(guess * (guess / x)) >= epsilon);

    return guess;
}


int main(void) {
    const float epsilon = 1.00001;

    printf("squareRoot(2.0) = %g\n", squareRoot(2.0, epsilon));
    printf("squareRoot(144.0) = %f\n", squareRoot(144.0, epsilon));
    printf("squareRoot(17.5) = %f\n", squareRoot(17.5, epsilon));

    return 0;
}