#include <stdio.h>
int main(void)
{
    float length, width;

    printf("사각형의 길이를 입력하시오:\n");
    
    while (scanf("%f", &length) == 1)
    {
        printf("길이 = %0.2f:\n", length);
        printf("너비를 입력하시오:\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("너비 = %0.2f:\n", width);
        printf("넓이 = %0.2f:\n", length * width);
        printf("사각형의 길이를 입력하시오:\n");
    }
    printf("종료\n");

    return 0;
}