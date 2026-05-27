/*
 * Exercise 7-9.c
 * The LCM of two positive ints u and v is the smallest positive int that is
 * evenly divisible by both u and v. Example: LCM of 15 and 10 is 30 because
 * 30 is the smallest int divisible by both 15 and 10.
 * Use the gcd() function from example 7-6.c:
 * 
 *      lcm(u, v) = (u * v) / gcd(u, v)
 */
#include <stdio.h>


int gcd(int u, int v);
int lcm(int u, int v);


int gcd(int u, int v) {
    int temp;

    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}


int lcm(int u, int v) {
    int result;

    result = (u * v) / gcd(u, v);
    return result;

}


int main(void) {
    int u;
    int v;
    int result;

    u = 12;
    v = 5;

    result = lcm(u, v);
    printf("\nLCD of %i and %i is %i\n", u, v, result);

    return 0;
}