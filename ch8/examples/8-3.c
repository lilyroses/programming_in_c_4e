/* Example 8-3.c - Revising the program to determine tomorrow's date */
#include <stdio.h>
#include <stdbool.h>


struct  date {
    int     month;
    int     day;
    int     year;
};


int main(void) {
    struct date today;
    struct date tomorrow;

    int numDays(struct date d);

    printf("\nEnter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);

    if (today.day != numDays(today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month == 12) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    printf("\nTomorrow's date is: %.2i/%.2i/%.2i\n", today.month, today.day, today.year % 100);

    return 0;

}


int numDays(struct date d) {
    int     days;
    bool    isLeapYear(struct date d);
    const int   daysPerMonth[12] = {
        31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31};

    if (isLeapYear(d) == true && d.month == 2) {
        days = 29;
    }
    else {
        days = daysPerMonth[d.month-1];
    }

    return days;
}


bool isLeapYear(struct date d) {
    bool leapYearFlag;

    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
        leapYearFlag = true;
    }
    else {
        leapYearFlag = false;
    }

    return leapYearFlag;
}