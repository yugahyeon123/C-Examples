#include <stdio.h>
int main(void)
{
    int age = 20;

    while (age++ <= 65)
    {
        if ((age % 20) == 0)
            printf("%d세 입니다. 승진할 나이입니다.\n", age);
        if (age = 65)
            printf("%d세 입니다. 퇴직할 나이입니다.\n", age);
    }
    return 0;
}