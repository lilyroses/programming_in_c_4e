#include <stdio.h>


int main(void) {

    int     i;

    float   avg;
    float   decimalArr[10];
    float   total;

    
    decimalArr[0] = 0.00;
    decimalArr[1] = 3.738;
    decimalArr[2] = 7.934;
    decimalArr[3] = 2.03;
    decimalArr[4] = 3.153;
    decimalArr[5] = 144.3;
    decimalArr[6] = 999.333;
    decimalArr[7] = 1.32;
    decimalArr[8] = decimalArr[2] * decimalArr[3];
    decimalArr[9] = decimalArr[7] - 100.24;

    // Get each num in array and add to total
    for (i = 0; i < 10; ++i) {
        total += decimalArr[i];
    }
    // Get the average
    avg = total / 10;

    printf("\nAverage: %f\n", avg);

    return 0;

}