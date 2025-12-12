#include <stdio.h>
int main(void)
{
    int t_ct;
    double time, power_of_2;
    int limit;

    printf("원하는 만큼의 항 수를 입력하시오:");
    scanf("%d", &limit);

    for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
    {
        time += 1.0/power_of_2;
        printf("시간 = %f (항 수 %d)\n", time, t_ct);
    }
    return 0;
}