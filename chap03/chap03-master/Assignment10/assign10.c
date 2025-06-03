/*
  * 파일명: assign10.c

  * 내용: 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.

  * 작성자: 임승리

  * 날짜: 2025.04.08.

  * 버전: v1.0

  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Change();

int main()
{
	Change();

	return 0;
}

void Change()
{
	float dollars, change;

	printf("USD? ");
	scanf("%f", &dollars);
	printf("원/달러 환율? ");
	scanf("%f", &change);

	printf("USD %.2f = KRW %.2f", dollars, dollars * change);

	return 0;
}