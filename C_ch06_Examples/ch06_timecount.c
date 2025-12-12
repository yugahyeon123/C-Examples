#include <stdio.h>
int main(void)
{
    int secs;

    for (secs = 5; secs > 0; secs--)
    {
        printf("%d초\n", secs);
    }
    printf("발사\n");
    return 0;
}