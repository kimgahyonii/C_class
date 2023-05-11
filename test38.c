#include<stdio.h>

int main(void)
{
	printf("%d\n", 12);
	printf("%d\n", 014); // 8진수
	printf("%c\n", 0xc);
	printf("%c\n", 'c'); // 문자로 출력할려면 %c 
	// A : 65 , a : 97, B : 66, b : 98
	// 8진수는 0과 함께, 16진수는 0x와 함께로 표현 
	
	return 0;
}