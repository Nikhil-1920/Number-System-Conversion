// Decimal to hexadecimal conversion
#include <stdio.h>

int main(void) {
    int i = 0, j = 0, num, hexadecimal[20];
    printf("\nEnter decimal number: ");
    scanf("%d", &num);

    while(num > 0) {
        hexadecimal[i] = num % 16;
        i++;
        num /= 16;
    }

    printf("Hexadecimal number is: ");
    for(int j = i - 1; j >= 0; j--) {
        switch(hexadecimal[j]) {
            case 10:
                printf("A");
                break;

            case 11:
                printf("B");
                break;

            case 12:
                printf("C");
                break;

            case 13:
                printf("D");
                break;

            case 14:
                printf("E");
                break;

            case 15:
                printf("F");
                break;

            default:
                printf("%d", hexadecimal[j]);
        }
    }
    printf("\n\n");
    return 0;
}
