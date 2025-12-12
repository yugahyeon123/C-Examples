#include <stdio.h>
int main(void)
{
    int ROWS = 6, row, i;
    char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (row = 0; row < ROWS; row++)
    {
        for (i = 0; i <= row; i++)
        {
            printf("%c", lets[5-i]);
        }
        printf("\n");

    }
    return 0;
}