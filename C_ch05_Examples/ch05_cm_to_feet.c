#include <stdio.h>
int main() 
{
    int feet;
    int firsttime = 1;
    double Cm, Inch;

    while (1)
    {
        if (firsttime)
        {
            printf("센티미터 단위로 키를 입력하시오:");
            firsttime = 0;
        }
        else
        {
            printf("센티미터 단위로 키를 입력하시오(끝내려면 <= 0):");
        }
        scanf("%lf", &Cm);

        if (Cm <= 0)
        {
            break;
        }

        Inch = Cm / 2.54;
        feet = Inch / 12;

        printf("%.1f센티미터 단위는 %d피트, %.1f인치 입니다.\n", Cm, feet, Inch);

    }

    printf("안녕!");

}