// Binary to hexadecimal conversion
#include <stdio.h>

int main(void) {
    int base = 1, remainder = 0;
    long int binary = 0, hexadecimal = 0;
    
    printf("\nEnter binary number: ");
    scanf("%ld", &binary);

    while(binary != 0) {
        remainder = binary % 10;
        hexadecimal += remainder * base;
        base *= 2;
        binary /= 10;
    }

    printf("Hexadecimal number is: %lX\n\n", hexadecimal);
    return 0;
}
