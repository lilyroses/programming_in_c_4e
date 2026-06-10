// Example 6-7.c - Converting postive int to another base
#include <stdio.h>


int main(void) {
    int         base;
    int         nextDigit;
    long int    numToConvert;

    int         i = 0;
    int         convertedNum[64];
    const char  baseDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7',
                                  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

    // get number and base
    printf("Number to convert: ");
    scanf("%ld", &numToConvert);
    printf("Base: ");
    scanf("%i", &base);

    // convert to base
    do {  // do loop ensures the code executes at least once
        // the last digit of the newly converted number is the remainder of the
        // number modulo base
        convertedNum[i] = numToConvert % base;
        ++i;
        // divide the number to convert by the base and continue the process
        numToConvert = numToConvert / base;
    }
    while (numToConvert != 0);


    // display results in reverse order
    printf("\nConverted number: ");
    

    // i is len of convertedNum array; decrement for index of final num
    for (--i; i >= 0; --i) {
        // get nums from array reversed
        nextDigit = convertedNum[i];
        // 0-9 map to 0-9; 10-16 map to A-F
        printf("%c", baseDigits[nextDigit]);
    }
    printf("\n");
    

    return 0;
}