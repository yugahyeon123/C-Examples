#include <stdio.h>
int main(void)
{
    int ch;
    int SmallLetter = 0;
    int BigLetter = 0;

    printf("문자를 입력해주세요:\n");

    while ((ch = getchar()) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
            SmallLetter++;
        else if (ch >= 'A' && ch <= 'Z')
            BigLetter++;
    }
    printf("소문자 수:%d 대문자 수:%d", SmallLetter, BigLetter);

    return 0;
}