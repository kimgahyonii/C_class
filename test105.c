#include<stdio.h>

int main(void) {
	int a = 10, b = 20;
	int res = 2;

	a += 20; // 20 + 10 = 30;
	res *= b + 10; // 2 *= 20 + 10 -> 30 * 2 = 60

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);

	return 0;

}