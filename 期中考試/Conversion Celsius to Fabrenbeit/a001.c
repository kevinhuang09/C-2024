//Write a program that converts temperatures from 30~50C to the Fahrenheit scale.
#include<stdio.h>
int main() {
	for (int i = 30; i <= 50; i++) {
		float F = ((9.0 / 5.0) * i) + 32;
		printf("%d%s%.3f\n", i, "   ", F);
	}
}
