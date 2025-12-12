#include <stdio.h>
int main(void)
{
    int Start, End;
    
    printf("시작할 정수를 입력해주세요:");
    scanf("%d", &Start);

    printf("마감할 정수를 입력해주세요:");
    scanf("%d", &End);

    printf("정수 제곱 세제곱\n");

    for (int i = Start; i <= End; i++ )
    {
        printf("%3d %4d %6d\n",i, i*i, i*i*i);
    }
    return 0;

    
}