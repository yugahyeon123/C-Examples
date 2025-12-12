#include <stdio.h>
#define MINUTES_IN_HOUR 60
int main() 
{
    double time;

    while(1)
    {

        printf("분수로 된 시간을 입력:\n");
        scanf("%lf", &time);

        if (time <= 0)
        {
            break;
        }

        int hours = (int)time;
        double frac = time - hours;
        int minutes = (int)(frac * MINUTES_IN_HOUR + 0.5);

        printf("현재 시각은 %d시 %d분입니다.\n", hours, minutes);

        while (getchar() != '\n');
        continue;

    }
    printf("프로그램 종료");

}