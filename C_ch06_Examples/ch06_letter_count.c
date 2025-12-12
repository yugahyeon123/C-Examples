#include <stdio.h>
int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c에 해당하는 ASCII 코드값은 %d입니다.\n", ch, ch);
    }
    return 0;
}