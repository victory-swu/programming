/*
  * ���ϸ�: assign02.c

  * ����: ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: �ӽ¸�

  * ��¥: 2025.04.08.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void rectangle();

int main()
{
    rectangle();

    return 0;
}

void rectangle()
{
    int side1, side2;

    printf("������ ����? ");
    scanf("%d", &side1);
    printf("������ ����? ");
    scanf("%d", &side2);

    printf("���簢���� ���� : %d\n", side1 * side2);
    printf("���簢���� �ѷ� : %d\n", 2 * (side1+side2));

    return 0;
}
