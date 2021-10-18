// Convert Hexadecimal to Decimal in C
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main(void) {
    char hexadecimal[100] = {0};
    int i, decimal = 0, count = 0;
    int decimalDigit = 0;

    printf("\nEnter hexadecimal number: ");
    scanf("%s", hexadecimal);
 
    for(i = (strlen(hexadecimal) - 1); i >= 0; i--) {
        switch(hexadecimal[i]) {
            case 'A':
                decimalDigit = 10; break;
            case 'B':
                decimalDigit = 11; break;
            case 'C':
                decimalDigit = 12; break;
            case 'D':
                decimalDigit = 13; break;
            case 'E':
                decimalDigit = 14; break;
            case 'F':
                decimalDigit = 15; break;
            default:
                decimalDigit = hexadecimal[i] - 0x30;
        }
        decimal += (decimalDigit) * pow(16, count);
        count++;
    }
 
    printf("Decimal number is: %d\n\n", decimal);
    return 0;
}