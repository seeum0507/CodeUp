#include <stdio.h>

int n;

void f(int a) {
	for (int i = 0; i < a; i++) {
		printf("*");
	}
}
int main(){
	scanf_s("%d", &n);
	f(n);
	return 0;
}
