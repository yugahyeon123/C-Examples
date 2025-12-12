#include <stdio.h>
int main() 
{
    double body_cm;
    double body_inch;

    printf("키를 센티미터 단위로 입력: ");
    scanf("%lf",&body_cm);

    body_inch = body_cm / 2.54;

    printf("%f cm 는 %f inch 이다.", body_cm, body_inch);
    
    return 0;
}