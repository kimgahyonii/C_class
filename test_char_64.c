#include<stdio.h>

int main() {
	char fruit[10];
	// fruit = "strawberry";   // lvalue �� ����/ ���ڿ��� ���� �� ����
	strcpy(fruit, "strawberry");	// char �迭 ����� ���ڿ� �ʱ�ȭ
	printf("���� : %s\n", fruit);			// �迭������ ����� ���ڿ� ���		
	printf("����´ : %s %s\n", fruit, "jam"); 

	return 0;
	// strcpy : stringcopy �� �״�� ���ڿ��� �������ִ� ��. fruit��� �������� ���� ��� 
	// strawberry�� �����ؼ� fruit��
	
	/*
	* ��� (fruit�ȿ��� strawberry�� ����) -> ����
	* ���� : strawberry
	* ���� ´ : strawberry jam
	*/
}