/*
	* ���ϸ�: assign09.c

	* ����: PA09. 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	* �ۼ���: �ӽ¸�

	* ��¥: 2025.4.1

	* ����: v1.0

  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Change();

int main()
{
	Change();

	return 0;
}

void Change()
{
	int num;

	printf("16���� ����? ");
	scanf("%x", &num);

	printf("16���� %X�� 10������ %d�Դϴ�.\n", num, num);

	return 0;
}