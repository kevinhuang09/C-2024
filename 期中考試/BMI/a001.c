#include<stdio.h>
int main(void) {
	float weight, height, BMI;
	printf("%s", "Enter your weight(kg):");
	scanf_s("%f", &weight);
	printf("%s", "Enter your height(m):");
	scanf_s("%f", &height);
	BMI = weight/(height * height);
	printf("%s%.3f", "Your BMI is ", BMI);
}
