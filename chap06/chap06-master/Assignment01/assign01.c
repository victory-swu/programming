/* ���ϸ� : assign01.c

 * ���� : ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� get_perimeter �Լ��� �ۼ��Ͻÿ�.
           get_perimeter �Լ��� �̿��ؼ� �Է¹��� ����, ������ ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ��� : �ӽ¸�

 * ��¥ : 2025.05.23

 * ���� : v1.0

 */

#include <stdio.h>

void Assignment0601();
int get_perimeter(int a, int b);

int main()
{
	Assignment0601();

	return 0;
}

void Assignment0601()
{
	int a, b;

	printf("����? ");
	scanf_s("%d", &a);
	printf("����? ");
	scanf_s("%d", &b);

	printf("���簢���� �ѷ�: %d", get_perimeter(a, b));

	return;
}

int get_perimeter(int a, int b)
{
	return (a + b) * 2;
}