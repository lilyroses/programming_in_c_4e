// 7-13.c - Using multidimensional arrays and functions
#include <stdio.h>

int main(void) {
    void    scalarMultiply(int matrix[3][5], int scalar);
    void    displayMatrix(int matrix[3][5]);
    int     sampleMatrix[3][5] = 
            {
                {  7, 16, 55, 13, 12 },
                { 12, 10, 52,  0,  7 },
                { -2,  1,  2,  4,  9 }
            };
    
    printf("Original matrix:\n");
    displayMatrix(sampleMatrix);

    scalarMultiply(sampleMatrix, 2);

    printf("\nMultiplied by 2:\n");
    displayMatrix(sampleMatrix);

    scalarMultiply(sampleMatrix, -1);

    printf("\nNow multiplied by -1:\n");
    displayMatrix(sampleMatrix);

    return 0;
}

// Function to multiply 3x5 array by a scalar
void scalarMultiply(int matrix[3][5], int scalar) {
    int row;
    int col;

    for (row = 0; row < 3; ++row) {
        for (col = 0; col < 5; ++col) {
            matrix[row][col] *= scalar;
        }
    }
}

void displayMatrix(int matrix[3][5]) {
    int row;
    int col;

    for (row = 0; row < 3; ++row) {
        for (col = 0; col < 5; ++col) {
            printf("%5i", matrix[row][col]);
        }
        printf("\n");
    }
}