//Octal to decimal conversion
#include <stdio.h>
#include <math.h>
 
int main(void) {
    long int octal, decimal = 0;
    int i = 0;

    printf("\nEnter octal number: ");
    scanf("%ld", &octal);

    while(octal != 0) {
        decimal += (octal % 10) * pow(8, i++);
        octal = octal / 10;
    }

    printf("Decimal number is: %ld\n\n", decimal);
    return 0;
}