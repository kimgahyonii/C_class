#include<stdio.h>

int main() {
	int a = -5;

	if (a < 0) {
		a = -a;
	}
	printf("%d",a);
	
}