#include<stdio.h>
int main() {
	int a, x, y;
	int arr[20][20] = {};
	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf_s("%d %d", &x, &y);
		for (int j = 1; j <= 19; j++) {
			if (arr[x][j] == 1)
				arr[x][j] = 0;
			else
				arr[x][j] = 1;
		}
		for (int j = 1; j <= 19; j++) {
			if (arr[j][y] == 1)
				arr[j][y] = 0;
			else
				arr[j][y] = 1;
		}
	}
	for (int i = 1; i <= 19; i++) {
		for (int j = 1; j <= 19; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}