/*
	파일명 : assign0401.c
	내용 : 질량과 속력을 실수로 입력받아 운동에너지를 구하는 프로그램을 작성하시오.
	작성자 : 임승리
	날짜 : 2025.04.18
	버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMotionEnergy(double weight, double velocity);
int assignment0401(void);

int main(void)
{
	int r = assignment0401();
	return r;
}

int assignment0401(void)
{
	double weight = 0.0;
	double velocity = 0.0; 
	printf("질량 속도를 입력해주세요 : ");
	scanf("%lf %lf", &weight, &velocity);

	double result = getMotionEnergy(weight, velocity);

	printf("질량=%.2f kg, 속력 %.2f m/s 의 운동에너지는 %.2f J 입니다.", weight, velocity, result);

	return 0;
}

double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;

	energy = 1.0 / 2.0 * weight * velocity * velocity;

	return energy;

}