#include <stdio.h>
int main(void)
{
    int weight, height;

    printf("몸무게는 파운드 단위로 입력하고");
    printf("키는 인치 단위로 입력하시오.\n");
    scanf("%d %d", &weight, &height);

    if (weight < 100 && height > 64)
        if(height >= 72)
            printf("몸무게에 비해 키가 너무 크네요.\n");
        else
            printf("몸무게에 비해 키가 조금 크네요.\n");
    else if (weight > 300 && height < 48)
        printf("몸무게에 비해 키가 아주 작네요.\n");
    else
        printf("이상적인 몸무게 입니다.\n");

    return 0;
}