#include <stdio.h>
#include <ctype.h>
int main(void) 
{
    char c;

    printf("문자를 입력하세요:");
    c = get_frist();
    printf("선택된 문자: %c\n", c);
}
char get_frist(void)
{
    int ch;

    ch = getchar();

    while (getchar() != EOF && isspace(ch))
        continue;

    while (getchar() != '\n')
        continue;

    return ch;
}