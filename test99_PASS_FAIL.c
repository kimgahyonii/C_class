#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int kor, mat, c;
	double res; // ��ü ����

	printf("���� ���� : ");
	scanf("%d", &kor);
	printf("���� ���� : ");
	scanf("%d", &mat);
	printf("c��� ���� : ");
	scanf("%d", &c);

	res = (double)(kor + mat + c) / 3; // ���� �� �ϳ��� double�� �ص� ��, ���� �� ���� ������ double�� �־��ִ� �� ����
	printf("��� : %.2lf\n", (res));

	/*if (res >= 70) {
		printf("PASS");
	}
	else printf("FAIL");*/
	//printf(credits >= 70 ? "PASS" : "FAIL");


	switch ((int)res/10) {
		case 10: case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default: printf('F');
	}
	/*if (res >= 90) {
		printf("A");
	}
	else if (res >= 80) {
		printf("B");
	}
	else if (res >= 70) {
		printf("C");
	}
	else if (res >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}*/

	return 0;
}