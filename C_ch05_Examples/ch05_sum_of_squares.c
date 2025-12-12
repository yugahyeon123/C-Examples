#include <stdio.h>
int main()
{
    int money = 1;
    int sum = 0;
    int day;
    
    printf("날짜를 입력하세요:\n");
    scanf("%d", &day);

    while (day-- > 0)
    {
        sum = sum + (money * money);
        money++;
    }
    printf("당신이 받을 돈:%d", sum);
    return 0;

}