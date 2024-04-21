#include<stdio.h>
int function(int n);
int main(void) {
	int number;
	printf("%s", "Enter the number to calculate e:");
	scanf_s("%d", &number);

	float sum = 1;
	for (int i = 1; i <= number; i++) {
		sum += 1.0/ function(i);
	}
	printf("%s%.3f","e = ",sum);
}
int function(int n) {
	int sum = 1;
	if (n == 1) {
		return 1;
	}
	else {
		for (int i = 2; i <= n; i++) {
			sum *= i;
		}
	}
	return sum;
}
