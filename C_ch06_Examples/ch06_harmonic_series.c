#include <stdio.h>
int main(void)
{
    int limit;
    double HarmonicSeries, AlternatingHarmonicSeries;
    
    printf("항 수 한 계 입력:");

    while (1)
    {
        HarmonicSeries = 0.0;
        AlternatingHarmonicSeries = 0.0;

        scanf("%d", &limit);
        if (limit <= 0)
        {
            printf("프로그램 종료\n");
            break;
        }

        for (int n = 1; n <= limit; n++)
        {
            HarmonicSeries += 1.0 / n;
            if (n % 2 == 1)
            {
                AlternatingHarmonicSeries += 1.0 / n;
            }
            else
            {
                AlternatingHarmonicSeries -= 1.0 / n;
            }
        }
        printf("조화급수: %lf 교대급수: %lf\n", HarmonicSeries, AlternatingHarmonicSeries);
        printf("다음 한계를 설정해주세요:");

    }
    return 0;
}