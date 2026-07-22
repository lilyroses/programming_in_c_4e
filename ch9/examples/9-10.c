/* Example 9-10 - Modified dictionary lookup using binary search */
#include <stdio.h>


/* globals */
struct entry {
    char    word[15];
    char    definition[50];
};


int strCompare (const char s1[], const char s2[]);
int lookup (const struct entry dictionary[], const char term[], const int entries);


/* functions */
int strCompare (const char s1[], const char s2[]) {
    int i;
    int answer;

    i = 0;
    while ( s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' ) {
        ++i;
    }

    if ( s1[i] < s2[i] ) {
        answer = -1;
    } else if ( s1[i] == s2[i] ) {
        answer == 0;
    } else {
        answer = 1;
    }

    return answer;
}


int lookup (const struct entry dictionary[], const char term[],
            const int entries) {
    int low;
    int mid;
    int high;
    int result;

    low = 0;
    high = entries - 1;
    
    while ( low <= high ) {
        mid = ( low + high ) / 2;
        result = strCompare (dictionary[mid].word, term);

        if ( result == -1 ) {
            low = mid + 1;
        } else if ( result == 1 ) {
            high = mid - 1;
        } else {
            return mid;  /* found it */
        }
    }
    
    return -1;
}


/* MAIN */
int main (void) {
    const struct    entry   dictionary[100] = {
        { "aardvark", "a burrowing African mammal" },
        { "abyss", "a bottomless pit" },
        { "acumen", "mentally sharp; keen" },
        { "addle", "to become confused" },
        { "aerie", "a high nest" },
        { "affix", "to append; attach" },
        { "agar", "a jelly made from seaweed" },
        { "ahoy", "a nautical call of greeting" },
        { "aigrette", "an ornamental cluster of feathers" },
        { "ajar", "partially opened" }       
    };

    int     entries;
    char    word[15];
    int     entry;

    entries = 10;
    printf ("\nWORD: ");
    scanf ("%14s", word);

    entry = lookup (dictionary, word, entries);

    if ( entry != -1 ) {
        printf ("%s\n", dictionary[entry].definition);
    } else {
        printf ("\nError: [%s] NOT FOUND\n", word);
    }

    return 0;
}
