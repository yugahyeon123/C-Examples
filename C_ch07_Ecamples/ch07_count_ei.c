#include <stdio.h>
int main(void)
{
    char ch;
    char prev = 0;
    int count = 0;

    printf("문자를 입력하세요:\n");

    while (scanf("%c", &ch) == 1 && ch != '#')
    {
        if (prev == 'e' && ch == 'i')
            count++;
        prev = ch;
    }

    printf("ei가 나타난 횟수 %d", count);
    return 0;
    
}