#include<stdio.h>

int main(void) {
	printf("%d\t",(int)sizeof(int));	// int double char // sizeof�� ��ȯ���� �ʼ� 4byte
	printf("%d\t", (int)sizeof(double));	// 8byte
	printf("%d", (int)sizeof(char));		// 1byte  java������ char�� 2byte
}