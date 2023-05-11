#include<stdio.h>

int main() {
	char fruit[10];
	// fruit = "strawberry";   // lvalue 는 왼쪽/ 문자열은 넣을 수 없음
	strcpy(fruit, "strawberry");	// char 배열 선언과 문자열 초기화
	printf("딸기 : %s\n", fruit);			// 배열명으로 저장된 문자열 출력		
	printf("딸기쨈 : %s %s\n", fruit, "jam"); 

	return 0;
	// strcpy : stringcopy 말 그대로 문자열을 복사해주는 것. fruit라는 변수명을 가진 상수 
	// strawberry를 복사해서 fruit로
	
	/*
	* 결과 (fruit안에는 strawberry가 있음) -> 대입
	* 딸기 : strawberry
	* 딸기 쨈 : strawberry jam
	*/
}