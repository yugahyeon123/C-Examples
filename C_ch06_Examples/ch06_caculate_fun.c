#include <stdio.h>
float calculate(float num1, float num2);
int main(void)
{
    
    while (1)
    {
        float num1, num2;
        printf("부동 소수점 두 수를 입력:");

        if (scanf("%f %f", &num1, &num2) != 2)
        {
            printf("숫자가 아닌 값이 입력되었습니다. 프로그램 종료\n");
            break;
        }

        float result = calculate(num1, num2);
        printf("결과: %f\n", result);
    }
    return 0;
}

float calculate(float num1, float num2)
{
    float minus = num1 - num2;
    float multiply = num1 * num2;
    float divide = minus / multiply;

    return divide;
}