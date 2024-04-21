//dice rolling
#include<stdio.h>
#include<stdlib.h>
#define s 11
int rd(int n1, int n2);
int main() {
	srand(time(NULL));
	//預計
	int a[s] = { 0 };//紀錄sum
	int b[s] = { 0 };//紀錄出現次數
	float c[s] = { 0 };//紀錄機率

	//實際測試
	int d[s] = { 0 };//紀錄出現次數
	float e[s] = { 0 };//紀錄機率

	for (int i = 0; i < s; i++) {
		a[i] = i + 2;
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			b[i+j] += 1;
		}
	}
	for (int i = 0; i < s; i++) {
		c[i] = ((float)b[i] / 36.0);
		c[i] *= 100;
	}
	
	for (int i = 0; i < 36000; i++) {
		d[rd(1, 6) + rd(1, 6) - 2]++;
	}
	for (int i = 0; i < s; i++) {
		e[i] = (float)d[i] / 360;
	}
	printf("%10s%10s%10s%10s\n", "Sum","Total","Expected","Actual");
	for (int i = 0; i < s; i++) {
		printf("%10d%10d%9.3f%s%9.3f%s\n", a[i],d[i],c[i],"%",e[i],"%");
	}
}
int rd(int n1, int n2) {
	return n1 + rand() % n2;
}
