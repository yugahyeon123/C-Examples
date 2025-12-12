#include <stdio.h>
#include <math.h>

int main(void) 
{
    double num;
    int exponent;
    double mantissa;

    printf("하나의 부동 소수점 수:\n");
    scanf("%lf", &num);

    //a
    exponent = (int)floor(log10(fabs(num)));
    mantissa = num / pow(10, exponent);
    printf("a.입력된것은 %.1lf 또는 %.1fe+%03d 입니다.\n", num, mantissa, exponent);

    //b
    exponent = (int)floor(log10(fabs(num)));
    mantissa = num / pow(10, exponent);

    printf("b.입력된것은 %+.3lf 또는 %.3fE+%03d 입니다.\n", num, mantissa, exponent);

    return 0;
}