#include <stdio.h>
double power(double n, int p);
int main(void)
{
    double x, xpow;
    int exp;

    printf("어떤 수와, 원하는 양의 정수 거듭제곱수를");
    printf("입력하시오.\n끝내려면 q를");
    printf("입력하시오.\n");

    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);

        printf("%.3g의 %d승은 %.5g입니다.\n", x, exp, xpow);
        printf("두 수를 입력하시오. 끝내려면 q를 입력하시오.\n");
    }
    printf("거듭제곱 구하기가 재미있었나요? -- 안녕\n");
    return 0;
    
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++)
    {
        pow *= n;
    }
    return pow;
}