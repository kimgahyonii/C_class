#include<stdio.h>

int main(void) {
	int a = 10;
	double b = 3.4;
	
	// int / long�̶�� �ϴ��� ���̴� ���°� �ٸ��� ������ ���� �޸� �뷮�� �����ϴ��� �������� �ƴ�
	printf("int�� ������ ũ�� : %d\n", sizeof(a)); // 4
	printf("double�� ������ ũ�� : %d\n", sizeof(b)); // 8
	printf("������ ����� ũ�� : %d\n", sizeof(10)); // int -> 4
	printf("������ �ᱣ���� ũ�� : %d\n", sizeof(1.5 + 3.4)); // 4.9 (�Ǽ�) double -> 8
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char)); // 1

	return 0;
	// sizeof �� ���� ũ�⸦ ����
}