#include<stdio.h>

int main(void) {
	short sh = -32769;					// short�� �ִ� �ʱ�ȭ
	int in = 2147483647;				// int�� �ִ� �ʱ�ȭ
	long ln = 2147483647;				// long�� �ִ� �ʱ�ȭ
	long long lln = 123451234512345;	// ���� ū �� �ʱ�ȭ

	printf("short�� ���� ��� : %d\n", sh);
	printf("in�� ���� ��� : %d\n", in);
	printf("long�� ���� ��� : %ld\n", ln);
	printf("long long�� ���� ��� : %lld\n", lln);		 // long long���� lld�� ���
	printf("long long���� ũ�� : %d����Ʈ\n", sizeof(30)); // sizeof�� �޸��� ����� ��Ÿ�� ex) 
	return 0;
}