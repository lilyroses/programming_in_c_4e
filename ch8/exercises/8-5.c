/* Exercise 8-5.c 
 * 
 */

#include <stdio.h>
#include <stdbool.h>


/* globals */
struct date {
    int     month;
    int     day;
    int     year;
};


struct time {
    int     hours;
    int     minutes;
    int     seconds;
};


struct dateTime {
    struct date     sdate;
    struct time     stime;
};


bool isLeapYear(struct date d);
int numDays(struct date d);
struct date updateDate(struct date d);
struct time updateTime(struct time t);
struct dateTime clockKeeper(struct dateTime today);


/* functions */
bool isLeapYear(struct date d) {
    bool leapYearFlag;

    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0) {
        leapYearFlag = true;
    } else {
        leapYearFlag = false;
    }

    return leapYearFlag;
}


int numDays(struct date d) {
    int         days;
    const int   daysPerMonth[12] = { 31, 28, 31, 30, 31, 30,
                                     31, 31, 30, 31, 30, 31 };

    if (isLeapYear(d) == true && d.month == 2) {
        days = 29;
    }
    else {
        days = daysPerMonth[d.month - 1];
    }

    return days;
}


struct date updateDate(struct date d) {
    struct date tomorrow;
    
    if (d.day != numDays(d)) {
        tomorrow.day = d.day + 1;
        tomorrow.month = d.month;
        tomorrow.year = d.year;
    }
    else if (d.month == 12) {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = d.year + 1;
    }
    else {
        tomorrow.day = 1;
        tomorrow.month = d.month + 1;
        tomorrow.year = d.year;
    }

    return tomorrow;
}


struct time updateTime(struct time t) {
    ++t.seconds;

    if (t.seconds == 60) {
        t.seconds = 0;
        t.minutes++;

        if (t.minutes == 60) {
            t.minutes = 0;
            t.hours++;

            if (t.hours == 24) {
                t.hours = 0;
            }
        }
    }
    return t;
}


struct dateTime clockKeeper(struct dateTime today) {

    today.stime = updateTime(today.stime);

    if (today.stime.hours == 0 && today.stime.minutes == 0
        && today.stime.seconds == 0) {
            today.sdate = updateDate(today.sdate);
        }

    return today;
}


int main(void) {
    int i;
    struct dateTime today;

    printf("\nEnter date (mm/dd/yyyy): ");
    scanf("%i/%i/%i", &today.sdate.month, &today.sdate.day, &today.sdate.year);

    printf("\nEnter time (hh:mm:ss): ");
    scanf("%i:%i:%i", &today.stime.hours, &today.stime.minutes, &today.stime.seconds);

    for (i = 0; i < 10; ++i) {
        printf("\nRunning clockKeeper()...\n");
        today = clockKeeper(today);
        printf("NOW: %02i/%02i/%02i %02i:%02i:%02i\n",
            today.sdate.month, today.sdate.day, today.sdate.year,
            today.stime.hours, today.stime.minutes, today.stime.seconds);
    }

    return 0;
}