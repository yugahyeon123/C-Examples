#include <stdio.h>
int main(void)
{
    int n = 5;

    while (n < 7)
    {
        printf("n = %d\n", n);
        n++;
        printf("이제 n = %d\n", n);
    }
    printf("루프가 끝났다.\n");

    return 0;
}