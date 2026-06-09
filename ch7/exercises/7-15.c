/* Exercise 7-15.c 
 *
 * Modify program 7-15.c so that the user is asked again to type in the
 * value of the base if an invalid base is entered, and continually asked for
 * the value of the base until a valid response is given.
 */
#include <stdio.h>


/* globals */
int         convertedNum[64];
long int    numToConvert;
int         base;
int         digit = 0;

/* functions */
void    getNumAndBase (void);
void    convertNum (void);
void    displayConvertedNum (void);


void getNumAndBase(void) {
    printf("\nNumber to convert: ");
    scanf("%li", &numToConvert);

    printf("Base: ");
    scanf("%i", &base);
    if (base < 2 || base > 16) {
        do {
            printf("Base: ");
            scanf("%i", &base);
        }
        while (base < 2 || base > 16);
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
    // void getNumAndBase(void);
    // void convertNum(void);
    // void displayConvertedNum(void);

    getNumAndBase();
    convertNum();
    displayConvertedNum();

    return 0;
}