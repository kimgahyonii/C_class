#include<stdio.h>

int main(void) {
	int seats = 70;
	int audience = 65;
	double rate; // 비율이므로 double
	
	rate = (double)audience / (double)seats * 100.0; // 세개 중에 하나만 double이여도 가능

	printf("입장률 : %.1lf%%", rate); // %를 출력해주고 싶을 땐 %%로 적어주면 됨

	return 0;
}