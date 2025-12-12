#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;

    printf("신발 사이즈(남자용)        발길이\n");
    shoe = 3.0;
    while (shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f 인치\n", shoe, foot);
        shoe = shoe + 1.0;
    }
    printf("그 신발이 발에 맞는다면, 그것을 신으세요.\n");

    return 0;

}