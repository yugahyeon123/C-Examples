#include <stdio.h>
int main(void)
{
    char user;
    int i, j;

    printf("알파벳 문자 하나를 입력해주세요: ");
    scanf(" %c", &user);

    int rows = user - 'A' + 1;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        if (i == 2)
        {
            for (j = 0; j < i + 1; j++)
            {
                printf("%c", 'A' + j);
            }
        } else {

            for (j = 0; j < i; j++)
            {
                printf("%c", 'A' + j);
            }

            for (j = i - 2; j >= 0; j--)
            {
                printf("%c", 'A' + j);
            }
        }

        printf("\n");
    }
    return 0;
}