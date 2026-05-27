// 7-3.c
#include <stdio.h>


void sayHello(void) {
    printf("Hello, World!\n");
}

int main(void) {
    int i;

    for (i = 0; i < 5; ++i) {
        sayHello();
    }

    return 0;
}