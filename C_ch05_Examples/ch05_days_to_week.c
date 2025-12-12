#include <stdio.h>
int main() 
{
    int input_day;
    int week, day;

    while (1)
    {
        printf("날 수를 입력하세요:\n");
        scanf("%d", &input_day);

        if (input_day <= 0)
        {
            break;
        }

        week = input_day / 7;
        day = input_day % 7;

        printf("%d일은 %d주, %d일 입니다.\n", input_day, week, day);

        while (getchar() != '\n');
        continue;

    }
    printf("프로그램 종료");

}