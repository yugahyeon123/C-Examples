#include <stdio.h>
int main(void)
{
    char ch;

    int Spaces = 0;
    int Newlines = 0;
    int others = 0;
    
    printf("문자를 입력해주세요:\n");
    
    while (scanf("%c", &ch) ==  1 && ch != '#')
    {
        if (ch == ' ')
            Spaces++;
        if (ch == '\n')
            Newlines++;
        else
            others++;
    }

    printf("스페이스 수 %d개 읽은 개행 문자 수 %d개 기타 문자 수 %d개 입니다.\n",Spaces, Newlines, others);
    return 0;
}