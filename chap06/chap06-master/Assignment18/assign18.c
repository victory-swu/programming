/* ���ϸ�: assign18.c

 * ����: ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors �Լ��� �ۼ��Ͻÿ�.
          0~999 ������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

 * �ۼ���: �ӽ¸�

 * ��¥: 2025.05.23

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Assignment0618();
void divisors(int x);

int main()
{
    srand(time(NULL));

    Assignment0618();

    return 0;
}

void Assignment0618()
{
    int i, x;

    for (i = 1;i < 4;i++)
    {
        int x = rand() % 1000;

        divisors(x);
    }

}

void divisors(int x)
{
    int i;
    int c = 0;


    printf("%d�� ���: ", x);

    for (i = 1; i <= x; i++)
    {

        if (x % i == 0) {
            c++;
            printf("%d ", i);
        }
    }
    printf("=> �� %d��\n", c);
}