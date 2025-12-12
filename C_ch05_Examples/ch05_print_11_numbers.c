#include <stdio.h>
int main() 
{
    int num;
    int count = 0;

    printf("정수를 입력하시오:\n");
    scanf("%d",&num);

    while (count < 11)
    {
        printf("%5d",num);
        num++;
        count++;
    }
    return 0;
}