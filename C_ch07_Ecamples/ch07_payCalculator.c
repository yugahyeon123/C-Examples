#include <stdio.h>
int main(void)
{
    double GrossPay = 0.0;
    double Taxes = 0.0;
    double NetPay = 0.0;
    int OverTime = 0;
    int Time;

    printf("일주일 노동시간을 입력해주세요:\n");
    scanf("%d", &Time);

    OverTime = Time - 40;

    if (Time > 40)
    {
        GrossPay += 40 * 10.0 + OverTime * 10.0 * 1.5;
    }
    
    if (GrossPay >= 0 && GrossPay <= 300)
        Taxes += GrossPay * 0.15;
    else if (GrossPay <= 450)
        Taxes += GrossPay * 0.20;
    else
        Taxes += GrossPay * 0.25;
    NetPay = GrossPay - Taxes;

    printf("총소득 %.2lf 세금 %.2lf 순소득 %.2lf", GrossPay, Taxes, NetPay);
}