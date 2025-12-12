#include <stdio.h>
#define COVERAGE 350
int main(void)
{
    int sq_feet;
    int cans;
    
    printf("페인트로 칠할 면적을 평방피트 단위로 입력하시오:\n");
    while (scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
        printf("페인트 %d통(%s)을 구입해야 한다.\n", cans, cans == 1 ? "can" : "cans");
        printf("다음 값을 입력하시오(끝내려면 q):\n");
    }
    return 0;
}