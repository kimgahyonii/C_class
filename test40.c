#include<stdio.h>

int main(void) {
	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%lE\n", 0.0000314);
	printf("%.2lE\n", 0.0000314);
	/*
	* lf 6자리
	* .1lf 소수점 이하 한자리
	* .2lf 소수점 이하 두자리
	*/
	return 0;
}