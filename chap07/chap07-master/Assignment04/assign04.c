/* ���ϸ� : assign04.c

  * ���� : Ư�� ������ �ʱ�ȭ�� ������ �迭�� ���Ͽ� �迭�� ���� �� �ִ��� ���� ���ҿ� �ּڰ��� ���� ���Ҹ� ã�Ƽ� �ε����� ���� �Բ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
          �迭�� �ʱⰪ�� ������� ���Ͻÿ�.

  * �ۼ��� : �ӽ¸�

  * ��¥ : 2025.05.31

  * ���� : v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment04();
void max_arr(int arr[], int size);
void min_arr(int arr[], int size);

int max, min;
int max_in, min_in;

int main()
{
    Assignment04();

    return 0;
}

void Assignment04()
{
    int arr[10] = { 14 ,62 ,81 ,99 ,42 ,31 ,41 ,59 ,70, 38 };
    int size = sizeof(arr) / sizeof(arr[0]);


    printf("�迭: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    max_arr(arr, size);
    min_arr(arr, size);


    printf("�ִ�: �ε���=%d, ��=%d\n", max_in, max);
    printf("�ּҰ�: �ε���=%d, ��=%d", min_in, min);

}

void max_arr(int arr[], int size)
{
    int i;
    max = arr[0];
    max_in = 0;

    for (i = 1;i < size;i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_in = i;
        }
    }
}

void min_arr(int arr[], int size)
{
    int i;
    min = arr[0];
    min_in = 0;

    for (i = 1;i < size;i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_in = i;
        }
    }
}