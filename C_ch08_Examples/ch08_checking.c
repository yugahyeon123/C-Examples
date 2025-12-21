#include <stdio.h>
#include <stdbool.h>

long get_long(void);
bool bad_limits(long begin, long end, long low, long high);
double sum_squares(long a, long b);
int main(void)
{
    const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start;
    long stop;
    double answer;

    printf("이 프로그램은 어떤 범위에 있는 정수들의 제곱의 합을 계산한다.\n"
        "범위의 시작값은 -10000000보다 작을 수 없다.\n"
        "범위의 마감값은 -10000000보다 클 수 없다.\n"
        "시작값과 마감값을 입력하시오.\n"
        "(끝내려면 두 값을 모두 0으로 입력):\n 범위의 시작값");

    start = get_long();
    printf("범위의 마감값: ");
    stop = get_long();
    
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("범위를 다시 지정하시오.\n");
        else
        {
            answer = sum_squares(start, stop);
            printf("정수들의 제곱의 합");
            printf("%ld에서 %ld까지의 범위에 있는 정수들의 제곱의 합은 %g 입니다.\n", start, stop, answer);
        }
        printf("시작값과 마감값을 입력하시오.\n"
            "(끝내려면 두 값을 모두 0으로 입력):\n");
        printf("범위의 시작값: ");
        start = get_long();
        printf("범위의 마감값: ");
        stop = get_long();
    }
    printf("종료\n");
    return 0;
}

long get_long(void)
{
    long input;
    char ch;

    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar() != '\n'))
            putchar(ch);
        printf(": 정수가 아닙니다.\n25, -178, 3과 같은");
        printf("정수값을 입력하시오:");
    }

    return input;
}

double sum_squares(long a, long b)
{
    double total = 0;
    long i;

    for (i = a; i <= b; i++)
        total += (double)i * (double)i;

    return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;

    if (begin > end)
    {
        printf("시작값은 마감값보다 크면 안 돱니다.\n");
        not_good = true;
    }
    if (begin < low || end < low)
    {
        printf("시작값과 마감값은 %d보다 크거나 같아야 합니다.\n", low);
        not_good = true;
    }
    if (begin > high || end > high)
    {
        printf("시작값과 마감값은 %ld보다 작거나 같아야 합니다.\n", high);
        not_good = true;
    }

    return not_good;
}