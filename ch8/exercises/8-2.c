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
int     f(int month, int year);
int     g(int month);
int     N(struct date);
int     findNumDaysBetweenDates(struct date thisDate, struct date nextDate);
void    formatDate(struct date aDate);

/* functions */
int f(int month, int year) {
    int n;
    n = year;
    if (month <= 2) {
       n -= 1;
    }
    return n;
}

int g(int month) {
    int g;
    
    g = month + 1;
    if (month <= 2) {
        g += 12;
    }
    return g;
}

int N(struct date aDate) {
    int c1;
    int c2;
    int i;
    int j;
    int F;
    int G;
    int N;

    c1 = 1461;
    c2 = 153;

    F = f(aDate.month, aDate.year);
    G = g(aDate.month);

    i = (c1 * F) / 4;
    j = (c2 * G) / 5;
    N = i + j + aDate.day;

    return N;
}

int findNumDaysBetweenDates(struct date thisDate, struct date nextDate) {
    int N1;
    int N2;

    N1 = N(thisDate);
    N2 = N(nextDate);

    return N2 - N1;
}

void formatDate(struct date aDate) {
    int month;
    int day;
    int year;

    month = aDate.month;
    day = aDate.day;
    year = aDate.year;

    printf("%.2i/%.2i/%.2i\n");
}


int main(void) {
    int numDaysBetweenDates;

    struct date thisDate = { 8, 8, 2014 };
    struct date nextDate = { 2, 22, 2015 };

    thisDate.year = 2004;
    nextDate.year = 2005;

    numDaysBetweenDates = findNumDaysBetweenDates(thisDate, nextDate);
    printf("There are %i days between the two dates.", numDaysBetweenDates);
}