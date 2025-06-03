/* 파일명 : assign01.c

  * 내용 : 등차수열은 앞에 항에 항상 일정한 수(공차)를 더하여 만들어가는 수열이다. 크기가 10인 정수형 배열에 대하여 등차수열로 값을 채우려고 한다. 
            첫 번째 항의 값과 공차(common difference)를 입력받아서 배열을 채우고 출력하는 프로그램을 작성하시오.

  * 작성자 : 임승리

  * 날짜 : 2025.05.31

  * 버전 : v1.0

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

	printf("첫 번째 항? ");
	scanf_s("%d", &a1);

	printf("공차? ");
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