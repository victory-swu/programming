/*
	파일명 : assign0410.c
	내용 : 항공권 예약 시 여정의 총 소요시간을 시간 단위로 입력받아서 며칠 몇 시간 몇 분인지 출력하는 프로그램을 작성하시오.
	작성자 : 임승리
	날짜 : 2025.04.18
	버전 : v 1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void  TimeM();

int main()
{
	TimeM();
	return 0;
}

void  TimeM()
{
	float hour;
	int day, min, hour1;
	printf("비행 소요시간(시간)? ");
	scanf("%f", &hour);
	day = (int)(hour / 24);
	hour = (hour - (24 * day));
	hour1 = (int)(hour);
	min = (hour - hour1) * 60;

	printf("비행 소요시간은 %d일 %d시간 %d분입니다.", day, hour1, min);

	return;
}