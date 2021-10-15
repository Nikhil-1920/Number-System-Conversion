// Binary to octal conversion
#include <stdio.h>
 
int main(void) {
    int base = 1, remainder = 0;
    long int binary = 0, octal = 0;
 
    printf("\nEnter binary number: ");
    scanf("%ld", &binary);

    while(binary != 0) {
        remainder = binary % 10;
        octal += remainder * base;
        base *= 2;
        binary /= 10;
    }
    
    printf("Octal number is: %lo\n\n", octal);
 	return 0;
}