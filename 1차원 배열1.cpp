#include<stdio.h>
int main() {
	int a, b;
	int arr[10000] = {};
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		arr[i] = b;
	}
	for (int i = a - 1; i >= 0; i--) {
		printf("%d ", arr[i]);
	}
}