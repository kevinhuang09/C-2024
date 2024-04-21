#include<stdio.h>
int findGCD(int n1, int n2);
int main() {
	printf("%s", "Enter two numbers to calculate GCD:");
	int n1, n2;
	scanf_s("%d%d", &n1, &n2);
	int GCD = findGCD(n1, n2);
	printf("%s%d\n", "The GCD is ", GCD);
}
int findGCD(int n1, int n2) {
	if (n2 > n1) {
		int tmp = n1;
		n1 = n2;
		n2 = tmp;
	}
	if (n2 != 0) {
		return findGCD(n2, n1 % n2);
	}
	else {
		return n1;
	}
}
