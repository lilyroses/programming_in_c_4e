#include <stdio.h>


struct day {
    int     num;
    int     nameLen;
    char    name[9];
};


// const struct day days[7] = {
//     { 0, {'S', 'u', 'n'} },
//     { 1, {'M', 'o', 'n'} },
//     { 2, {'T', 'u', 'e'} },
//     { 3, {'W', 'e', 'd'} },
//     { 4, {'T', 'h', 'u'} },
//     { 5, {'F', 'r', 'i'} },
//     { 6, {'S', 'a', 't'} },
// };

const struct day days[7] = {
    { 0, 6, {'S', 'u', 'n', 'd', 'a', 'y'} },
    { 1, 6, {'M', 'o', 'n', 'd', 'a', 'y'} },
    { 2, 7, {'T', 'u', 'e', 's', 'd', 'a', 'y'} },
    { 3, 9, {'W', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y'} },
    { 4, 8, {'T', 'h', 'u', 'r', 's', 'd', 'a', 'y'} },
    { 5, 6, {'F', 'r', 'i', 'd', 'a', 'y'} },
    { 6, 8, {'S', 'a', 't', 'u', 'r', 'd', 'a', 'y'} },
};


int main(void) {
    int     i;
    int     j;
    int     k;
    struct day aDay;

    printf("\nDAY  NAME     DAY NUM\n");
    printf("---------     -------\n");
    
    for (i = 0; i < 7; ++i) {
        aDay = days[i];

        // length of day names is different for each day
        for (j = 0; j < aDay.nameLen; ++j) {
            printf("%c", aDay.name[j]);
        }
        
        // for even spacing
        for (k = 0; k < 8 + (9-j); ++k) {
            printf(" ");
        }
        
        printf("%i\n", aDay.num);
    }

    return 0;
}