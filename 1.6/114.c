#include <stdio.h>

/* Exercise 1-14: Program to print a histogram of the
   frequencies of different characters in its input */

int main() {
    
    int c, i, j;
    int chars[26];

    // Initialise array values
    for (i = 0; i < 26; ++i)
        chars[i] = 0;

    printf("Start typing or paste your text: \n");

    while ((c = getchar()) != EOF){
        if (c >= 'a' && c <= 'z')
            ++chars[c - 'a'];
        else if (c >= 'A' && c <= 'Z')
            ++chars[c - 'A'];
    }
  
    // Print Summary of results
    printf("\n");
    printf("Summary\n");
    printf("-------\n");

    for (i = 0; i < 26; ++i)
        printf("%3d ", chars[i]);

    printf("\n");

    for (i = 0 + 'a'; i < 26 + 'a'; ++i)
        printf("%3c ", i);

    printf("\n");

    // Print horizontal histogram
    printf("--------------------\n");
    printf("Horizontal Histogram\n");
    printf("--------------------\n");

    for (i = 0; i < 26; ++i){
        printf("%-2c", i + 'a');

        for (j = 0; j < chars[i]; ++j)
            printf("*");

        printf("\n");
    }

    // get maximum
    int max = 0;
    for (i = 0; i < 26; ++i){
        if (chars[i] > max)
            max = chars[i];
    }

    // print vertical histogram
    printf("\n------------------\n");
    printf("Vertical Histogram\n");
    printf("------------------\n");

    for (i = max; i > 0; --i){
        printf("%2d | ", i);

        for (j = 0; j < 26; ++j){
            if (chars[j] >= i){
                printf("*");
            } else {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    printf("    ");
    for (i = 0; i < 26; ++i)
        printf("%2c", i + 'a');
    printf("\n");
}
