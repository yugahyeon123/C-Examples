#include <stdio.h>
int main(void)
{
    int arr[8];
    int i = 0;

    for (i = 0; i < 8; i++)
    {
        arr[i] = 1 << i;
    }

    i = 0;
    do {
        printf("%d\n", arr[i]);
        i++;
    } while (i < 8);
    return 0;
}