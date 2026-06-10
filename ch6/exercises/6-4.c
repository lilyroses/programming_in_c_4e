/* Exercise 6-4.c
 *
 * A program that calculates the average of an array of 10 floating
 * point values
 */
#include <stdio.h>


int main(void) {
    int     i;
    float   sum;
    float   avg;
    float   values[10] = {};
    
    for (i = 0; i < 10; ++i) {
        values[i] = 0.0;
    }

    for (i = 0; i < 10; ++i) {
        printf("Value: ");
        scanf("%f", &values[i]);
    }

    for (i = 0; i < 10; ++i) {
        sum += values[i];
    }
    avg = sum / 10;
    printf("\nAverage: %f\n", avg);

    return 0;
}