#include<stdio.h>

int main(void) {
	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	printf("%lE\n", 0.0000314);
	printf("%.2lE\n", 0.0000314);
	/*
	* lf 6�ڸ�
	* .1lf �Ҽ��� ���� ���ڸ�
	* .2lf �Ҽ��� ���� ���ڸ�
	*/
	return 0;
}