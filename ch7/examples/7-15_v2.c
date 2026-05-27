#include <stdio.h>


int getNum(void) {
    long int numToConvert;

    printf("\nEnter number to convert: ");
    scanf("%li", &numToConvert);

    return numToConvert;
}

int getBase(void) {
    int base;

    printf("Enter base: ");
    scanf("%i", &base);

    if (base < 2 || base > 16) {
        printf("Error: Invalid base. Must be between 2-16\n");
        base = 10;
    }
    return base;
}


int main(void) {
    long int    userNum;
    int         userBase;
    int getNum(void);
    int getBase(void);

    userNum = getNum();
    userBase = getBase();

    printf("\nYou chose [%i] for your number.\n", userNum);
    printf("You chose [%i] for your base.\n", userBase);

    return 0;
}