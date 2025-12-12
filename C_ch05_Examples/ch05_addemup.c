#include <stdio.h>
int main(void)
{
    int count, sum; /* 선언문 */

    count = 0; /* 대입문 */
    sum = 0; /* 대입문 */

    while (count++ < 20) /* while문 */
    {
        sum = sum + count; /* 문장 (while문) */
    }
    printf("합 = %d\n", sum); /* 함수문 */

    return 0; /* return문 */
}