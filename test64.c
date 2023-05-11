#define _CRT_SECURE_NO_WARNING
#include<stdio.h>

int main() {
	int a, b;
	// a = 27; scanf를 사용하면 값을 내가 임의로 넣어주지 않아도 사용자로 부터 입력받기가 가능
	scanf("%d", &a); // &a : a의 주소 정수형 변환문자 %d사용
	printf("%d\n", a);
	// b = 30;
	scanf("%d", &b);
	printf("%d\n", b);

}