#include<stdio.h>
int main(){
	int a, x, y;
	int arr[20][20] = {};
	scanf("%d", &a);
	for(int i = 0; i < a; i++){
		scanf("%d %d", &x, &y);
		arr[x][y] = 1;
	}
	for(int i = 1; i <= 19; i++){
		for(int j = 1; j <= 19; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
