/*
  * ���ϸ�: assign06.c

  * ����: ����Ʈ�� ������ ��������(��)�� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 1���� 0.3025�� �ش��Ѵ�.
                                                   (���α׷��� �ۼ��� �� �̸� �ִ� ����� �̿��غ���.)

  * �ۼ���: �ӽ¸�

  * ��¥: 2025.04.08.

  * ����: v1.0

  */
#define _CRT_SECURE_NO_WARNINGS
#define mm 0.3025
#include <stdio.h>


void Area();

int main()
{
    Area();

    return 0;
}

void Area()
{
    float weight;

    printf("����Ʈ�� ����(��������)? ");
    scanf("%f", &weight);

    printf("%.2f �������� = %.2f ��\n", weight, weight * mm);

    return 0;
}
