/*
  * ���ϸ�: assign01.c

  * ����: �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: �ӽ¸�

  * ��¥: 2025.04.08.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square();

int main()
{
    square();

    return 0;
}

void square()
{
    int line;

    printf("�� ���� ���� ? ");
    scanf("%d", &line);

    printf("���簢���� ���� : %d\n", line * line);
    printf("���簢���� �ѷ� : %d\n", line * 4);

    return 0;
}
