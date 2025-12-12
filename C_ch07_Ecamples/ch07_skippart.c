#include <stdio.h>
int main(void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;
    
    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("첫 번째 스코어를 입력하시오(끝내려면 q): ");

    while (scanf("%f", &score) == 1)
    {
        if (score < MIN || score > MAX)
        {
            printf("%0.1f: 유효한 값이 아닙니다. 다시 입력하시오:", score);
            continue;
        }
        printf("%0.1f: 유효한 값입니다.\n", score);

        min = (score < min)? score : min;
        max = (score > max)? score : max;
        total += score;
        n++;

        printf("다음 스코어를 입력하시오(끝내려면 q): ");
    }
    if (n > 0)
    {
        printf("스코어 %d의 평균은 %0.1f입니다.\n", n, total / n);
        printf("최저 = %0.1f, 최고 = %0.1f\n", min, max);
    }
    else
        printf("유효한 값을 전혀 입력하지 않았습니다.\n");
    return 0;
}