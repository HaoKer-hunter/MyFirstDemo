#include<stdio.h>
int main(void) {
	int digit;
	int divisor;
	int n;
	scanf_s("%d", &n);

	for (digit = 3; digit <= n; digit +=2) {
		for (divisor = 3; divisor < digit; divisor += 2) {
			if (digit % divisor == 0) {

			
			printf("%d\n", digit);
			break;
		    }
		}

	}
	return 0;
}