/*
	* ���ϸ�: assign05.c

	* ����: PA05. �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ������� ����Ѵ�.)

	* �ۼ���: �ӽ¸�

	* ��¥: 2025.4.1

	* ����: v1.0

  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Weight();

int main()
{
	Weight();

	return 0;
}

void Weight()
{
	float weight;

	printf("������? ");
	scanf("%f", &weight);

	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", weight);
}