#include <stdio.h>

/* Temperature conversion chart using functions */

int ftoc(int f);
int ctof(int c);
void printchart();


int main(){
    printchart();
}

int ftoc(int f){
    return 5 * (f - 32) / 9;
}

int ctof(int c){
    return (c * 9 / 5) + 32;
}

void printchart(){
    // Print Fahrenheit to Celsius chart
    printf("Fahr\tCelsius\n");
    printf("----\t-------\n");
    for (int i = 0; i < 300; i += 20)
        printf("%d\t%d\n", i, ftoc(i));

    // Print Celsius to Fahrenheit chart
    printf("Celsius\tFahr\n");
    printf("-------\t----\n");
    for (int i = -20; i < 150; i += 10)
        printf("%d\t%d\n", i, ctof(i));
}


