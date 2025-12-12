#include <stdio.h>
int main(void)
{
    int i = 0;
    while (i < 3)
    {
        switch (i++)
        {
            case 0 : printf("fat ");
            case 1 : printf("hat ");
            case 2 : printf("cat ");
            default : printf("0h no!");
        }
        putchar('\n');
    }
    return 0;
}