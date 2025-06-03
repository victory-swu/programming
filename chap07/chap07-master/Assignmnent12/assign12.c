/* 파일명 : assign12.c

  * 내용 : 기차표 예매 프로그램을 작성하려고 한다. 간단한 구현을 위해 좌석은 모두 10개라고 한자.
            예매할 좌석수를 입력받아 빈 자리를 할당한다. 예매할 때마다 각 좌석의 상태를 출력한다.
            O이면 예매가능, X는 예매 불가를 의미한다. 더 이상 예매할 수 없으면 프로그램을 종료한다.

  * 작성자 : 임승리

  * 날짜 : 2025.05.31

  * 버전 : v1.0

  */

#include <stdio.h>
#include <string.h>

void Assignment12();
void CalArray(char a[]);

int main()
{
	Assignment12();

	return 0;
}

void Assignment12()
{
	char a[24] = "[ O O O O O O O O O O ]";

	while (strchr(a, 'O') != 0)
	{
		printf("%s\n", a);
		CalArray(a);
	}
	return;
}

void CalArray(char a[])
{
	int b;
	static int v = 0;

	printf("예매할 좌석수? ");
	scanf_s("%d", &b);

	for (int i = v + 1; i <= v + b; i++)
	{
		a[2 * i] = 'X';
		printf("%d ", i);
	}
	printf("번 좌석을 예매했습니다.\n");
	v += b;

	return;
}