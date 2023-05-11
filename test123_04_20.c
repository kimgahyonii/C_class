#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {

	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);

	if (num == 0)
		printf("0입니다.");
	else if (num % 2 == 0) 
		printf("%d는 짝수입니다.", num);
	else	
		printf("%d는 홀수입니다.", num);

	return 0;
}