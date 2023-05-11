#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int a, b;
	// a = 27; 값을 초기화 시키지 않아도
	printf("정수를 입력하세요. : ");	// 데이터를 입력받은 수 있음
	scanf("%d", &a); // & : a의 주소
	// b = 30;
	printf("정수를 입력하세요. : ");
	scanf("%d", &b);

	printf("%d + %d = %d", a, b, a + b);
	

}