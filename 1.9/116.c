#include <stdio.h>
#define MAXLINE 1000    // Maximum input line length

int getline2(char line[], int maxline);
void copy(char to[], char from[]);

/* print the longest input line */

int main(){
    int len;                // current line length
    int real_len = 0;
    int c;
    int max;                // maximum length seen so far
    char line[MAXLINE];     // current input line
    char longest[MAXLINE];  // longest line saved here

    max = 0;
    while ((len = getline2(line, MAXLINE)) > 0){
        //printf("\nLen: %d\n", len);
        if (len > max) {
            max = len;
            real_len = len;
            copy(longest, line);
        }
        if (line[len] != '\n' && line[len] != EOF)
            while((c = getchar()) != EOF && c != '\n')
                ++real_len;
    }
    
    if (max > 0)            // there was a line
        printf("\nLongest Line:");
        printf("\n%s", longest);
        printf("\nLength of longest line: %d\n", real_len); 

    return 0;
}

/* getline: read a line into s, return length */
int getline2(char s[], int lim){
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    // printf("\ni = %d\n", i);
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]){
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
