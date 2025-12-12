#include <stdio.h>
#define SEC_PER_MIN 60
int main(void)
{
    int sec, min, left;

    printf("초 수로 주어지는 시간을 분과 초로 변환합니다.\n");
    printf("초 수를 입력하시오 (<=0이면 끝):\n");

    scanf("%d", &sec);

    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;

        printf("%d 초는 %d 분, %d 초입니다.\n", sec, min, left);
        printf("다음 초 수를 입력하시오 (<=0이면 끝):\n");
        scanf("%d", &sec);
    }
    printf("끝\n");

    return 0;

}