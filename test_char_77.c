#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void) {
	char grade;		// 학점을 입력할 변수
	char name[20];	// 이름을 입력할 배열
	short c;		// short는 2byte

	printf("학점 입력 : "); 
	scanf("%c", &grade);	// grade 변수에 학점 문자 입력
	printf("이름 입력 : ");
	scanf("%s", name);		// name 변수에 이름 문자열 입력, &를 사용하지 않음(전체 문자를 출력하기 때문)
	printf("%s의 학점은 %c입니다.\n", name, grade);
	scanf("%hd", &c);
	printf("%d입니다.", c);
	return 0;
}