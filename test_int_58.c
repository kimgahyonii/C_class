#include<stdio.h>

int main(void) {
	short sh = -32769;					// short형 최댓값 초기화
	int in = 2147483647;				// int형 최댓값 초기화
	long ln = 2147483647;				// long형 최댓값 초기화
	long long lln = 123451234512345;	// 아주 큰 값 초기화

	printf("short형 변수 출력 : %d\n", sh);
	printf("in형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %ld\n", ln);
	printf("long long형 변수 출력 : %lld\n", lln);		 // long long형은 lld로 출력
	printf("long long형의 크기 : %d바이트\n", sizeof(30)); // sizeof는 메모리의 사이즈를 나타냄 ex) 
	return 0;
}