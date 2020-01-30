#include <stdio.h>

/* Exercise 1-13: Program to print a histogram of
   the lengths of words in its input */

int main(){
    
    int c, letter_count, i, j;
    int word_length[10];

    // Initialise array values
    for (i = 0; i < 10; ++i)
        word_length[i] = 0;

    letter_count = 0;

    printf("Start typing:\n");

    
    // Grab input and count word lengths
    while ((c = getchar()) != EOF){

        if (c == ' ' || c == '\t' || c == '\n'){
            if (letter_count > 10){
                word_length[9]++;
                
            } else {
                ++word_length[letter_count - 1];
                
            }
            letter_count = 0;
        } else   
            ++letter_count;
    }

    // Print summary
    printf("\n*******");
    printf("\nSummary");
    printf("\n*******");
    printf("\nLength\tCount");
    printf("\n------\t-----\n");
    for (i = 0; i < 10; ++i)
        if (i == 9)
            printf("10+\t%d\n", word_length[9]);
        else
            printf("%d\t%d\n", i + 1, word_length[i]);

    printf("\n");
    
    // print horizontal histogram
    printf("*********************\n");
    printf("Horizontal Histogram\n");
    printf("*********************\n");
    for (i = 0; i < 10; i++){
        if (i == 9){
            printf("10+\t");

            for (j = 0; j < word_length[9]; ++j)
                printf("*");
        }
        else {
            printf("%d\t", i + 1);

            for (j = 0; j < word_length[i]; ++j){
                printf("*");
            }
        }

        printf("\n");
    }

    // get maximum
    int max = 0;
    for (i = 0; i < 10; ++i){
        if (word_length[i] > max)
            max = word_length[i];
    }

    // print vertical histogram
    printf("\n*********************\n");
    printf("Vertical Histogram\n");
    printf("*********************\n");

    for (i = max; i > 0; --i){
        printf("%2d | ", i);

        for (j = 0; j < 10; ++j){
            if (word_length[j] >= i){
                printf("*");
            } else {
                printf(" ");
            }
            printf(" ");
        }
        printf("\n");
    }
    printf("     ");
    for (i = 0; i < 10; ++i)
        if (i == 9)
            printf("10+ ");
        else
            printf("%d ", i + 1);

    printf("\n");
}
