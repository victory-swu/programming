/*
	���ϸ� : assign0409.c
	���� : �������� ����ð��� �� ������ �Է¹޾� �� �ð� �� �� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	�ۼ��� : �ӽ¸�
	��¥ : 2025.04.18
	���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void TimeC();

int main()
{
	TimeC();
	return 0;
}

void TimeC()
{
	int second, min, hour;

	printf("����ð�(��)? ");
	scanf("%d", &second);

	hour = second / 3600;
	min = second % 3600 / 60;
	second = second % 3600 % 60;

	printf("����ð��� %d�ð� %d�� %d���Դϴ�\n", hour, min, second);
	return;
}