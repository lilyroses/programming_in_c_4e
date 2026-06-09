#include <stdio.h>


int getNum(void) {
    int num;

    printf("\nEnter num: ");
    scanf("%i", &num);

    return num;
}


int main(void) {
    int num;
    int getNum();

    do {
        num = getNum();
    } while (num < 10);

    printf("\nYou entered %i\n", num);
    return 0;
}