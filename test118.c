#include<stdio.h>

int main() {
	int res;
	res = sizeof(short) > sizeof(long); // sizof(short) = 2, sizeof(long) = 4 => 거짓
	// 즉 res안에는 0이 들어있음
	// res가 1과 같으면 short를 아니면 long이므로 삼항연산자를 사용
	printf("%s", res == 1 ? "short" : "long");
	//		res가 1과 같다. 참 : short, 거짓 : long => 거짓 즉 long을 출력
	// %s 는 string 문자열 출력하므로 string을 써줌
	return 0;
}