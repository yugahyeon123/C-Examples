#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int j, num;
    int i;
    bool isPrime;

    printf("정수를 입력하세요:\n");
    scanf("%d", &num);
    printf("%d 이하의 소수:", num);

    for (i = 2; i <= num; i++)
    {
        isPrime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
            printf("%2d", i);
    }
    printf("\n");
    return 0;
}