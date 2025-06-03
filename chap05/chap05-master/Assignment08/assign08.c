/*
    ���ϸ� : assign08.c
    ���� : ��Ʈ ������ �����ϴ� ���⸦ ���α׷��Ͻÿ�.
               &�� ��Ʈ AND, I�� ��Ʈ OR, ^�� ��Ʈ XOR ������ ó���Ѵ� "0xAB & 0xCC"ó�� ������� �Է��ؼ� ���� ����� ���Ѵ�.
               ��Ʈ �����̹Ƿ� ������� �Է¹��� �� 10����, 8����, 16������ ����� �� �ְ� �ϰ�, ������ ����� 16������ ����Ѵ�.
    �ۼ��� : �ӽ¸�
    ��¥ : 2025.04.29
    ���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Bit();

int main()
{
    Bit();
    return 0;
}

void Bit()
{
    int a, b;
    int result = 0;
    char giho;

    printf("��Ʈ �����? ");
    scanf("%i %c %i", &a, &giho, &b);

    switch (giho) {
    case '&':
        result = a & b;
        break;
    case '|':
        result = a | b;
        break;
    case '^':
        result = a ^ b;
        break;
    }

    printf("���: %08X %c %08X = %08X\n", a, giho, b, result);

    return;
}