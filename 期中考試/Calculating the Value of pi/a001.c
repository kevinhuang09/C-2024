//Calculating the Value of pi
#include<stdio.h>
#include<math.h>
float main() {
	int n1 = -1, n2 = -1, n3 = -1, n4 = -1;
	float sum = 0;
	for (int i = 0; i < 400000; i++) {
		if (i % 2 == 0) {
			sum += (4.0 / (2.0 * i + 1));
		}
		else {
			sum -= (4.0 / (2.0 * i + 1));
		}
		printf("%d%s%f\n", i, "   ", sum);
		if (n1 == -1 && fabs(sum - 3.14) < 0.00001) {
			n1 = i;
		}
		if (n2 == -1 && fabs(sum - 3.141) < 0.00001) {
			n2 = i;
		}
		if (n3 == -1 && fabs(sum - 3.1415) < 0.00001) {
			n3 = i;
		}
		if (n4 == -1 && fabs(sum - 3.14159) < 0.00001) {
			n4 = i;
			break;
		}
	}
	printf("%s%d\n", "The terms of this series before first get 3.14 is ", n1);
	printf("%s%d\n", "The terms of this series before first get 3.141 is ", n2);
	printf("%s%d\n", "The terms of this series before first get 3.1415 is ", n3);
	printf("%s%d\n", "The terms of this series before first get 3.14159 is ", n4);
}

