/* Exercise 7-8.c
 * 
 * QUADRATIC EQUATION:  ax^2 + bx + c = 0
 * DISCRIMINANT:        b^2 - 4ac
 * 
 * The values of x which satisfy a particular quadratic equation, known as the
 * roots of the equation, can be calculated by substituting the values of a,
 * b, and c into the following formula:
 * 
 *      x = (-b +/- sqrt(b^2 - 4ac)) / 2a
 * 
 * 
 * 1. Get a, b, and c as arguments.
 * 2. Solve for the DISCRIMINANT. If it is less than 0, x1 and x2 are
 *      imaginary. If so, print a message indicating so and exit. Otherwise,
 *      continue.
 * 3. Solve for the two roots of the equation, x1 and x2.
 * 4. Print the result.
 */
#include <stdio.h>


double absValue(double);
double squareRoot(double);
int findDiscriminant(int, int, int);


// get the absolute value of a number
double absValue(double x) {
    if (x < 0) {
        x = -x;
    }

    return (double) x;
}


// get the square root of a number
double squareRoot(double x) {
    const double epsilon = 0.0001;
    double guess = 1.0;
    
    while (absValue(guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
    }

    return guess;
}


// calculate the discriminator for a quadtratic equation
int findDiscriminant(int a, int b, int c) {
    int discriminant;

    discriminant = (b * b) - (4 * a * c);
    
    return discriminant;
}


int main(void) {
    int a;
    int b;
    int c;
    int discriminant;
    double x1;
    double x2;

    printf("Enter a: ");
    scanf("%i", &a);
    
    printf("Enter b: ");
    scanf("%i", &b);

    printf("Enter c: ");
    scanf("%i", &c);

    discriminant = findDiscriminant(a, b, c);
    
    if (discriminant < 0) {
        printf("\nError: discriminant is less than 0. Roots of equation are imaginary.\n");
        return 0;
    }
 
    x1 = (double) (-b + squareRoot(discriminant)) / (2 * a);
    x2 = (double) (-b - squareRoot(discriminant)) / (2 * a);
    
    printf("\nx1 = %g\n", x1);
    printf("x2 = %g\n", x2);

    return 0;
}