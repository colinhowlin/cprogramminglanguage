#include <stdio.h>

/* Program to count blanks, tabs and newlines*/

int main(){
    long blanks, tabs, newlines;
    int c;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((c = getchar()) != EOF){
        if (c == ' ')
            ++blanks;
        else if (c == '\t')
            ++tabs;
        else if (c == '\n')
            ++newlines;
    }
    printf("Blanks: %ld\nTabs: %ld\nNewlines: %ld\n", blanks, tabs, newlines);
}
