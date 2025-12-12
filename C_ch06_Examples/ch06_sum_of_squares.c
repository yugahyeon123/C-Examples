#include <stdio.h>
int main(void)
{
    int Supermum, Infimum;
    int result = 0;

    printf("정수로 하한과 상한을 입력하시오:");

    while (1)
    {
        if (scanf("%d %d", &Infimum, &Supermum) != 2)
        {
            printf("입력이 잘못되었습니다.\n");
            return 1;
        }

        if (Supermum <= Infimum)
        {
            printf("종료\n");
            break;
        }

        for (int Count = Supermum - Infimum; Count >= 0; Count--)
        {
            result += Count * Count;

            if (Count == 0)
            {
                printf("%d부터 %d까지, 제곱들의 합은: %d \n",Infimum, Supermum, result);
                break;
            }
        }
        result = 0;
        printf("다음 하한과 상한을 입력하시오:");
    }
    return 0;
}