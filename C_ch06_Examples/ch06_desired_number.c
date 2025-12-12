#include <stdio.h>
int main(void)
{
    int num = 0;

    for (printf("수를 계속해서 입력하세요\n"); num != 6;)
    {
        scanf("%d", &num);
    }
    printf("그것이 바로 내가 원하는 수입니다\n");
    return 0;
}