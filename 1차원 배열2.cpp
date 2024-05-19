#include<stdio.h>
int main() {
	int a, b;
	int arr[10000] = {};
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf_s("%d", &b);
		arr[i] = b;
	}
	for (int i = a - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}