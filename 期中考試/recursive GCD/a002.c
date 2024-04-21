//iteration
#include<stdio.h>
int findGCD(int n1, int n2);
int main() {
	printf("%s", "Enter two integers to claculate GCD:");
	int n1, n2;
	scanf_s("%d%d", &n1, &n2);
	int GCD = findGCD(n1, n2);
	printf("%s%d", "The GCD is ", GCD);
}
int findGCD(int n1, int n2) {
	int max = 0;
	for (int i = 1; i <= n1 && i <= n2; i++) {
		if (n1 % i == 0 && n2 % i == 0) {
			if (max < i) {
				max = i;
			}
		}
	}
	return max;
}
