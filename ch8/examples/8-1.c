/* Example 8-1.c
 * Illustrating a Structure (struct)
 */
#include <stdio.h>


int main(void) {

    struct  date {
        int  month;
        int  day;
        int  year;
    };

    struct date  today;

    today.month = 12;
    today.day = 4;
    today.year = 2026;

    printf("\nToday's date is: %.2i/%.2i/%.2i\n",
            today.month, today.day, today.year % 100);

    return 0;
}