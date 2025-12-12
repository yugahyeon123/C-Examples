#include <stdio.h>
#include <float.h>
int main(void) 
{
    double Num_One = 1.0/3.0;
    float Num_Two = 1.0f/3.0f;

    printf("%.4f %.4f\n", Num_One, Num_Two);
    printf("%.12f %.12f\n",Num_One, Num_Two);
    printf("%.16f %.16f\n", Num_One, Num_Two);
    printf("%d %d", FLT_DIG, DBL_DIG);

    return 0;
}