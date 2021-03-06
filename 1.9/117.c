#include <stdio.h>
#define LIMIT 80
#define MAXLINE 1000

int getline2(char s[], int lim);

int main(){
    int len;
    char line[MAXLINE];

    while ((len = getline2(line, MAXLINE)) > 0){
        if (len > LIMIT){
            printf("\n%s", line);
        }
    }
}

int getline2(char s[], int lim){
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}



