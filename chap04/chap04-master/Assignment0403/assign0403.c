/*
	파일명 : assign0403.c
	내용 : 질량과 부피를 실수로 입력받아 밀도를 구하는 프로그램을 작성하시오.
	작성자 : 임승리
	날짜 : 2025.04.18
	버전 : v 1.0
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

	printf("질량(g)? ");
	scanf("%lf", &mass);
	printf("부피(세제곱센티미터)? ");
	scanf("%lf", &volume);

	density = CalCulate(mass, volume);

	printf("밀도: %lf", density);
}

double CalCulate(double m, double v)
{
	return m / v;
}