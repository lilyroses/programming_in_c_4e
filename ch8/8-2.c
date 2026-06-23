/* Exercise 8-2.c
 * 
 * Calculate number of days between two dates
 * N = (((1461 * f(year, month)) / 4) + ((153 * g(month)) / 5)) + day
 * where:
 * f(year, month) = year - 1 if month <= 2 else year
 * g(month) = month + 13 if month <= 2 else month + 1
*/
#include <stdio.h>


struct Date {
    int     month;
    int     day;
    int     year;
};


int f(struct Date d);


int f(struct Date d) {
    int year;
    int month;
    int x;

    year = d.year;
    month = d.month;

    x = year;

    if (month <= 2) {
        x -= 1;
    }

    return x;
}


int main(void) {
    

    return 0;
}
