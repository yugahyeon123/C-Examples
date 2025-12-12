#include <stdio.h>
#define SQUARES 64
int main(void)
{
    const double CROP = 2E16;
    double current, total;
    int count = 1;

    printf("네모칸   추가      누계      ");
    printf("세계 수확량과의\n");
    printf("번  호   낱알 수     낱알 수  ");
    printf("상대 비율\n");

    total = current = 1.0;
    printf("%4d %13.2e %12.2e\n", count, current, total, total/CROP);

    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;

        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);

    }
    printf("이제 끝이다.\n");

    return 0;

}