#include<stdio.h>
int function(int n);
int main(void) {
	int number;
	printf("%s", "Enter the number to calculate n!:");
	scanf_s("%d", &number);

	int result = function(number);
	printf("%d%s%d",number,"! = ",result);
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
