#include <stdio.h>

/* Exercise 1-13: Program to print a histogram of
   the lengths of words in its input up to 10 letters */

int main(){
    
    int c, letter_count, i, j;
    int word_length[11];

    // Initialise array values
    for (i = 0; i < 11; ++i)
        word_length[i] = 0;

    letter_count = 0;

    printf("Start typing:\n");

    // Grab input and count word lengths
    while ((c = getchar()) != EOF){

        if (c == ' ' || c == '\t' || c == '\n'){
            if (letter_count - 1 > 10){
                ++word_length[11];
            } else {
                ++word_length[letter_count - 1];
                letter_count = 0;
            }
        } else   
            ++letter_count;
    }

    // Print summary
    printf("\nLength\tCount\n");
    for (i = 0; i < 11; ++i)
        printf("%d\t%d\n", i + 1, word_length[i]);

    printf("\n");

    // print horizontal histogram
    printf("*********************\n");
    printf("Horizontal Histogram\n");
    printf("*********************\n");
    for (i = 0; i < 11; i++){
        printf("%d ", i + 1);

        for (j = 0; j < word_length[i]; ++j){
            printf("*");
        }

        printf("\n");
    }

    //for (i = 0; i < 10; ++i)
    //    printf(" %d", word_length[i]);

    // print vertical histogram
    printf("*********************\n");
    printf("Vertical Histogram\n");
    printf("*********************\n");

    for (i = 11; i > 0; --i){
        for (j = 0; j < 11; ++j){
            if (word_length[j] >= i){
                printf("*");
            } else {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    for (i = 0; i < 11; ++i)
        printf("%d ", i + 1);

    printf("\n");
}
