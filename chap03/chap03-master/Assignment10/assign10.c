/*
  * ���ϸ�: assign10.c

  * ����: ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: �ӽ¸�

  * ��¥: 2025.04.08.

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
	float dollars, change;

	printf("USD? ");
	scanf("%f", &dollars);
	printf("��/�޷� ȯ��? ");
	scanf("%f", &change);

	printf("USD %.2f = KRW %.2f", dollars, dollars * change);

	return 0;
}