#include<stdio.h>
int rd(int n1, int n2) {
	return n1 + rand() % n2;
}
int main() {
	srand(time(NULL));
	int ct = 0;
	int ct1 = 0;
	int H_ct = 0;
	int T_ct = 0;
	while (1) {
		if (ct == 100) {
			break;
		}
		if (ct1 == 10) {
			puts("");
			ct1 = 0;
		}
		int result = rd(1, 2);
		if (result == 1) {
			printf("%s ", "Heads");
			H_ct++;
		}
		else {
			printf("%s ","Tails");
			T_ct++;
		}
		
		ct++; ct1++;

	}
	puts("");
	printf("%s%d%s\n", "Heads ", H_ct, " times");
	printf("%s%d%s\n", "Tails ", T_ct, " times");
}
