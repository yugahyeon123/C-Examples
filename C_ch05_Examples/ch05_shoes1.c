#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("신발 사이즈(남자용) 발길이\n");
    printf("%10.1f %15.2f 인치\n", shoe, foot);

    return 0;
    
}