#include<stdio.h>

int main() {
	int income = 0; // income, tax, tax_rate ��� �ĺ���
	double tax;		// int, double, const, return ��� ����� ���¸� �̸� ���صδ� �����
	const double tax_rate = 0.12;	
	// tax_rate = 0.15;		
	// const�� tax_rate�� ������ �ʴ� ����� �����ϴ� �� ���� �ٲٴ� ���� �Ұ���
	// ���� ������ = ��;
	// �ʱ�ȭ�� ���������� �Ҵ��� �ȵ� (�Ҵ� : �߰��ؼ� �־��ֱ�..?)
	income = 456;
	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�.\n", tax); // .1lf�� �Ҽ������ڸ�

	return 0;
}