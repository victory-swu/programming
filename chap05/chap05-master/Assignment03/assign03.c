/*
	���ϸ� : assign03.c
	���� : �Ž������� �ݾ��� �Է¹޾� ������, ����, õ��, ���, �ʿ�¥���� ���� �� �� �ʿ����� ���ؼ� ����Ͻÿ�.
	        �ʿ� �̸� ������ �����Ѵ�.
	�ۼ��� : �ӽ¸�
	��¥ : 2025.04.29
	���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(int money);
int ger();

int main(void)
{
    int money = ger();
    Print(money);
    return 0;
}

int ger()
{
    int mon;
    printf("�Ž�����? ");
    scanf("%d", &mon);

    int money = mon / 10 * 10;  // 10�� �̸� ����
    return money;
}

void Print(int money)
{
    printf("�Ž����� (10�� �̸� ����): %d\n", money);

    if (money >= 50000)
        printf("50000�� %d��\n", money / 50000);
    else
        printf("50000�� 0��\n");

    money %= 50000;

    if (money >= 10000)
        printf("10000�� %d��\n", money / 10000);
    else
        printf("10000�� 0��\n");

    money %= 10000;

    if (money >= 5000)
        printf(" 5000�� %d��\n", money / 5000);
    else
        printf(" 5000�� 0��\n");

    money %= 5000;

    if (money >= 1000)
        printf(" 1000�� %d��\n", money / 1000);
    else
        printf(" 1000�� 0��\n");

    money %= 1000;

    if (money >= 100)
        printf("  100�� %d��\n", money / 100);
    else
        printf("  100�� 0��\n");

    money %= 100;

    if (money >= 10)
        printf("   10�� %d��\n", money / 10);
    else
        printf("   10�� 0��\n");
}