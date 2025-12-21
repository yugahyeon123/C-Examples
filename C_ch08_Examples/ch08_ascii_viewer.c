#include <stdio.h>
int main(void)
{
    int ch;
    int col = 0;

    printf("문자를 입력해주세요:\n");

    while ((ch = getchar()) != EOF)
    {
        if (ch < 32)
        {
            if (ch == '\n')
                {
                    printf("\\n");
                    printf("\n");
                    col = 0;
                    continue;
                }
                else if (ch == '\t')
                    printf("\\t");
                else
                    printf("^%c", ch + 64);
        }
        else
            putchar(ch);
        
        printf(" %d", ch);

        col++;
        if (col % 2 == 0)
            printf("\n");
        else
            printf("\t");
    }
    return 0;
}