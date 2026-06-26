/* Exercise 8-3.c
 *
 * Write a function elapsed_time that takes two time structs as its
 * arguments and returns a time struct that represents the elapsted
 * time (in hh, mm, ss) between the two times.
 * 
 * elapsed_time(time1, time2)
 * 
 * where time1 represents 3:45:15 and time2 represents 9:44:03, should
 * return a time structure that represents 5 hrs, 58 mins, and 48 sec.
 * Be careful with times that cross midnight.
 */
#include <stdio.h>


/* globals */
struct time {
    int     hours;
    int     minutes;
    int     seconds;
};


struct time elapsed_time(struct time time1, struct time time2);


/* functions */
struct time elapsed_time(struct time time1, struct time time2) {
    // time deltas for hr, min, s
    int dh;
    int dm;
    int ds;

    struct time elapsedTime;

    dh = time2.hours - time1.hours;
    if (dh < 0) {
        dh = 12 + dh;  // subtracting from 12
    }
    if (time2.minutes < time1.minutes) {
        dh--;  // borrow an hour if necessary
    }

    dm = time2.minutes - time1.minutes;
    if (dm < 0) {
        dm = 60 + dm;
    }
    if (time2.seconds < time1.seconds) {
        dm--;  // borrow a minute if necessary
    }

    ds = time2.seconds - time1.seconds;
    if (ds < 0) {
        ds = 60 + ds;
    }

    elapsedTime.hours = dh;
    elapsedTime.minutes = dm;
    elapsedTime.seconds = ds;

    return elapsedTime;
}


int main(void) {

    struct time elapsedTime;

    struct time time1 = { 3, 45, 15 };
    struct time time2 = { 9, 44, 3 };

    elapsedTime = elapsed_time(time1, time2);

    printf("\nTime 1: %02i:%02i:%02i\n", time1.hours, time1.minutes, time1.seconds);
    printf("Time 2: %02i:%02i:%02i\n", time2.hours, time2.minutes, time2.seconds);

    printf("\nThere are %i hours, %i minutes, and %i seconds between time 1 and time 2.\n",
        elapsedTime.hours, elapsedTime.minutes, elapsedTime.seconds);

    return 0;
}