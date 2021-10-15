// Binary to decimal conversion
#include <stdio.h>

int main(void) {
    int base = 1, remainder = 0;
    long int binary = 0, decimal = 0;

    printf("\nEnter binary number: ");
    scanf("%ld", &binary);

    while(binary != 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal number is: %ld\n\n", decimal);
    return 0;
}