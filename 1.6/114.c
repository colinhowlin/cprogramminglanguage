#include <stdio.h>

/* Exercise 1-14: Program to print a histogram of the
   frequencies of different characters in its input */

int main() {
    
    int c, i;
    int chars[127];

    // Initialise array values
    for (i = 0; i < 127; ++i)
        chars[i] = 0;

    while ((c = getchar()) != EOF){
        
        ++chars[c];
    }

    printf("\n");

    for (i = 0; i < 127; ++i)
        printf("%d ", chars[i]);

    printf("\n");
}
