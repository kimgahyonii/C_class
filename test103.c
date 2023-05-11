#include<stdio.h>

int main(void) {
	int a = 10;
	double b = 3.4;
	
	// int / long이라고 하더라도 쓰이는 형태가 다르기 때문에 같은 메모리 용량을 차지하더라도 같은것은 아님
	printf("int형 변수의 크기 : %d\n", sizeof(a)); // 4
	printf("double형 변수의 크기 : %d\n", sizeof(b)); // 8
	printf("정수형 상수의 크기 : %d\n", sizeof(10)); // int -> 4
	printf("수식의 결괏값의 크기 : %d\n", sizeof(1.5 + 3.4)); // 4.9 (실수) double -> 8
	printf("char 자료형의 크기 : %d\n", sizeof(char)); // 1

	return 0;
	// sizeof 는 값의 크기를 뜻함
}