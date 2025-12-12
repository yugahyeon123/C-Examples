#include <stdio.h>
int main(void)
{
    char ch;

    printf("키보드를 영문 모드로 놓고, 문자 하나를 입력하시오.\n");
    scanf("%c",&ch);
    printf("문자 %c에 대응하는 코드값은 %d이다.\n",ch,ch);

    return 0;
}