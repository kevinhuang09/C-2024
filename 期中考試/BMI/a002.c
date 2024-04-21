//double input
#include<stdio.h>
double main(void) {
	double weight, height, BMI;
	printf("%s", "Enter your weight(kg):");
	scanf_s("%lf", &weight);
	printf("%s", "Enter your height(m):");
	scanf_s("%lf", &height);
	BMI = weight/(height * height);
	printf("%s%.3lf", "Your BMI is ", BMI);
}
