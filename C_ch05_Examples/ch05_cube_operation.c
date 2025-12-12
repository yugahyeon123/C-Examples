#include <stdio.h>
void cube(void);
int main(void)
{
    cube();

    return 0;
}

void cube(void)
{
    float NUM;

    printf("float형 수를 입력하시오:\n");
    scanf("%f",&NUM);

    NUM = NUM * NUM * NUM;

    printf("세제곱:%.3f", NUM);
}