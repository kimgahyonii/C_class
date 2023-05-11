#include<stdio.h>

int main(void) {
	printf("%d\t",(int)sizeof(int));	// int double char // sizeof는 변환문자 필수 4byte
	printf("%d\t", (int)sizeof(double));	// 8byte
	printf("%d", (int)sizeof(char));		// 1byte  java에서는 char이 2byte
}