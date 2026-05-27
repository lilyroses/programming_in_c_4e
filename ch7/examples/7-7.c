// 7-7.c - Calculate abs value
#include <stdio.h>


float absValue(float x) {
    if (x < 0) {
        x = -x;
    }

    return x;
}

int main(void) {
    float f1 = -15.5;
    float f2 = 20.0;
    float f3 = -5.0;
    int i1 = -716;
    float result;

    result = absValue(f1);
    printf("result = %.2f\n", result);
    printf("f1 = %.2f\n", f1);

    result = absValue(f2) + absValue(f3);
    printf("result = %.2f\n", result);
    
    result = absValue( (float) i1);
    printf("result = %.2f\n", result);
    
    result = absValue(i1);
    printf("result = %.2f\n", result);
    
    printf("%.2f\n", absValue(-6.0) / 4);

    return 0;
}