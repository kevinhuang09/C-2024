//no array
#include<stdio.h>
#include<stdlib.h>
int rd(int n1, int n2) {
	return n1 + rand() % n2;
}
int main() {
	srand(time(NULL));
	int ct = 0;
	while (1) {
		if (ct == 5) {
			break;
		}
		int result = rd(1, 39);
		printf("%d ", result);
		ct++;
	}
}
