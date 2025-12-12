#include <stdio.h>
int main(void)
{
    int  n = 3;

    while (n)
    {
        printf("%2d: 참\n", n--);
    }
    printf("%2d: 거짓\n", n);

    n = -3;
    while (n)
    {
        printf("%2d: 참\n", n++);
    }
    printf("%2d: 거짓\n", n);

    return 0;
}