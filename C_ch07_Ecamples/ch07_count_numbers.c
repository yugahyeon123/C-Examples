#include <stdio.h>
int main(void)
{
    int sum = 0;
    int count = 0;
    int num;
    int average;
    int odd = 0;
    int even = 0;

    printf("숫자를 입력하세요:\n");

    while (scanf("%d", &num) == 1 && num != 0)
    {
        if (num % 2 == 0)
            even++;
        else
            odd++;
        count++;
        sum += num;
    }
    if (count > 0)
        average = sum / count;
    else
        average = 0;
    printf("짝수 %d개 홀수 %d개 평균 %d",even, odd, average);
    return 0;
    
}