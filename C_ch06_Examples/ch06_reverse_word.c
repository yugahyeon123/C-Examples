#include <stdio.h>
#include <string.h>
int main(void)
{
    int length;
    char ch[20];

    printf("단어 입력:");
    scanf("%s",ch);

    length = strlen(ch);

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c\n", ch[i]);
    }
    printf("마지막 문자의 인덱스: %d", length - 1);
    return 0;
    
}