#include<stdio.h>

int main() {
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	printf("hour : %d\n", hour);// hour = 3 [�� ��ȯ���� ���� �κи� ���] 
	// min = time - hour; 
	// 3.76 - 3.0 = 0.76 [�� �ð��� �ȵǴ� �κ��� �ٽ� ����.]
	printf("min : %.2lf\n", time - hour);
	// 0.76 * 60 = 45.6 // �д����� ȯ��
	printf("�д��� ȯ�� : %.1lf\n", (time - hour) * 60);	// min = 45.6
	min = (time - hour) * 60; // min = 45
	printf("����ȯ min : %d\n", (int)min);

	printf("sec : %.1lf\n", ((time - hour) * 60) - min); // 45.6 - 45 = 0.6
	// sec = ((time - hour ) * 60 - min) * 60; // 0.6 * 60 = 36.0
	sec = ((time - hour) * 60 - min) * 60; // 35
	printf("���� sec : %d\n", (int)sec);
	printf("%.2lf�ð��� %d�ð� %d�� %d���Դϴ�.", time, hour, (int)min, (int)sec);

	return 0;




}