/*
    파일명 : assign08.c
    내용 : 비트 연산을 수행하는 계산기를 프로그램하시오.
               &는 비트 AND, I는 비트 OR, ^는 비트 XOR 연산을 처리한다 "0xAB & 0xCC"처럼 연산식을 입력해서 연산 결과를 구한다.
               비트 연산이므로 연산식을 입력받을 때 10진수, 8진수, 16진수를 사용할 수 있게 하고, 연산의 결과는 16진수로 출력한다.
    작성자 : 임승리
    날짜 : 2025.04.29
    버전 : v 1.0
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

    printf("비트 연산식? ");
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

    printf("결과: %08X %c %08X = %08X\n", a, giho, b, result);

    return;
}