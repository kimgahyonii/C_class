#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int a, b;
	// a = 27; ���� �ʱ�ȭ ��Ű�� �ʾƵ�
	printf("������ �Է��ϼ���. : ");	// �����͸� �Է¹��� �� ����
	scanf("%d", &a); // & : a�� �ּ�
	// b = 30;
	printf("������ �Է��ϼ���. : ");
	scanf("%d", &b);

	printf("%d + %d = %d", a, b, a + b);
	

}