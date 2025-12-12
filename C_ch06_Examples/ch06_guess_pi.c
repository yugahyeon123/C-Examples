#include <stdio.h>
#include <math.h>
int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("원주율의 값이 얼마지?\n");
    scanf("%lf", &response);

    while (fabs(response - ANSWER) > 0.0001)
    {
        printf("다시 말해 봐\n");
        scanf("%lf", &response);
    }
    printf("충분히 가깝다!\n");
    return 0;
}