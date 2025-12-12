#include <stdio.h>
#define GALLON_TO_LITER 3.785
#define MILE_TO_KM 1.609
int main(void) 
{
    double Mile, Gallon, MilePerGallon, L_per_100km;

    printf("주행한 거리를 입력하세요(마일):\n");
    scanf("%lf", &Mile);

    printf("소비한 휘발유의 양을 입력하세요(갤런):\n");
    scanf("%lf", &Gallon);

    MilePerGallon = Mile/Gallon;
    L_per_100km = 100 * GALLON_TO_LITER / (MilePerGallon * MILE_TO_KM);

    printf("미국식 연비: %.1f MPG, 유럽식 연비: %.1f L/100km\n", MilePerGallon, L_per_100km);

    return 0;
}