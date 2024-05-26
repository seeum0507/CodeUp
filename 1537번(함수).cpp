#include <stdio.h>

int n;

void f(int a) {
	if (a == 1) {
		printf("hello");
	}
	else if (a == 2) {
		printf("world");
	}
}
int main(){
	scanf_s("%d", &n);
	f(n);
	return 0;
}
