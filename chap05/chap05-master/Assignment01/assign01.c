/*
	���ϸ� : assign01.c
	���� : ���� ��ǥ (x, y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
	       ��ũ�� ���� ���� ������ ���簢�� ����� �������� ���簢���� �»������ ���ϴ����� ���ؼ� �����ȴ�.
	�ۼ��� : �ӽ¸�
	��¥ : 2025.04.29
	���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main(void)
{
	Print();
	return 0;
}

void Print(void)
{
	int left, top, right, bottom, x, y;

	printf("���� ������ �»���� (left, top)? ");
	scanf("%d %d", &left, &top);
	printf("���� ������ ���ϴ��� (right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x >= left && x <= right && y >= top && y <= bottom)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
	}
	else if (x <= left && x >= right && y <= top && y >= bottom)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
	}
	else
	{
		printf("�Է°��� �ùٸ��� �ʽ��ϴ�.\n");
	}

	return;
}