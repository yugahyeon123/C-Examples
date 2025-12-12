#include <stdio.h>
int main(void)
{
    int FirstOperand, SecondOperand, result;
    int firstTime = 1;

    printf("이 프로그램은 모듈러스(두 수를 나눈 나머지)를 구하는 프로그램이다.\n");
    printf("두 번째 피연산자로 제공할 정수를 입력하시오.: ");
    scanf("%d", &SecondOperand);

    while (1)
    {
        if (firstTime)
        {
            printf("이제 첫 번째 피연산자를 입력하시오.: ");
            firstTime = 0;
        }
        else
        {
            printf("첫 번째 피연산자(<=0이면 종료)용 다음 수를 입력하시오.: ");
        }

        scanf("%d", &FirstOperand);

        if (FirstOperand <= 0)
            break;

        result = FirstOperand % SecondOperand;
        printf("%d %% %d = %d\n", FirstOperand, SecondOperand, result);
    }

    printf("종료\n");
    return 0;
}