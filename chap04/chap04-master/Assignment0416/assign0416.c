/*
    ���ϸ� : assign0416.c
    ���� : ��ǻ�� �ý��ۿ��� ������ ǥ���ϴ� ��� �߿� RGB ǥ����� red, green, blue�� 8��Ʈ���� ����ؼ� ������ ǥ���ϹǷ� 
               24��Ʈ Ʈ���÷���� �Ѵ�. ��ǻ�� �ý��ۿ����� 32��Ʈ �������� ������ ����Ʈ���� red, green, blue�� ������ ���� ������ 
               �����ϰ� �ֻ��� ����Ʈ�� ������� �ʰ� 0���� ä���. 0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� 
               RGB ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
               RGB ������ ����� ���� ����Ʈ ������ ���� �˾ƺ��� ������ 16������ ����Ѵ�.
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
    unsigned char red, green, blue;
    unsigned int x, y, z, color;

    printf("red? ");
    scanf("%d", &red);
    x = red;
    printf("green? ");
    scanf("%d", &green);
    y = green << 8;
    printf("blue? ");
    scanf("%d", &blue);
    z = blue << 16;

    color = x + y + z;

    printf("RGB Ʈ���÷�: %06X", color);

    return;
}