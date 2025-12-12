#include <stdio.h>
int main(void)
{
    
    float num1, num2;

    while (1)
    {
        printf("부동 소수점 두 수를 입력:");

        if (scanf("%f %f", &num1, &num2) != 2)
        {
            printf("숫자가 아닌 값이 입력되었습니다. 프로그램 종료\n");
            break;
        }
        
        float minus = num1 - num2;
        float multiply = num1 * num2;
        float divide = minus / multiply;

        printf("결과: %f\n", divide);
    }
    return 0;
}