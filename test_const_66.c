#include<stdio.h>

int main() {
	int income = 0; // income, tax, tax_rate 모두 식별자
	double tax;		// int, double, const, return 모두 출력할 형태를 미리 정해두는 예약어
	const double tax_rate = 0.12;	
	// tax_rate = 0.15;		
	// const는 tax_rate를 변하지 않는 상수로 지정하는 것 값을 바꾸는 것이 불가능
	// 형태 변수명 = 값;
	// 초기화는 가능하지만 할당은 안됨 (할당 : 추가해서 넣어주기..?)
	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax); // .1lf는 소수점한자리

	return 0;
}