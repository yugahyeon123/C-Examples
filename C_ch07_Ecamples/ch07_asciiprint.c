#include <stdio.h>
int main(void)
{
    char ch;

    int count = 0;
    
    printf("문자를 입력해주세요:\n");
    
    while (scanf("%c", &ch) ==  1 && ch != '#')
    {
        printf("%c %d ",ch, ch);
        count++;

        if (count % 8 == 0)
            printf("\n");
    }
    return 0;
}