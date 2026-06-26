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
int N(struct date aDate);


/* functions */
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
    // constant values in the days between algorithm
    int x; 
    int y;
    int f_val;
    int g_val;
    int N;

    x = 1461;
    y = 153;

    f_val = f(aDate.year, aDate.month);
    g_val = g(aDate.month);

    N = x * f_val / 4 + y * g_val / 5 + aDate.day;

    return N;
}


int main(void) {

    int N1;
    int N2;
    int numDays;

    struct date thisDate;
    struct date thatDate;

    printf("\nEnter first date (mm/dd/yyyy): ");
    scanf("%i/%i/%i", &thisDate.month, &thisDate.day, &thisDate.year);
    
    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%i/%i/%i", &thatDate.month, &thatDate.day, &thatDate.year);

    N1 = N(thisDate);
    N2 = N(thatDate);

    numDays = N2 - N1;
    if (numDays < 0) {
        numDays *= -1;
    }

    if (numDays == 1) {
        printf("There is %i day between this date and the other date.\n", numDays);
    } else {
        printf("\nThere are %i days between this date and the other date.\n", numDays);
    }

    return 0;
}
