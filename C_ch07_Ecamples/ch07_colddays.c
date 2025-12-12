#include <stdio.h>
int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("최저 기온들의 목록을 입력하십시오.\n");
    printf("섭씨 단위를 사용하시오(입력을 끝내려면 q).\n");
    while (scanf("%f", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING)
            cold_days++;
    }
    if (all_days != 0)
        printf("전체 %d일 중에 영하의 날씨는 %.1f%였습니다.\n", all_days, 100.0 * (float) cold_days / all_days);
    if (all_days == 0)
        printf("입력된 데이터가 없습니다!\n");
        
    return 0;
}