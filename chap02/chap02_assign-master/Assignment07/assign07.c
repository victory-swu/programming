/*
	* ���ϸ�: assign07.c

	* ����: PA07. Ŀ�ǻ�����(S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (Ŀ�� ������� S. T, G �� ���� ���� �� �ϳ��� �Է¹޴´�.)

	* �ۼ���: �ӽ¸�

	* ��¥: 2025.4.1

	* ����: v1.0

  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Order();

int main()
{
	Order();

	return 0;
}

void Order()
{
	char size;
	int num;

	printf("Ŀ�ǻ�����(S,T,G)�� �ֹ� ����? ");
	scanf(" %c %d", &size, &num);

	printf("%c ������ %d���� �ֹ��մϴ�.\n", size, num);

	return 0;
}