// 7-15.c - Converting a positive int to another base
#include <stdio.h>

int         convertedNum[64];
long int    numToConvert;
int         base;
int         digit = 0;


void getNumAndBase(void) {
    printf("\nNumber to convert: ");
    scanf("%li", &numToConvert);

    printf("Base: ");
    scanf("%i", &base);

    if (base < 2 || base > 16) {
        printf("Error: Invalid base. Must be between 2-16\n");
        base = 10;
    }
}

void convertNum(void) {
    do {
        convertedNum[digit] = numToConvert % base;
        ++digit;
        numToConvert /= base;
    }
    while (numToConvert != 0);
}

void displayConvertedNum(void) {
    const char  baseDigits[16] =
            { '0', '1', '2', '3', '4', '5', '6', '7',
              '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
    int     nextDigit;

    printf("Converted number = ");

    for (--digit; digit >= 0; --digit) {
        nextDigit = convertedNum[digit];
        printf("%c", baseDigits[nextDigit]);
    }
    printf("\n");
}

int main(void) {
    void getNumAndBase(void);
    void convertNum(void);
    void displayConvertedNum(void);

    getNumAndBase();
    convertNum();
    displayConvertedNum();

    return 0;
}