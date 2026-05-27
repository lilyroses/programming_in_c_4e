// 7-4.c - Function to calculate nth trianguar number
#include <stdio.h>

void calculateTriangularNum(int n) {
    int i;
    int triangularNum = 0;

    for (i = 1; i <= n; ++i) {
        triangularNum += i;
    }

    printf("Triangular number [%i] is: %i\n", n, triangularNum);
}

int main(void) {
    calculateTriangularNum(10);
    calculateTriangularNum(20);
    calculateTriangularNum(50);

    return 0;
}