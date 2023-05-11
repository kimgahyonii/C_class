#include<stdio.h>

int main() {
	int a = 5;

	if (a % 2 == 0) {
		a = 2;
	}
	else {
		a = 1;
	}
	printf("%d", a);

	return 0;
}