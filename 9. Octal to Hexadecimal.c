// Octal to hexadecimal conversion
#include <stdio.h>
#include <string.h>

int main(void) {
    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};

    long int octal, binary = 0, position = 1;
    char hexadecimal[100] = {0};
    int remainder = 0;

    printf("\nEnter octal number: ");
    scanf("%ld", &octal);

    // converting octal to binary
    while(octal > 0) {
        remainder = octal % 10;
        binary += (OCTALVALUES[remainder] * position);
        octal /= 10;
        position *= 1000;
    }
    
    // converting binary to hexadecimal    
    while(binary > 0) {
        remainder = binary % 10000;
        switch(remainder) {
            case 0:
                strcat(hexadecimal, "0"); break;
            case 1:
                strcat(hexadecimal, "1"); break;
            case 10:
                strcat(hexadecimal, "2"); break;
            case 11:
                strcat(hexadecimal, "3"); break;
            case 100:
                strcat(hexadecimal, "4"); break;
            case 101:
                strcat(hexadecimal, "5"); break;
            case 110:
                strcat(hexadecimal, "6"); break;
            case 111:
                strcat(hexadecimal, "7"); break;
            case 1000:
                strcat(hexadecimal, "8"); break;
            case 1001:
                strcat(hexadecimal, "9"); break;
            case 1010:
                strcat(hexadecimal, "A"); break;
            case 1011:
                strcat(hexadecimal, "B"); break;
            case 1100:
                strcat(hexadecimal, "C"); break;
            case 1101:
                strcat(hexadecimal, "D"); break;
            case 1110:
                strcat(hexadecimal, "E"); break;
            case 1111:
                strcat(hexadecimal, "F"); break;
        }
        binary /= 10000;
    }

    strrev(hexadecimal);

    printf("Hexadecimal number is: %s\n\n", hexadecimal);
    return 0;
}