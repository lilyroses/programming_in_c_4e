/* Exercise 8-4.c
 *
 * If you take the value of N as computed in Exercise 8-2, subtract
 * 621,049 from it, and then take the result modulo 7, you get a number
 * from 0 to 6 that represents the day of the week (Sunday through
 * Saturday, respectively) on which the particular day falls. For
 * example, the value of N computed for August 8, 2004, is 732,239 as
 * derived previously. 732,239 − 621,049 gives 111,190, and 111,190 % 7
 * gives 2, indicating that this date falls on a Tuesday. Use the
 * functions developed in the previous exercise to develop a program
 * that displays the day of the week on which a particular date falls.
 * Make certain that the program displays the day of the week in
 * English (such as “Monday”).
 */
#include <stdio.h>


/* globals */
struct  date {
    int     month;
    int     day;
    int     year; 
};

struct  day {
    // days accessed by index in days array; day num attr not required
    int     nameLen;  // for iterating thru chars in day name
    char    name[9];  // longest day name (Wednesday) has 9 chars
};

// array of day structs for days of weeks; first value is nameLen
const struct day days[7] = {
    { 6, {'S', 'u', 'n', 'd', 'a', 'y'} },
    { 6, {'M', 'o', 'n', 'd', 'a', 'y'} },
    { 7, {'T', 'u', 'e', 's', 'd', 'a', 'y'} },
    { 9, {'W', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y'} },
    { 8, {'T', 'h', 'u', 'r', 's', 'd', 'a', 'y'} },
    { 6, {'F', 'r', 'i', 'd', 'a', 'y'} },
    { 8, {'S', 'a', 't', 'u', 'r', 'd', 'a', 'y'} },
};

int N(struct date aDate);
int getDayNum(struct date aDate);


/* functions */
int N(struct date aDate) {
    // constant values in the 'days between dates' algorithm
    int     x;
    int     y;
    int     f_val;
    int     g_val;
    int     N;
    
    x = 1461;
    y = 153;
    
    f_val = aDate.year;
    g_val = aDate.month + 1;
    
    if (aDate.month <= 2) {
        f_val -= 1;
        g_val += 12;
    }

    N = ((x * f_val) / 4) + ((y * g_val) / 5) + aDate.day;

    return N;
}


int getDayNum(struct date aDate) {
    int     x;
    int     N_val;
    int     dayNum;
    
    x = 621049;
    N_val = N(aDate);
    
    dayNum = (N_val - x) % 7;

    return dayNum;
}


/* main */
int main(void) {
    int         i;
    int         dayNum;
    // struct date thisDate = { 8, 3, 2004 };
    struct date thisDate;

    // get date from user
    printf("\nEnter date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &thisDate.month, &thisDate.day, &thisDate.year);

    // calculate the day number (0-6)
    dayNum = getDayNum(thisDate);
    
    // show the day name
    printf("%02d/%02d/%d : ",
        thisDate.month, thisDate.day, thisDate.year);

    // use i to iterate through each char of day name
    for (i = 0; i < days[dayNum].nameLen; ++i) {
        printf("%c", days[dayNum].name[i]);
    }
    printf("\n");
}