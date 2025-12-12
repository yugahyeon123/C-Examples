#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void)
{
    char c; // 현재 읽은 문자
    char prev; // 바로 전에 읽은 문자
    long n_chars = 0L; // 문자 수
    int n_lines = 0; // 라인 수
    int n_words = 0; // 단어 수
    int p_lines = 0; //불완전 라인 수
    bool inword = false; // c가 여전히 한 단어 안에 속해 있으면 true

    printf("분석할 영문 텍스트를 입력하세요(끝내려면 |):\n");
    prev = '\n';
    while ((c = getchar()) != STOP)
    {
        n_chars++;
        if (c == '\n')
            n_lines++;
        if (!isspace(c) && !inword)
        {
            inword = true;
            n_words++;
        }
        if (isspace(c) && inword)
            inword = false;
        prev = c;
    }
    
    if (prev != '\n')
        p_lines = 1;
    printf("문자 수 = %ld, 단어 수 = %d, 라인 수 = %d,", n_chars, n_words, n_lines);
    printf("불완전 라인 수 = %d\n", p_lines);

    return 0;

}