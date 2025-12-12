#include <stdio.h>
int main(void)
{
    int ROWS = 5;
    int row, i;
    int idx = 0;

    char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int count[5] = {1, 2, 4, 5, 6};  
    int skip[5]  = {0, 3, 0, 0, 0};   

    for (row = 0; row < ROWS; row++)
    {
        for (i = 0; i < count[row]; i++)
        {
            printf("%c", lets[idx]);
            idx++;
        }

        idx += skip[row];

        printf("\n");
    }

    return 0;
}