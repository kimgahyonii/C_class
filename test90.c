#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int a , b, c;
	int res;

	printf("a�� �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("b�� �Է��ϼ��� : ");
	scanf("%d", &b);
	printf("c�� �Է��ϼ��� : ");
	scanf("%d", &c);

	res = (a > b);
	printf("%d > %d : %d\n",a, b, res);
	res = (a >= b);
	printf("%d >= %d : %d\n",a, b, res);
	res = (a < b);
	printf("%d < %d : %d\n",a, b, res);
	res = (a <= b);
	printf("%d <= %d : %d\n",a, b, res);
	res = (a <= c);
	printf("%d <= %d : %d\n",a, c, res);
	res = (a == b);
	printf("%d == %d : %d\n",a, b, res);
	res = (a != c);
	printf("%d != %d : %d\n",a,c, res);
	
	return 0;

}