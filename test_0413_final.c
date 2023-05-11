#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main() {
	int kor, mat, cl, res;

	printf("국어 : ");
	scanf("%d", &kor);
	printf("수학 : ");
	scanf("%d", &mat);
	printf("c언어 : ");
	scanf("%d", &cl);

	res = kor + mat + cl;
	printf("총점 : %d\n", res);

	return 0; 

	
}