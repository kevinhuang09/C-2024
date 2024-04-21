//array
#include<stdio.h>
#include<stdlib.h>
#define s 5//數據大小
int rd(int n1, int n2);
int main() {
	int a[s] = { 0 };//紀錄數據
	int b[39] = { 0 };//紀錄是否有重複
	int ct = 0;
	srand(time(NULL));//用時間產生隨機變數
	while (1) {
		if (ct == 5) {
			break;
		}
		int result = rd(1, 39);
		if (b[result] == 0) {
			a[ct] = result;
			b[result] = 1;
			ct++;
		}
	}
	for (int i = 0; i < s; i++) {
		printf("%d ", a[i]);
	}
}
int rd(int n1, int n2) {
	return n1 + rand() % n2;
}
