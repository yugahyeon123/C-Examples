#include <stdio.h>
int main(void)
{
    float FirstOperand, SecondOperand, result;
    char Choice;

    while (1)
    {
        printf("원하는 연산에 해당하는 문자를 선택하시오(끝내려면 q):\n");
        printf("a. add(덧셈)                   s. subtract(뺼셈)\n");
        printf("m. multiply(곱셈)              d. divide(나눗셈)\n");
        printf("q. quit(종료)\n");

        if (scanf(" %c", &Choice) != 1)
        {
            printf("잘못된 선택입니다. 문자를 입력하세요.\n");
            while (getchar() != '\n');
            continue;
        }

        if (Choice == 'q')
        {
            printf("종료.");
            break;
        }

        if (Choice != 'a' && Choice != 's' && Choice != 'm' && Choice != 'd' && Choice != 'q')
        {
            printf("잘못된 선택입니다. a, m, s, d, q 중에 선택하세요.\n");
            continue;
        }
        
        while (1)
        {
            printf("첫 번째 수를 입력하세요:");
            if (scanf("%f", &FirstOperand) == 1)
            {
                break;
            }
            else
            {
                printf("수가 아닙니다. 2.5, -1.78E8, 3과 같은 수를 입력하시오.\n");
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                continue;
            }
        }

        while (1)
        {
            printf("두 번쨰 수를 입력하시오:");
            if (scanf("%f", &SecondOperand) == 1)
            {
                if (Choice == 'd' && SecondOperand == 0)
                {
                    printf("0이 아닌 다른 수를 입력하시오.\n");
                    continue;
                }
                break;
            }
            else
            {
                printf("수가 아닙니다. 2.5, -1.78E8, 3과 같은 수를 입력하시오.\n");
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
                continue;
            }
        }

        if (Choice == 'a')
        {
            result = FirstOperand + SecondOperand;
            printf("%f + %f = %f\n", FirstOperand, SecondOperand, result);
        }

        if (Choice == 's')
        {
            result = FirstOperand - SecondOperand;
            printf("%f - %f = %f\n", FirstOperand, SecondOperand, result);
        }

        if (Choice == 'm')
        {
            result = FirstOperand * SecondOperand;
            printf("%f * %f = %f\n", FirstOperand, SecondOperand, result);
        }

        if (Choice == 'd')
        {
            result = FirstOperand / SecondOperand;
            printf("%f / %f = %f\n", FirstOperand, SecondOperand, result);
        }
    }
    return 0;
}