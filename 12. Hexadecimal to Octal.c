// hexadecimaladecimal to octal conversion
#include <stdio.h>
#include <string.h>
#include <math.h>

int hexToOctal(char hexadecimal[]) {

	int i, hexLength, decimal = 0, octal = 0;

	for(hexLength = 0; hexadecimal[hexLength] != '\0'; hexLength++);

	for(i = 0; hexadecimal[i] != '\0'; i++, hexLength--) {
		if(hexadecimal[i] >= '0' && hexadecimal[i] <= '9') 
			decimal += (hexadecimal[i] -'0') * pow(16, hexLength - 1);
		if(hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F')
			decimal += (hexadecimal[i] - 55) * pow(16, hexLength - 1);
		if(hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f')
			decimal += (hexadecimal[i] - 87) * pow(16, hexLength - 1);
	} 

	i = 1;
	while(decimal != 0) {
		octal += (decimal % 8) * i;
		decimal /= 8;
		i *= 10;
	}
	return octal;
}

int main(void) {
	char hexadecimal[100];

	printf("\nEnter hexadecimal number: ");
	scanf("%s", hexadecimal);

	printf("Octal number is: %d\n\n", hexToOctal(hexadecimal));
	return 0;
}

