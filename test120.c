#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int weight;
	double height, bmi;

	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%d%lf", &weight, &height);

	height /= 100;
	bmi = weight / (height * height);
	
	printf("BMI : %.1lf\n", bmi);

	printf(bmi >= 20.0 && bmi < 25.0 ? "ǥ���Դϴ�" : "ü�߰����� �ʿ��մϴ�.");

	return 0;

}