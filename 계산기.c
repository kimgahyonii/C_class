#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int first, second,mark;
	double result;
	
	// �Է�
	printf("������ �Է� �Ͻÿ� : ");
	scanf("%d%d", &first, &second);

	// �Է� ����
	if (first < 0 || second < 0) {
		printf("\n�߸��� �Է� �Դϴ�.\n �ٽ� �Է��ϼ���.\n");
		scanf("%d%d", &first, &second);
	}

	// ��� ���
	printf("��� ����� ���� �Ͻÿ�\n");
	printf("1. +\n2. -\n3. *\n4. /\n5. %%\n");
	scanf("%d)", &mark);

	// ��� ��� ����
	if (mark > 5) {
		printf("�߸��� �Է��Դϴ�.\n�ٽ� �Է��ϼ���.\n");
		scanf("%d", &mark);
	}

	// 1. ����
	if (mark == 1) {
		result = first + second;
		mark = (char)'+';
	}
	// 2. ����
	else if (mark == 2) {
		result = first - second;
		mark = (char)'-';
	}
	// 3. ����
	else if (mark == 3) {
		result = (double)first * second;
		mark = (char)'*';
	}
	// 4. ������
	else if (mark == 4) {
		result = (double)first / second;
		mark = (char)'/';
	}
	// 5. ������
	if (mark == 5) {
		result = first % second;
		mark = (char)'%';
	}

	printf("%d %c %d = %.2lf", first, mark, second, result);

	return 0;
}