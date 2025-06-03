/*
    파일명 : assign05.c
    내용 : 온도를 입력받아 섭씨 온도는 화씨 온도로, 화씨 온도는 섭씨 온도로 변환하는 프로그램을 작성하시오.
               "27 C" 또는 "27 F"처럼 온도를 입력받을 때 섭씨인지 화씨인지 구분할 수 있는 문자를 함께 입력받는다.
               함께 입력된 문자가 'C'면 섭씨 온도이므로 화씨 온도를 구해서 출력하고, 
               입력된 문자가 'F'면 화씨 온도이므로 섭씨 온도를 구해서 출력한다.
    작성자 : 임승리
    날짜 : 2025.04.29
    버전 : v 1.0
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

    printf("온도? ");
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