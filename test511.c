#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// ��� �Է� �ޱ� lank
	int rank,point;
	char ch;
	printf("��� �Է� : ");
	scanf("%d", &rank);
	
	// scanf("%c", &ch);
	// 1���̸� ����Ʈ 300, 2�� ����Ʈ 200, 3�� ����Ʈ 100
	//printf("%d���", rank);
	
	// if (rank == 1 || rank == 2 || rank == 3) {

	switch (rank/100) {	// 100,200 300 �ݵ�� ���� (�������� ���� ����� �����̸� ����)
		case 1: point = 300;
			break;
		case 2: point = 200;
			break;
		case 3: point = 100;
			break; // �־ �ǰ� �ȳ־ ��� ����
		default: point = 0;
	}
	printf("%d��� %c����Ʈ", rank, ch);
	



	/*	if (rank == 1) {
			point = 300;
		}
		else if (rank == 2) {
			point = 200;
		}
		else if (rank == 3) {
			point = 100;
		}
		printf("%d��� %d����Ʈ", rank, point);
	}*/
	/*else {
		printf("%d���", rank);
	}*/




	return 0;

// else�� �ٷ� �Ѱܼ� 0 ��µ� ����
// �ʱⰪ���� if�� ���� �ʾƵ� 1��2��3�� �ɷ��� ��°��� point = 0, ���� 4�� �Է½� ����Ʈ 0���
}