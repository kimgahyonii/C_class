#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int hour,min, sec;
	double time;
	// double temp;	// 1. 시간을 입력받을 때 첫번째 방법 함수 하나 더 만들고 tmep안에 time넣어주기

	scanf("%lf", &time);
	// temp = time;
	printf("%.2lf시간은 ", time);	// 2. 변수를 하나 더 만들지 않고 처음 시간이 변하기 전에 바로 출력

	hour = (int)time;		
	time = time - hour;		// [3.76 -3 = 0.76 ]
	time *= 60;				// [0.76 * 60 = 45.6]
	min = (int)time;		// [45]
	time = time - min;		// [45.6 - 45 = 0.6]
	time *= 60;				// [45.6 * 60 = 36.0]
	sec = (int)time;		// [35]
	printf("%d시간 %d분 %d초입니다.", hour, min, sec);


	return 0;

}