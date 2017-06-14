#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
	int num,numDigits;
	int displayNum[4] = {-1,-1,-1,-1};

	printf("\nWrite a number: ");
	scanf("%d",&num);
	// Determine the length of the number
	numDigits = (int)(log10((float)num)) + 1;
	printf("\n%d has %d digits",num,numDigits);

	printf("\n\nThe number in array form:\n\n");

	// Convert the number in a integer array (Digits are reversed)
	for(int i = 0; i < 4; i++) {
		if(num == 0)
			break;
		else {
			displayNum[i] = num % 10;
			num /= 10;
		}
	}

	for(int i = 0; i < 4; i++) {
		printf("%d\t",displayNum[i]);
	}

	printf("\n");
	return 0;
}