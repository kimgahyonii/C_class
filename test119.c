#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int hour,min, sec;
	double time;
	// double temp;	// 1. �ð��� �Է¹��� �� ù��° ��� �Լ� �ϳ� �� ����� tmep�ȿ� time�־��ֱ�

	scanf("%lf", &time);
	// temp = time;
	printf("%.2lf�ð��� ", time);	// 2. ������ �ϳ� �� ������ �ʰ� ó�� �ð��� ���ϱ� ���� �ٷ� ���

	hour = (int)time;		
	time = time - hour;		// [3.76 -3 = 0.76 ]
	time *= 60;				// [0.76 * 60 = 45.6]
	min = (int)time;		// [45]
	time = time - min;		// [45.6 - 45 = 0.6]
	time *= 60;				// [45.6 * 60 = 36.0]
	sec = (int)time;		// [35]
	printf("%d�ð� %d�� %d���Դϴ�.", hour, min, sec);


	return 0;

}