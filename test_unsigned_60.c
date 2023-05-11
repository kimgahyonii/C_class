#include<stdio.h>

int main(void) {
	unsigned int a; // unsigned는 부호가 없음 즉, 양수만

	a = 4294967295;
	printf("%d\n", a);
	a = -1;
	printf("%u\n", a);

	return 0;
}