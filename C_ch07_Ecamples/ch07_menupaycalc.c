#include <stdio.h>
#define Fifteen 0.15
#define Twenty 0.20
#define TwentyFive 0.25
#define ChoiceOne 8.75
#define ChoiceTwo 9.33
#define ChoiceThree 10.00
#define ChoiceFour 11.20
int main(void)
{
    double Grosspay = 0.0;
    double Taxes = 0.0;
    double Netpay = 0.0;
    int OverTime = 0;
    int Time;
    int UserChoice;

    printf("*******************************************************************\n");
    printf("자신의 기본급에 해당하는 번호를 선택하세요 (끝내려면 5번을 선택하시오):\n");
    printf("1 ) 시간당 $8.75            2 ) 시간당 $9.33\n");
    printf("3 ) 시간당 $10.00           4 ) 시간당 $11.20\n");
    printf("5 ) 종료\n");
    printf("*******************************************************************\n");

    while (1)
    {
        if (scanf("%d", &UserChoice) != 1)
        {
            printf("잘못된 선택입니다. 숫자를 입력하세요.\n");
            while (getchar() != '\n');
            continue;
        }
        if (UserChoice == 5)
            break;
        
        if (UserChoice < 1 || UserChoice > 4)
        {
            printf("잘못된 선택입니다. 1 ~ 4중에 선택하세요.\n");
            continue;
        }

        printf("노동 시간을 입력해주세요: ");
        scanf("%d", &Time);

        OverTime = Time - 40;

        if (Time <= 40)
        {
            if (UserChoice == 1)
                Grosspay = Time * ChoiceOne;
            else if (UserChoice == 2)
                Grosspay = Time * ChoiceTwo;
            else if (UserChoice == 3)
                Grosspay = Time * ChoiceThree;
            else
                Grosspay = Time * ChoiceFour;
        }
        else 
        {
            if (UserChoice == 1)
                Grosspay = 40 * ChoiceOne + OverTime * ChoiceOne * 1.5;
            else if (UserChoice == 2)
                Grosspay = 40 * ChoiceTwo + OverTime * ChoiceTwo * 1.5;
            else if (UserChoice == 3)
                Grosspay = 40 * ChoiceThree + OverTime * ChoiceThree * 1.5;
            else 
                Grosspay = 40 * ChoiceFour + OverTime * ChoiceFour * 1.5;
        }
        if (Grosspay <= 300)
            Taxes = Grosspay * Fifteen;
        else if (Grosspay <= 450)
            Taxes = Grosspay * Twenty;
        else
            Taxes = Grosspay * TwentyFive;
        Netpay = Grosspay - Taxes;

        printf("총소득 %.2lf 세금 %.2lf 순소득 %.2lf\n", Grosspay, Taxes, Netpay);
    }
    return 0;
}