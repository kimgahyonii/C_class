#include<stdio.h>

int main(void) {
	int a = 30;
	int res;
	
	res = (a > 10) && (a < 20);
	printf("(a > 10) && (a < 20) : %d\n",res);
	res = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20) : %d\n", res);
	res = !(a >= 30);
	printf("!(a >= 30) : %d\n", res);

	a = 5;
	printf("%d\n", 10 < a < 20);

	printf("%d\n", (10 < a) && (a < 20));
	printf("%d\n", a);

	return 0;
}