/*
	파일명 : assign0408.c
	내용 : 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오.
	작성자 : 임승리
	날짜 : 2025.04.18
	버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#define pi 3.141592
#include<stdio.h>
#include<math.h>

void Sphere(void);
double CalculateVolume(double r);

int main()
{
	Sphere();
	return 0;
}

void Sphere(void)
{
	double radius, result;
	printf("반지름의 길이? ");
	scanf("%lf", &radius);
	result = CalculateVolume(radius);
	printf("구의 부피: %lf", result);

	return;
}

double CalculateVolume(double r)
{
	return (4.0 / 3.0) * pi * pow(r, 3);
}