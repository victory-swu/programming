/*
    ���ϸ� : assign0417.c
    ���� : 32��Ʈ ũ���� ������(��ȣ ���� ������)���� 0~31�� ��Ʈ�� �����Ѵ�. 7��° ��Ʈ�� 1�� ��, 15��° ��Ʈ�� 1�� ��, 23��° ��Ʈ�� 1�� ��,
               31�� ° ��Ʈ�� 1�� ���� ���ؼ� 16������ 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
    �ۼ��� : �ӽ¸�
    ��¥ : 2025.04.18
    ���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(void);

int main()
{
    Print();
    return 0;
}

void Print(void)
{
    unsigned int bit, bit7, bit15, bit23, bit31;

    bit = 1;

    bit7 = bit << 7;
    bit15 = bit << 15;
    bit23 = bit << 23;
    bit31 = bit << 31;

    printf("7�� ��Ʈ�� 1�� ��: %08x %d\n", bit7, bit7);
    printf("15�� ��Ʈ�� 1�� ��: %08x %d\n", bit15, bit15);
    printf("23�� ��Ʈ�� 1�� ��: %08x %d\n", bit23, bit23);
    printf("31�� ��Ʈ�� 1�� ��: %08x %d\n", bit31, bit31);

    return;
}