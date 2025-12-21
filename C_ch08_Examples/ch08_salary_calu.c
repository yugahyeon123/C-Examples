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
    char UserChoice;

    printf("*******************************************************************\n");
    printf("자신의 기본급에 해당하는 문자를 선택하세요 (끝내려면 5번을 선택하시오):\n");
    printf("a ) 시간당 $8.75            b ) 시간당 $9.33\n");
    printf("c ) 시간당 $10.00           d ) 시간당 $11.20\n");
    printf("q ) 종료\n");
    printf("*******************************************************************\n");

    while (1)
    {
        if (scanf(" %c", &UserChoice) != 1)
        {
            printf("잘못된 선택입니다. 문자를 입력하세요.\n");
            while (getchar() != '\n');
            continue;
        }
        if (UserChoice == 'q')
            break;
        
        if (UserChoice != 'a' && UserChoice != 'b' && UserChoice != 'c' && UserChoice != 'd' && UserChoice != 'q')
        {
            printf("잘못된 선택입니다. a ~ d중에 선택하세요.\n");
            continue;
        }

        printf("노동 시간을 입력해주세요: ");
        scanf("%d", &Time);

        OverTime = Time - 40;

        if (Time <= 40)
        {
            if (UserChoice == 'a')
                Grosspay = Time * ChoiceOne;
            else if (UserChoice == 'b')
                Grosspay = Time * ChoiceTwo;
            else if (UserChoice == 'c')
                Grosspay = Time * ChoiceThree;
            else
                Grosspay = Time * ChoiceFour;
        }
        else 
        {
            if (UserChoice == 'a')
                Grosspay = 40 * ChoiceOne + OverTime * ChoiceOne * 1.5;
            else if (UserChoice == 'b')
                Grosspay = 40 * ChoiceTwo + OverTime * ChoiceTwo * 1.5;
            else if (UserChoice == 'c')
                Grosspay = 40 * ChoiceThree + OverTime * ChoiceThree * 1.5;
            else 
                Grosspay = 40 * ChoiceFour + OverTime * ChoiceFour * 1.5;
        }
        if (Grosspay <= 300)
            Taxes = Grosspay * Fifteen;
        else if (Grosspay <= 450)
            Taxes = 300 * Fifteen + (Grosspay - 300) * Twenty;
        else
            Taxes = 300 * Fifteen + 150 * Twenty; + (Grosspay - 450) * TwentyFive;
        Netpay = Grosspay - Taxes;

        printf("총소득 %.2lf 세금 %.2lf 순소득 %.2lf\n", Grosspay, Taxes, Netpay);
    }
    return 0;
}