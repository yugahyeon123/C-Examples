#include <stdio.h>
int main(void)
{
    double debt;

    for (debt = 100.0; debt < 150.0; debt = debt * 1.1)
    {
        printf("당신의 신용불량채무는 이제 $%.2f입니다.\n", debt);
    }
    return 0;
}