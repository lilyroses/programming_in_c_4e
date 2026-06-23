/* Exercise 8-2.c
 * 
 * Calculate number of days between two dates
 * N = (((1461 * f(year, month)) / 4) + ((153 * g(month)) / 5)) + day
 * where:
 * f(year, month) = year - 1 if month <= 2 else year
 * g(month) = month + 13 if month <= 2 else month + 1
*/
#include <stdio.h>

/* globals */
struct  date {
    int     month;
    int     day;
    int     year; 
};

int f(int year, int month);
int g(int month);
int N(struct date);


int f(int year, int month) {
    int x;
    
    x = year;
    if (month <= 2) {
        x--;
    }
    return x;
}


int g(int month) {
    int x;

    x = month + 1;
    if (month <= 2) {
        x += 12;
    }
    return x;
}


int N(struct date aDate) {
    
}


int main(void) {

    int f_val;
    int g_val;

    struct date thisDate = { 7, 2, 2015 };
    struct date thatDate = { 7, 16, 2015 };

    f_val = f(thisDate.year, thisDate.month);
    printf("f_val is %i\n", f_val);

    g_val = g(thisDate.month);
    printf("g_val is %i\n", g_val);

    return 0;
}
