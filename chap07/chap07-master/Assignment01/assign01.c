/* ���ϸ� : assign01.c

  * ���� : ���������� �տ� �׿� �׻� ������ ��(����)�� ���Ͽ� ������ �����̴�. ũ�Ⱑ 10�� ������ �迭�� ���Ͽ� ���������� ���� ä����� �Ѵ�. 
            ù ��° ���� ���� ����(common difference)�� �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ��� : �ӽ¸�

  * ��¥ : 2025.05.31

  * ���� : v1.0

  */

#include <stdio.h>
#define ArrMax 10

void Assignment01();
void CalArray(int arr[], int a1, int d, int size);
void printArray(int arr[], int size);

int main()
{
	Assignment01();
	return 0;
}

void Assignment01()
{
	int a1, d;
	int arr[ArrMax];
	int size;

	printf("ù ��° ��? ");
	scanf_s("%d", &a1);

	printf("����? ");
	scanf_s("%d", &d);

	size = sizeof(arr) / sizeof(arr[0]);

	CalArray(arr, a1, d, size);
	printArray(arr, size);

	return;
}

void CalArray(int arr[], int a1, int d, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = a1 + i * d;
	}
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}