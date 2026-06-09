/* Exercise 7-12.c
 *
 * A matrix M with i rows, j columns can be transposed into a matrix N having
 * j rows, i columns by setting the value of N_ab equal to the value of M_ba
 * for all relevant values of a, b.
 * 
 *      b. Using variable length arrays, rewrite transposeMatrix() to take the
 *         number of rows and columns as arguments, then transpose the matrix
 *         of the specified dimensions. 
 */
#include <stdio.h>


void transposeMatrix(int rows, int cols,
                     int arr[rows][cols],
                     int arr2[cols][rows])
{
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr2[j][i] = arr[i][j];
        }
    }
}


void displayMatrix(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%5i", arr[i][j]);
        }
        printf("\n");
    }

}


int main(void) {
    int rows, cols;

    int arr[4][5] = {
        { 1, 2, 3, 4, 5 },
        { 6, 7, 8, 9, 10 },
        { 11, 12, 13, 14, 15 },
        { 16, 17, 18, 19, 20 },
    };
    
    int arr2[5][4] = {0};
    
    printf("\nMatrix 1:\n");
    displayMatrix(4, 5, arr);

    transposeMatrix(4, 5, arr, arr2);

    printf("\nMatrix 2 (transposed):\n");
    displayMatrix(5, 4, arr2);

    return 0;
}