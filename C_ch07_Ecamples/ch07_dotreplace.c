#include <stdio.h>
int main(void)
{
    char ch;
    int count = 0;

    printf("문자를 입력해주세요:\n");
    
    while(scanf("%c", &ch) == 1 && ch != '#')
    {
        if (ch == '.')
        {
            printf("??");
            count++;
        }
        else
        {
            putchar(ch);
        }
    }
    printf("\n대체한 횟수 %d개\n", count);
    return 0;
}