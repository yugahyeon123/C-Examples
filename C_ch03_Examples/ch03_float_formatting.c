#include <stdio.h>
int main() 
{
    double x;
    printf("부동소수점 수를 입력하시오:");
    scanf("%lf",&x);

    printf("고정소수점 표기: %.6f\n",x);
    printf("지수 표기: %e\n",x);
    printf("p 표기: %a\n",x);

    return 0;
}