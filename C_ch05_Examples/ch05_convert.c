#include <stdio.h>
int main(void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C'; /* 라인 8 */
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* 라인 9 */

    ch = ch + 1; /* 라인 11 */
    i = fl + 2 * ch; /* 라인 12 */
    fl = 2.0 * ch + i; /* 라인 13 */
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* 라인 14 */

    ch = 1107; /* 라인 16 */
    printf("이제 ch = %c\n", ch); /* 라인 17 */

    ch = 80.99; /* 라인 19 */
    printf("이제 ch = %c\n", ch); /* 라인 20 */

    return 0; 
}