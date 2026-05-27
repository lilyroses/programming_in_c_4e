// 7-10.c - Revised function to find min value in array
#include <stdio.h>

int findMinValue(int values[], int numElements) {
    int minValue;
    int i;

    minValue = values[0];

    for (i = 1; i < numElements; ++i) {
        if (values[i] < minValue) {
            minValue = values[i];
        }
    }

    return minValue;
}

int main(void) {
    int array1[5] = { 157, -28, -37, 26, 10 };
    int array2[7] = { 12, 45, 1, 10, 5, 3, 22 };
    int findMinValue(int values[], int numElements);

    printf("array1 minimum: %i\n", findMinValue(array1, 5));
    printf("array2 minimum: %i\n", findMinValue(array2, 7));

    return 0;
}