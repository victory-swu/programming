/* ���ϸ� : assign05.c

 * ���� : ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even �Լ��� Ȧ������ �˻��ϴ� is_odd �Լ��� �ۼ��Ͻÿ�.
		   �� �Լ��� �̿��ؼ� 0�� �Էµ� ������ �Էµ� �����鿡 ���ؼ� ¦���� ������ Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ��� : �ӽ¸�

 * ��¥ : 2025.05.23

 * ���� : v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0605();
void is_even(int a);
void is_odd(int b);

int even = 0;
int odd = 0;

int main()
{
	Assignment0605();

	return 0;
}

void Assignment0605(void)
{
	int i;
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");

	while (1)
	{
		int x;
		scanf("%d", &x);

		if (x == 0)
			break;

		is_even(x);
		is_odd(x);
	}
	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d�� �Դϴ�.", even, odd);
}

void is_even(int a)
{
	if (a % 2 == 0)
	{
		even = even + 1;
	}
}


void is_odd(int b)
{
	if (b % 2 == 1)
	{
		odd = odd + 1;
	}
}