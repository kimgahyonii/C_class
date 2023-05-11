#include<stdio.h>

int main() {
	int a = 20, b = 3;
	double res;

	res = ((double)a / (double)b); // 20, 3
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res); // 6.7 (int -> double)

	a = (int)res;
	printf("(int) %.1lf의 결과 : %d", res, a);	// 6 (double -> int)

	return 0;
}