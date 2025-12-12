#include <stdio.h>
#define ArtichokesPerPound 2.05
#define BeetsPerPound 1.15
#define CarrotsPerPound 1.09
int main(void)
{
    double ChoiceArtichokesPound, ChoiceBeetsPound, ChoiceCarrotsPound;
    double TotalPound = 0;
    double DiscountPrice = 0.0;
    double DeliveryCharge = 6.50;
    double BeforePrice = 0.0;
    double TotalPrice = 0.0;
    double ArtichokesOrderPrice, BeetsOrderPrice, CarrotsOrderPrice;
    int Code;

    printf("총 주문할 아티초크 무게(파운드)를 입력하세요.\n");
    scanf("%lf", &ChoiceArtichokesPound);
    
    printf("총 주문할 당근 무게(파운드)를 입력하세요.\n");
    scanf("%lf", &ChoiceBeetsPound);

    printf("총 주문할 비트 무게(파운드)를 입력하세요.\n");
    scanf("%lf", &ChoiceCarrotsPound);

    TotalPound = ChoiceArtichokesPound + ChoiceBeetsPound + ChoiceCarrotsPound;

    ArtichokesOrderPrice = ArtichokesPerPound * ChoiceArtichokesPound;
    CarrotsOrderPrice = CarrotsPerPound * ChoiceCarrotsPound;
    BeetsOrderPrice = BeetsPerPound * ChoiceBeetsPound;

    BeforePrice = ArtichokesOrderPrice + CarrotsOrderPrice + BeetsOrderPrice;
    
    if (TotalPound >= 5.0 && TotalPound < 20.0) Code = 1;
    else Code = 2;

    switch (Code)
    {
        case 1:
            TotalPrice = BeforePrice + DeliveryCharge;
            break;
        case 2:
            DeliveryCharge = 14.00 + TotalPound * 0.005;
            BeforePrice += DeliveryCharge;
            if (BeforePrice >= 100.0)
            {
                DiscountPrice = BeforePrice * 0.5;
                TotalPrice = BeforePrice - DiscountPrice;
            }
            else
                TotalPrice = BeforePrice; 
            break;
    }

    printf("총 구매 정보\n");
    printf("각 야채별 파운드 당 가격: 아티초크: %.2lf 비트: %.2lf 당근: %.2lf\n", ArtichokesPerPound, BeetsPerPound, CarrotsPerPound);
    printf("주문 양 %.2lf\n", TotalPound);
    printf("각 야채당 주문 비용: 아티초크: %lf 비트: %lf 당근: %lf\n", ArtichokesOrderPrice, BeetsOrderPrice, CarrotsOrderPrice);
    printf("총 구매 합산: %.2lf\n", BeforePrice);
    if (DiscountPrice > 0)
    {
        printf("할인 가격: %.2lf\n", DiscountPrice);
    }
    printf("배송비: %.2lf\n", DeliveryCharge);
    printf("총 청구 금액: %.2lf", TotalPrice);

    return 0;
}