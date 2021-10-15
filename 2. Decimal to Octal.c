// Decimal to octal conversion
#include <stdio.h>

int main(void) {
    int i = 0, j = 0, num, octal[20];
    printf("\nEnter decimal number: ");
    scanf("%d", &num);

    while(num > 0) {
        octal[i] = num % 8;
        i++;
        num /= 8;
    }

    printf("Octal number is: ");
    for(j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
    
    printf("\n\n");
    return 0;
}