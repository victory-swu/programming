/* ���ϸ� : assign03.c

 * ���� : �� �� ������ ���� �Ÿ��� ���ϴ� distance �Լ��� �ۼ��Ͻÿ�.
		   distance �Լ��� �̿��ؼ� �Է¹��� ���������� ���� ������ ���� �Ÿ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ��� : �ӽ¸�

 * ��¥ : 2025.05.23

 * ���� : v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Assignment0603();
double distance(int a, int b, int c, int d);

int main()
{
	Assignment0603();

	return 0;
}

void Assignment0603()
{
	int x1, x2, y1, y2;

	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &x1, &y1);
	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &x2, &y2);

	printf("(%d, %d)~(%d, %d) ������ ����: %lf", x1, y1, x2, y2, distance(x1, x2, y1, y2));

	return;
}

double distance(int a, int b, int c, int d)
{
	int e = pow(a - b, 2);
	int f = pow(c - d, 2);
	double g = sqrt(e + f);

	return g;
}