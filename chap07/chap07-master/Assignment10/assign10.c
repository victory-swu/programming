/* ���ϸ� : assign10.c

  * ���� : 3 x 3 ����� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
           ��ķ� ���� 2���� �迭�� ������� �ʱ�ȭ�ص� �ȴ�.

  * �ۼ��� : �ӽ¸�

  * ��¥ : 2025.05.31

  * ���� : v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 3

void Assignment10();
void add_arr(int arr1[ROW][COL], int arr2[ROW][COL]);

int main()
{
    Assignment10();

    return 0;
}

void Assignment10()
{
    int i, j;
    int arr1[ROW][COL] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int arr2[ROW][COL] = { {10,20,30}, {40,50,60}, {70,80,90} };
    int size = sizeof(arr1) / sizeof(arr1[0][0]);


    printf("x ���:\n");
    for (i = 0;i < ROW;i++)
    {
        for (j = 0;j < COL;j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }


    printf("y ���:\n");
    for (i = 0;i < ROW;i++)
    {
        for (j = 0;j < COL;j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }


    printf("x + y ���:\n");
    add_arr(arr1, arr2);

    return;
}

void add_arr(int arr1[ROW][COL], int arr2[ROW][COL])
{
    int i, j;
    int arr3[ROW][COL];

    for (i = 0;i < ROW;i++)
    {
        for (j = 0;j < COL;j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}