/*
    ���ϸ� : assign05.c
    ���� : �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
               "27 C" �Ǵ� "27 F"ó�� �µ��� �Է¹��� �� �������� ȭ������ ������ �� �ִ� ���ڸ� �Բ� �Է¹޴´�.
               �Բ� �Էµ� ���ڰ� 'C'�� ���� �µ��̹Ƿ� ȭ�� �µ��� ���ؼ� ����ϰ�, 
               �Էµ� ���ڰ� 'F'�� ȭ�� �µ��̹Ƿ� ���� �µ��� ���ؼ� ����Ѵ�.
    �ۼ��� : �ӽ¸�
    ��¥ : 2025.04.29
    ���� : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Temperate();

int main()
{
    Temperate();
    return 0;
}

void Temperate()
{
    float temp, temp2;
    char tem;

    printf("�µ�? ");
    scanf("%f %c", &temp, &tem);

    if (tem == 'C') {
        temp2 = temp * 9.0 / 5.0 + 32;
        printf("%.2f C ==> %.2f F\n", temp, temp2);
    }
    else if (tem == 'F') {
        temp2 = (temp - 32) * 5.0 / 9.0;
        printf("%.2f F ==> %.2f C\n", temp, temp2);
    }
    return;
}