#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char grade;		// ������ �Է��� ����
	char name[20];	// �̸��� �Է��� �迭
	short c;		// short�� 2byte

	printf("���� �Է� : "); 
	scanf("%c", &grade);	// grade ������ ���� ���� �Է�
	printf("�̸� �Է� : ");
	scanf("%s", name);		// name ������ �̸� ���ڿ� �Է�, &�� ������� ����(��ü ���ڸ� ����ϱ� ����)
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);
	scanf("%hd", &c);
	printf("%d�Դϴ�.", c);
	return 0;
}