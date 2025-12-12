#include <stdio.h>
int main(void)
{
    int i, j;
    char ch = '$';

    for (i = 1; i < 5; i++)
    {
        for (j = 1; j < 9; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;

}