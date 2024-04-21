#include<stdio.h>
#define s 15
void printfhead(void);
int binarysearch(int a[],int key,int low,int high);
void printfrow(int a[],int middle,int low,int high);
int main() {
	int a[s];
	for (int i = 0; i < s; i++) {
		a[i] = i * 2;
	}
	printf("%s", "Enter a number between 0 to 28:");
	int key;
	scanf_s("%d", &key);

	printfhead();

	int result=binarysearch(a, key, 0, s - 1);
	if (result != -1) {
		printf("\n%d found at index %d.\n",key,result);
	}
	else {
		printf("\n%d not found.\n", key);
	}

}
void printfrow(int a[], int middle, int low, int high) {
	for (int i = 0; i < s; i++) {
		if (i<low || i>high) {
			printf("%s", "    ");
		}
		else if (i == middle) {
			printf("%3d%s", a[i], "*");
		}
		else {
			printf("%3d%s", a[i], " ");
		}
	}
	puts("");
}
int binarysearch(int a[], int key, int low, int high) {

	while (low<=high) {
		int middle = (low + high) / 2;
		printfrow(a, middle, low, high);
		if (key == a[middle]) {
			return middle;
		}
		else if (key < a[middle]) {
			high = middle - 1;
		}
		else {
			low = middle + 1;
		}

	}
	return -1;
}
void printfhead(void) {
	puts("\n");
	puts("Subscripts:");
	for (int i = 0; i < s; i++) {
		printf("%3d ", i);
	}
	puts("");
	for (int i = 0; i < s * 4; i++) {
		printf("%s", "-");
	}
	puts("");
}
