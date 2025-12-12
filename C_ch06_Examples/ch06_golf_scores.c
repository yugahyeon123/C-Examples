#include <stdio.h>
#define SIZE 10
#define PAR 72
int main(void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;

    printf("%d개의 골프 스코어를 입력하시오:\n",SIZE);
    for (index = 0; index < SIZE; index++)
    {
        scanf("%d", &score[index]);
    }
    printf("읽은 스코어들은 다음과 같다:\n");
    for (index = 0; index < SIZE; index++)
    {
        printf("%5d", score[index]);
    }
    printf("\n");
    for (index = 0; index < SIZE; index++)
    {
        sum += score[index];
    }
    average = (float) sum / SIZE;
    printf("스코어의 합 = %d, 평균 = %.2f\n", sum, average);
    printf("핸디캡이 %.0f이다.\n", average - PAR);

    return 0;
    
}