#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int first, second,mark;
	double result;
	
	// 입력
	printf("정수를 입력 하시오 : ");
	scanf("%d%d", &first, &second);

	// 입력 오류
	if (first < 0 || second < 0) {
		printf("\n잘못된 입력 입니다.\n 다시 입력하세요.\n");
		scanf("%d%d", &first, &second);
	}

	// 계산 방법
	printf("계산 방법을 선택 하시오\n");
	printf("1. +\n2. -\n3. *\n4. /\n5. %%\n");
	scanf("%d)", &mark);

	// 계산 방법 오류
	if (mark > 5) {
		printf("잘못된 입력입니다.\n다시 입력하세요.\n");
		scanf("%d", &mark);
	}

	// 1. 덧셈
	if (mark == 1) {
		result = first + second;
		mark = (char)'+';
	}
	// 2. 뺄셈
	else if (mark == 2) {
		result = first - second;
		mark = (char)'-';
	}
	// 3. 곱셈
	else if (mark == 3) {
		result = (double)first * second;
		mark = (char)'*';
	}
	// 4. 나눗셈
	else if (mark == 4) {
		result = (double)first / second;
		mark = (char)'/';
	}
	// 5. 나머지
	if (mark == 5) {
		result = first % second;
		mark = (char)'%';
	}

	printf("%d %c %d = %.2lf", first, mark, second, result);

	return 0;
}