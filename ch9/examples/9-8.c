// Example 9-8.c - Counting in words from multiple lines of input.
#include <stdio.h>
#include <stdbool.h>


bool isAlpha (const char c);
void readLine (char buffer[]);


bool isAlpha (const char c) {
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
        return true;
    } else {
        return false;
    }
}


void readLine (char buffer[]) {
    char c;
    int i;

    i = 0;
    
    do {
        c = getchar();
        buffer[i] = c;
        ++i;
    }
    while ( c != '\n' );

    // overwrite final newline char with the NULL char
    // so that countWords will know when the line ends.
    buffer[i - 1] = '\0';
}


int countWords (const char string[]) {
    bool lookingForWord;
    int i;
    int wordCount;

    lookingForWord = true;
    wordCount = 0;

    for ( i = 0; string[i] != '\0'; ++i ) {
        if ( isAlpha(string[i]) ) {
            if ( lookingForWord ) {
                ++wordCount;
                lookingForWord = false;
            }
        }
        else {
            lookingForWord = true;
        }
    }

    return wordCount;
}


int main (void) {
    char text[81];
    int totalWords;
    bool endOfText;

    totalWords = 0;
    endOfText = false;

    printf("\nEnter text. When done, press 'RETURN' twice.\n\n");

    while ( ! endOfText ) {
        readLine (text);
        
        if ( text[0] == '\0' ) {
            endOfText = true;
        } else {
            totalWords += countWords (text);
        }
    }

    printf("\nTotal words: [%i]\n\n", totalWords);

    return 0;
}