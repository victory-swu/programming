/*
	���ϸ� : assign0401.c
	���� : ������ �ӷ��� �Ǽ��� �Է¹޾� ��������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ��� : �ӽ¸�
	��¥ : 2025.04.18
	���� : v 1.0
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
	printf("���� �ӵ��� �Է����ּ��� : ");
	scanf("%lf %lf", &weight, &velocity);

	double result = getMotionEnergy(weight, velocity);

	printf("����=%.2f kg, �ӷ� %.2f m/s �� ��������� %.2f J �Դϴ�.", weight, velocity, result);

	return 0;
}

double getMotionEnergy(double weight, double velocity)
{
	double energy = 0.0;

	energy = 1.0 / 2.0 * weight * velocity * velocity;

	return energy;

}