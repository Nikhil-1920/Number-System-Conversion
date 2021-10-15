// Decimal to binary conversion
#include <stdio.h>

int main(void) {
    int i = 0, j = 0, num, binary[20];
    printf("\nEnter decimal number: ");
    scanf("%d", &num);

    while(num > 0) {
        binary[i] = num % 2;
        i++;
        num /= 2;
    }

    printf("Binary number is: ");
    for(j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    
    printf("\n\n");
    return 0;
}