#include <stdio.h>

/* Exercise 1-9 */

int main(){
    int c,d;

    while ((c = getchar()) != EOF){
       
        if (c == ' '){
            while ((d = getchar()) == ' ')
                ;

            putchar(c);
            putchar(d);

        } else
            putchar(c);
    } 
}
