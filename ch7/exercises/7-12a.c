/* Exercise 7-12.c
 *
 * A matrix M with i rows, j columns can be transposed into a matrix N having
 * j rows, i columns by setting the value of N_ab equal to the value of M_ba
 * for all relevant values of a, b.
 * 
 *      a. Write a function transposeMatrix() that takes 2 arguments: a 4x5
 *         matrix and a 5x4 matrix. Transpose the 4x5 matrix and store the
 *         results back in the 5x4 matrix. Use main() to test the function. 
 */
#include <stdio.h>


void transposeMatrix(int arr[4][5], int arr2[5][4]);
void displayMatrix(int matrix[4][5]);


void transposeMatrix(int arr[4][5], int arr2[5][4]) {
    int i;
    int j;

    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 5; ++j) {
            arr2[i][j] = arr[j][i];
        }
    }
}


void displayMatrix(int matrix[4][5]) {
    int i;
    int j;

    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("%5i", matrix[i][j]);
        }
        printf("\n");
    }
}


int main(void) {
    int i;
    int j;
    int arr[4][5] = {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15 },
        { 16, 17, 18, 19, 20 },
    };
    int arr2[5][4] = {0};

    void transposeMatrix(int arr[4][5], int arr2[5][4]);

    printf("\nMatrix 1:\n");
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 5; ++j) {
            printf("%4i", arr[i][j]);
        }
        printf("\n");
    }

    transposeMatrix(arr, arr2);

    printf("\nMatrix 2:\n");
    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 4; ++j) {
            printf("%4i", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}