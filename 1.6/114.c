#include <stdio.h>

/* Exercise 1-14: Program to print a histogram of the
   frequencies of different characters in its input */

int main() {
    
    int c, i;
    int chars[26];

    // Initialise array values
    for (i = 0; i < 26; ++i)
        chars[i] = 0;

    while ((c = getchar()) != EOF){
        if (c >= 'a' && c <= 'z')
            ++chars[c - 'a'];
        else if (c >= 'A' && c <= 'Z')
            ++chars[c - 'A'];
    }
   
    printf("\n");

    for (i = 0; i < 26; ++i)
        printf("%d ", chars[i]);

    printf("\n");
}
