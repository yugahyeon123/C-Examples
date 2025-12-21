#include <stdio.h>
int main(void)
{
    int ch;
    int letterCount = 0;
    int inword = 0;
    int WordCount = 0;

    printf("문자를 입력해주세요:\n");

    while ((ch = getchar()) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            letterCount++;
            inword = 1;
        }

        else if (ch == ' ' || ch == '\t' || ch == '\n')
        {
            if (inword)
            {
                WordCount++;
                inword = 0;
            }
        }
    }

    if (inword)
        WordCount++;
    
    if (WordCount > 0)
    {
        double avg = (double)letterCount / WordCount;
        printf("평균 글자 수: %.2f\n", avg);
    }
    else
        printf("입력된 단어가 없습니다.\n");
    return 0;
}