#include<stdio.h>

int main(void)
{
	printf("%d\n", 12);
	printf("%d\n", 014); // 8����
	printf("%c\n", 0xc);
	printf("%c\n", 'c'); // ���ڷ� ����ҷ��� %c 
	// A : 65 , a : 97, B : 66, b : 98
	// 8������ 0�� �Բ�, 16������ 0x�� �Բ��� ǥ�� 
	
	return 0;
}