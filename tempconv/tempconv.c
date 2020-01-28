#include <stdio.h>

/* Print Fahrenheit-Celsius table
   for fahr = 0, 20, ...., 30 */

#define CTOF_LOWER -20
#define CTOF_UPPER 120
#define CTOF_STEP 10
#define FTOC_LOWER 0
#define FTOC_UPPER 300
#define FTOC_STEP 20

void fahr_to_celsius();
void celsius_to_fahr();

int main()
{ 
    printf("****************************\n"); 
    printf("Temperature conversion chart\n");
    printf("****************************\n");    
    fahr_to_celsius();
    celsius_to_fahr();
}

void celsius_to_fahr()
{
    float fahr, celsius;
    float lower, upper, step;

    celsius = CTOF_LOWER;

    printf("Celsius Fahrenheit\n");
    printf("------- ----------\n");

    while (celsius <= CTOF_UPPER) {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%6.0f %10.0f\n", celsius, fahr);
        celsius = celsius + CTOF_STEP;
    }

}

void fahr_to_celsius()
{
    // Variable declarations
    float fahr, celsius;
    float lower, upper, step;

    fahr = FTOC_LOWER;
 
    printf("Fahrenheit Celsius\n");
    printf("---------- -------\n");

    while (fahr <= FTOC_UPPER) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.0f %10.1f\n", fahr, celsius);
        fahr = fahr + FTOC_STEP;
    }
}
