/* Example 9-9.c - Dictionary lookup table */
#include <stdio.h>
#include <stdbool.h>


/* globals */
struct entry {
    char    word[15];
    char    definition[50];
};

bool strsAreEqual (const char s1[], const char s2[]);
int lookup (const struct entry dictionary[], const char term[], const int entries);


/* functions */
bool strsAreEqual (const char s1[], const char s2[]) {
    bool areEqual;
    int i;
    
    i = 0;
    
    while ( s1[i] == s2[i] && '\0' != s1[i]
            && '\0' != s2[i] ) {
        ++i;
    }

    if ( '\0' == s1[i] && '\0' == s2[i] ) {
        areEqual = true;
    } else {
        areEqual = false;
    }

    return areEqual;
}


int lookup (const struct entry dictionary[], const char term[],
            const int entries) {
    int i;
    
    for ( i = 0; i < entries; ++i ) {
        if ( strsAreEqual (term, dictionary[i].word) ) {
            return i;
        }
    }

    return -1;
}


/* main */
int main (void) {
    const struct entry  dictionary[100] = {
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

    char    word[10];
    int     entry;
    int     entries;
    
    entries = 10;

    printf("\nDICTIONARY LOOKUP\n");
    printf("----------------------");
    printf ("\nWord:\t\t");
    scanf ("%14s", word);
    entry = lookup (dictionary, word, entries);

    if ( entry != -1 ) {
        printf ("Definition:\t\"%s\"\n", dictionary[entry].definition);
    } else {
        printf ("NOT FOUND\n", word);
    }

    return 0;
}