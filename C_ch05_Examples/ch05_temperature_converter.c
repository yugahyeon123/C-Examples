#include <stdio.h>
void Temperatures(double Fahrenheit);
int main(void)
{
    double Fahrenheit;

    printf("화씨온도를 입력하세요 (q 또는 문자를 입력하면 종료): ");

    while (scanf("%lf", &Fahrenheit) == 1)
    {
        Temperatures(Fahrenheit);
        printf("\n다음 화씨온도를 입력하세요 (q 종료): ");
    }

    printf("\n종료합니다.\n");

    return 0;
}

void Temperatures(double Fahrenheit)
{
    const double FirstConstant = 5.0;
    const double SecondConstant = 9.0;
    const double ThirdConstant = 32.0;

    double Celsius = FirstConstant / SecondConstant * (Fahrenheit - ThirdConstant);
    double absolute = Celsius + 273.16;

    printf("섭씨온도: %.2lf, 절대온도: %.2lf", Celsius, absolute);
}