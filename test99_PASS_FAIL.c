#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int kor, mat, c;
	double res; // 전체 학점

	printf("국어 점수 : ");
	scanf("%d", &kor);
	printf("수학 점수 : ");
	scanf("%d", &mat);
	printf("c언어 점수 : ");
	scanf("%d", &c);

	res = (double)(kor + mat + c) / 3; // 세개 중 하나만 double만 해도 됨, 세개 다 더한 값에서 double을 넣어주는 게 좋음
	printf("평균 : %.2lf\n", (res));

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