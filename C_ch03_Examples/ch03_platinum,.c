#include <stdio.h>
int main(void)
{
    float weight;
    float value;

    printf("당신의 몸무게를 플래티넘 가치로 계산하면 얼마나 나갈까요?\n");
    printf("어디 한번 계산해 봅시다.\n");
    printf("몸무게를 파운드 단위로 입력하십시오:");
    scanf("%f",&weight);

    value = 1700.0 * weight * 14.5833;
    printf("당신의 몸무게를 플레티넘 가치로 계산하면 $%.2f입니다.\n",value);
    printf("당신의 몸값은 그 정도 가치가 나갑니다. 플레티넘 가격이 떨어지면,\n");
    printf("가치를 유지하기 위해 식사량을 늘려야 합니다.\n");

    return 0;
}