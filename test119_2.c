#include<stdio.h>

int main() {
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	printf("hour : %d\n", hour);// hour = 3 [형 변환으로 정수 부분만 골라냄] 
	// min = time - hour; 
	// 3.76 - 3.0 = 0.76 [한 시간이 안되는 부분을 다시 저장.]
	printf("min : %.2lf\n", time - hour);
	// 0.76 * 60 = 45.6 // 분단위로 환산
	printf("분단위 환산 : %.1lf\n", (time - hour) * 60);	// min = 45.6
	min = (time - hour) * 60; // min = 45
	printf("현변환 min : %d\n", (int)min);

	printf("sec : %.1lf\n", ((time - hour) * 60) - min); // 45.6 - 45 = 0.6
	// sec = ((time - hour ) * 60 - min) * 60; // 0.6 * 60 = 36.0
	sec = ((time - hour) * 60 - min) * 60; // 35
	printf("최종 sec : %d\n", (int)sec);
	printf("%.2lf시간은 %d시간 %d분 %d초입니다.", time, hour, (int)min, (int)sec);

	return 0;




}