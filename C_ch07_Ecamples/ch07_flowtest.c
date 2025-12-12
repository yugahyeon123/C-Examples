#include <stdio.h>
int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
    {
        if (ch != '\n')
        {
            printf("1단계\n");
            if (ch == 'b')
                break;
            if (ch == 'h')
            {
                printf("3단계\n");
            }
            else if (ch != 'c')
            {
                printf("2단계\n");
                printf("3단계\n");
            }
        }
    }
    printf("종료\n");
    return 0;
}