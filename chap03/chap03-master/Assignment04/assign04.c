/*
  * ���ϸ�: assign04.c

  * ����: ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
                                           (���� ũ��� N ������ �Է¹ް�, �̵��� �Ÿ��� m ������ �Է¹޴´�.)

  * �ۼ���: �ӽ¸�

  * ��¥: 2025.04.08.

  * ����: v1.0

  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Work();

int main()
{
    Work();

    return 0;
}
void Work()
{
    float force, distance;

    printf("��(N)? ");
    scanf_s("%f", &force);

    printf("�̵��Ÿ�(m)? ");
    scanf_s("%f", &distance);

    printf("���� ��: %.2f J", force * distance);

    return 0;
}
