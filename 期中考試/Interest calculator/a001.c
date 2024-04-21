#include<stdio.h>
float main(void) {
	float interest, principal, rate;
	int day,ct=0;
	while (1) {

		printf("Enter the pricipal(-1 to end):");
		scanf_s("%f", &principal);

		if (principal == -1) {
			break;
		}

		printf("%s", "Enter the rate:");
		scanf_s("%f", &rate);

		printf("%s","Enter the day:");
		scanf_s("%d", &day);

		//calculate
		interest = (principal * rate * day) / 365;

		printf("%s%f", "The interest is ", interest);
		puts("");

		ct++;
	}
}
