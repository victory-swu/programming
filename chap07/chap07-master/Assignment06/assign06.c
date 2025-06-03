/* 파일명 : assign06.c

  * 내용 : 크기가 10인 실수형 배열에 대해서 원소들을 역순으로 만드는 프로그램을 작성하시오.
            실수형 배열의 초기값은 마음대로 정하시오.

  * 작성자 : 임승리

  * 날짜 : 2025.05.31

  * 버전 : v1.0

  */

#include <stdio.h>

void Assignment06();
void ReverseArray(double arr[], int size);

int main()
{
	Assignment06();

	return 0;
}

void Assignment06()
{
	double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };
	int size;
	size = sizeof(arr) / sizeof(arr[0]);

	ReverseArray(arr, size);

	return;
}

void ReverseArray(double arr[], int size)
{

	for (int i = 0; i < size; i++)
	{
		printf("%.1f ", arr[i]);
	}

	printf("\n");

	for (int i = size - 1; i >= 0; i--)
	{
		printf("%.1f ", arr[i]);
	}

}