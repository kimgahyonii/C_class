#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int kor, mat, cl, res;

	printf("���� : ");
	scanf("%d", &kor);
	printf("���� : ");
	scanf("%d", &mat);
	printf("c��� : ");
	scanf("%d", &cl);

	res = kor + mat + cl;
	printf("���� : %d\n", res);

	return 0; 

	
}