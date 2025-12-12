#include <stdio.h>
int main(void)
{
    int  m, n;

    for (m = 0; m < 5; m++)
    {
        for (n = 0; n <= m; n++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}