#include<stdio.h>

int main() {
	int res;
	res = sizeof(short) > sizeof(long); // sizof(short) = 2, sizeof(long) = 4 => ����
	// �� res�ȿ��� 0�� �������
	// res�� 1�� ������ short�� �ƴϸ� long�̹Ƿ� ���׿����ڸ� ���
	printf("%s", res == 1 ? "short" : "long");
	//		res�� 1�� ����. �� : short, ���� : long => ���� �� long�� ���
	// %s �� string ���ڿ� ����ϹǷ� string�� ����
	return 0;
}