/*
	���ϸ� : assign04.c
	���� : ������ �Է¹޾� �������� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
	        ������ �Ǵ� ������ ������ ����.
	�ۼ��� : �ӽ¸�
	��¥ : 2025.04.29
	���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print();

int main(void)
{
	Print();
	return 0;
}

void Print(void)
{
	int year;

	printf("����? ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("%d���� �����Դϴ�", year);
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�", year);
	}

	return;
}