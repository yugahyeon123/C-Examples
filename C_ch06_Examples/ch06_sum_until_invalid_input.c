#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("합을 구할 정수를 하나 입력하시오");
    printf("(끝내려면 q): ");
    
    input_is_good = (scanf("%ld", &num) == 1);
    
    while(input_is_good);
    {
        sum = sum + num;
        printf("다음 정수를 입력하시오(끝내려면 q): ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("입력된 정수들의 합은 %ld입니다.\n", sum);
    return 0;
    
}