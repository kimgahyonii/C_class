#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int num1,num2,result;
	char mark;
	printf("계산 입력 : ");
	scanf("%d%c%d", &num1,&mark,&num2);

	
		if (mark = "+") {
			result = num1 + num2;
		}
		else if (mark = "-") {
			result = num1 - num2;
		}
		else if (mark = "*") {
			result = num1 * num2;
		}
		else if (mark = "/") {
			result = num1 / num2;
		}
		else if (mark = "%") {
			result = num1 % num2;
		}
	else printf("%d %c %d = %d", num1, mark, num2, result);

	return 0;

}