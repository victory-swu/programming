/*
	���ϸ� : assign0403.c
	���� : ������ ���Ǹ� �Ǽ��� �Է¹޾� �е��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ��� : �ӽ¸�
	��¥ : 2025.04.18
	���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void MVD();
double CalCulate(double m, double v);

int main()
{
	MVD();
	return 0;
}

void MVD()
{
	double mass, volume, density;

	printf("����(g)? ");
	scanf("%lf", &mass);
	printf("����(��������Ƽ����)? ");
	scanf("%lf", &volume);

	density = CalCulate(mass, volume);

	printf("�е�: %lf", density);
}

double CalCulate(double m, double v)
{
	return m / v;
}