/*
	���ϸ� : assign0402.c
	���� : ȭ�� �µ��� �Ǽ��� �Է¹޾� ���� �µ��� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ��� : �ӽ¸�
	��¥ : 2025.04.18
	���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Ftem();
double Calculate(double t);

int main()
{
	Ftem();
}

void Ftem()
{
	double c, t;

	printf("ȭ���µ�?  ");
	scanf("%lf", &t);

	c = Calculate(t);
	printf("%.2lf F = %.2lf C", t, c);
}

double Calculate(double t)
{
	return (t - 32) * (5.0 / 9.0);
}