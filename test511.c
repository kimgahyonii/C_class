#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	// 등수 입력 받기 lank
	int rank,point;
	char ch;
	printf("등수 입력 : ");
	scanf("%d", &rank);
	
	// scanf("%c", &ch);
	// 1등이면 포인트 300, 2등 포인트 200, 3등 포인트 100
	//printf("%d등급", rank);
	
	// if (rank == 1 || rank == 2 || rank == 3) {

	switch (rank/100) {	// 100,200 300 반드시 정수 (수식으로 들어가도 결과가 정수이면 가능)
		case 1: point = 300;
			break;
		case 2: point = 200;
			break;
		case 3: point = 100;
			break; // 넣어도 되고 안넣어도 상관 없음
		default: point = 0;
	}
	printf("%d등급 %c포인트", rank, ch);
	



	/*	if (rank == 1) {
			point = 300;
		}
		else if (rank == 2) {
			point = 200;
		}
		else if (rank == 3) {
			point = 100;
		}
		printf("%d등급 %d포인트", rank, point);
	}*/
	/*else {
		printf("%d등급", rank);
	}*/




	return 0;

// else로 바로 넘겨서 0 출력도 가능
// 초기값으로 if를 쓰지 않아도 1등2등3등 걸러서 출력가능 point = 0, 만약 4등 입력시 포인트 0출력
}