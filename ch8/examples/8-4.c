// Example 8-4 - Program to determine tomorrow's date
#include <stdio.h>
#include <stdbool.h>


/* globals */
struct date {
    int     month;
    int     day;
    int     year;
};


// Function to calculate tomorrow's date
struct date dateUpdate(struct date today) {

    // created and returned by this function
    struct date tomorrow;

    // another function in this script
    int numDays(struct date d);

    // if date is not the final day of the month
    if (today.day != numDays(today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    // if date is the last day of the month
    else if (today.month == 12) {  // AND it's the end of year
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }
    else {                         // it's NOT the end of the year
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }

    return tomorrow;
}


int numDays(struct date d) {
    /* functions */
    bool        isLeapYear(struct date d);

    /* variables */
    int         days;
    const int   daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
                                     31, 31, 30, 31, 30, 31 };

    if (isLeapYear(d) && d.month == 2) {
        days = 29;
    }
    else {
        days = daysPerMonth[d.month - 1];  // -1 for 0-indexing
    }

    return days;

}


/* functions */
bool isLeapYear(struct date d) {
    bool    leapYearFlag;
    // bool    leapYearFlag = false;

    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
        leapYearFlag = true;  // It's a leap year
    }
    else {
        leapYearFlag = false;
    }

    return leapYearFlag;
}


int main(void) {
    struct date     dateUpdate(struct date today);
    struct date     thisDay;
    struct date     nextDay;

    printf("\nEnter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &thisDay.month, &thisDay.day,
            &thisDay.year);

    nextDay = dateUpdate(thisDay);

    printf("\nTomorrow's date is %.2i/%.2i/%.2i\n",
            nextDay.month, nextDay.day, nextDay.year);

    return 0;
}