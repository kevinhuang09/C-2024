#include<stdio.h>
int function(int n);
int function1(int n1,int n2);
int main(void) {
	int number;
	printf("%s", "Enter the number to calculate e to where:");
	scanf_s("%d", &number);

	int number1;
	printf("%s", "Enter the number x to calculate e:");
	scanf_s("%d", &number1);

	float sum = 1;
	for (int i = 1; i < number; i++) {
		sum += (float)function1(i,number1)/ function(i);
	}
	printf("%s%.3f","e = ",sum);
	
}
int function1(int n1,int n2) {
	int sum = n2;
	for (int i = 1; i < n1; i++) {
		sum *= n2;
	}
	return sum;
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
